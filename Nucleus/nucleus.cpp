#include <cstdint>
#include <MinHook.h>
#include <windows.h>
#include <string>
#include <unordered_map>
#include <tlhelp32.h>
#include "../Plasmid/include/nucleus_interface.h"

#include <dbghelp.h>
#pragma comment(lib, "dbghelp.lib")

template<typename... Args>
void Log(Args... args)
{
    LogTemplate("NUCLEUS", args...);
}

std::unordered_map<std::string, void*> symbol_cache;
void* ResolveSymbol(const char* name)
{
    static bool initialized = false;
    if (!initialized)
    {
        SymSetOptions(
            SYMOPT_UNDNAME |
            SYMOPT_DEFERRED_LOADS
        );

        if (!SymInitialize(GetCurrentProcess(), nullptr, TRUE))
        {
            Log("SymInitialize failed: %lu\n", GetLastError());
            return nullptr;
        }
        Log("DbgHelp initialized\n");

        initialized = true;
    }

    Log("Resolving symbol '%s'\n", name);
    void* addr = symbol_cache[name];
    if (!addr)
    {
        Log("Symbol '%s' not found in cache, resolving from PDB\n", name);

        char buffer[sizeof(SYMBOL_INFO) + MAX_SYM_NAME];
        memset(buffer, 0, sizeof(buffer));

        auto* symbol = reinterpret_cast<SYMBOL_INFO*>(buffer);

        symbol->SizeOfStruct = sizeof(SYMBOL_INFO);
        symbol->MaxNameLen = MAX_SYM_NAME;

        if (!SymFromName(GetCurrentProcess(), name, symbol))
        {
            Log(
                "Failed to resolve symbol '%s': %lu\n",
                name,
                GetLastError()
            );
            return nullptr;
        } else
        {
            addr = reinterpret_cast<void*>(symbol->Address);
            Log("Successfully resolved symbol '%s' from PDB at address %p\n",
                name,
                addr
            );
        }
        symbol_cache[name] = addr;
        return addr;
    }

    Log("Successfully resolved symbol '%s' from cache at address %p\n", name, addr);
    return addr;
}

bool HookWrapper(void* target, void* hook, void** trampoline)
{
    Log("Attempting Hooking address %p\n", target);

    auto status = MH_CreateHook(
        target,
        hook,
        trampoline);

    if (status != MH_OK)
    {
        Log("MH_CreateHook failed: %d\n", status);
        return false;
    }

    status = MH_EnableHook(target);

    if (status != MH_OK)
    {
        Log("MH_EnableHook failed: %d\n", status);
        return false;
    }

    Log("Hooking successful!\n\tTarget: %p\n\tHook: %p\n\tTrampoline: %p\n", target, hook, trampoline);

    return true;
}

void* CreateHook(const char* name, void* hook){

    void* target = ResolveSymbol(name);
    void* trampoline = nullptr;

    Log("Creating hook for %s at %p to %p\n", name, target, hook);

    HookWrapper(
        target,
        hook,
        &trampoline
    );

    return trampoline;
}

thread_local void* current_context;

void* GetCurrentContext()
{
    return current_context;
}

void SetCurrentContext(void* context)
{
    current_context = context;
}


NucleusRuntimeAPI api
{
    ResolveSymbol,
    CreateHook,
    {},
    GetCurrentContext,
    SetCurrentContext
};

struct ModInfo
{
    char name[MAX_PATH];
};

struct ModListShared
{
    uint32_t count;
    ModInfo mods[256];
};

using ModInit = void(*)(NucleusRuntimeAPI*);
using ModMain = void(*)();

void LoadMod(const char* path)
{
    HMODULE mod = LoadLibraryA(path);

    if (!mod)
    {
        Log("Failed to load mod %s\n", path);
        return;
    }
    Log("Loading mod %s\n", path);

    auto mod_init =
        reinterpret_cast<ModInit>(
            GetProcAddress(mod, "Initialise")
        );

    if (!mod_init)
    {
        Log("mod_init not found\n");
        return;
    }

    mod_init(&api);
}

DWORD WINAPI MainThread(LPVOID)
{
    AllocConsole();

    FILE* file;
    freopen_s(&file, "CONOUT$", "w", stdout);

    Log("Hello from Runtime API!\n");

     if (MH_Initialize() != MH_OK)
     {
         Log("MinHook init failed\n");
         return 0;
     }
     Log("MinHook initialized\n");

    HANDLE mapping =
    OpenFileMappingA(
        FILE_MAP_READ,
        FALSE,
        "Pilus_ModList");

    auto* shared =
    static_cast<ModListShared*>(
        MapViewOfFile(
            mapping,
            FILE_MAP_READ,
            0,
            0,
            sizeof(ModListShared)));

    Log("Mod count: %i\n", shared->count);

    for (uint32_t i = 0; i < shared->count; i++)
    {
        ModInfo mod = shared->mods[i];
        LoadMod(mod.name);
    }

    HANDLE nucleusModsInitialisedEvent =
    CreateEventA(
        nullptr,
        TRUE,
        FALSE,
        "Nucleus_ModsInitialised"
        );

    SetEvent(nucleusModsInitialisedEvent);

    Log("All Mods Initialised!\n");

    while (true)
    {
        Sleep(1000);
    }
}

BOOL APIENTRY DllMain(
    HMODULE module,
    DWORD reason,
    LPVOID)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(module);

        CreateThread(
            nullptr,
            0,
            MainThread,
            nullptr,
            0,
            nullptr);
    }

    return TRUE;
}