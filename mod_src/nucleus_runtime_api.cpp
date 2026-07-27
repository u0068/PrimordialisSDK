#include <cstdint>
#include <MinHook.h>
#include <windows.h>
#include <string>
#include <unordered_map>
#include <tlhelp32.h>
#include <vector>
#include "../include/primordialis_data/data_types.h"
#include "../include/shared.h"

#include <dbghelp.h>
#pragma comment(lib, "dbghelp.lib")

void Log(const char* message)
{
    printf("[Plasmid] %s\n", message);
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
            printf("SymInitialize failed: %lu\n", GetLastError());
            return 0;
        }
        printf("DbgHelp initialized\n");

        initialized = true;
    }

    printf("Resolving symbol '%s'\n", name);
    void* addr = symbol_cache[name];
    if (!addr)
    {
        printf("Symbol '%s' not found in cache, resolving from PDB\n", name);

        char buffer[sizeof(SYMBOL_INFO) + MAX_SYM_NAME];
        memset(buffer, 0, sizeof(buffer));

        auto* symbol = reinterpret_cast<SYMBOL_INFO*>(buffer);

        symbol->SizeOfStruct = sizeof(SYMBOL_INFO);
        symbol->MaxNameLen = MAX_SYM_NAME;

        if (!SymFromName(GetCurrentProcess(), name, symbol))
        {
            printf(
                "Failed to resolve symbol '%s': %lu\n",
                name,
                GetLastError()
            );
            return 0;
        } else
        {
            addr = reinterpret_cast<void*>(symbol->Address);
            printf("Successfully resolved symbol '%s' from PDB at address %p\n",
                name,
                addr
            );
        }
        symbol_cache[name] = addr;
        return addr;
    }

    printf("Successfully resolved symbol '%s' from cache at address %p\n", name, addr);
    return addr;
}

bool HookRaw(void* target, void* hook, void** trampoline)
{
    printf("Attempting Hooking address %p\n", target);

    auto status = MH_CreateHook(
        target,
        hook,
        trampoline);

    if (status != MH_OK)
    {
        printf("MH_CreateHook failed: %d\n", status);
        return false;
    }

    status = MH_EnableHook(target);

    if (status != MH_OK)
    {
        printf("MH_EnableHook failed: %d\n", status);
        return false;
    }

    printf("Hooking successful!\n");

    return true;
}

NucleusRuntimeAPI api
{
    Log,
    ResolveSymbol,
    AddHook
};

using ModInit = void(*)(NucleusRuntimeAPI*);
using ModMain = void(*)();

void LoadMod(const char* path)
{
    HMODULE mod = LoadLibraryA(path);

    if (!mod)
    {
        printf("Failed to load mod %s\n", path);
        return;
    }
    printf("Loading mod %s\n", path);

    auto mod_init =
        reinterpret_cast<ModInit>(
            GetProcAddress(mod, "Initialise")
        );

    if (!mod_init)
    {
        printf("mod_init not found\n");
        return;
    }

    mod_init(&api);

    auto mod_main =
        reinterpret_cast<ModMain>(
            GetProcAddress(mod, "mod_main")
        );


    if (!mod_main)
    {
        printf("mod_main not found\n");
        return;
    }

    mod_main();
}

DWORD WINAPI MainThread(LPVOID)
{
    AllocConsole();

    FILE* file;
    freopen_s(&file, "CONOUT$", "w", stdout);

    printf("Hello from Runtime API!\n");

     if (MH_Initialize() != MH_OK)
     {
         printf("MinHook init failed\n");
         return 0;
     }
     printf("MinHook initialized\n");

    LoadMod("example_mod.dll");

    // Sleep(1000);

    // LoadMod("example_mod - Copy.dll");
    // LoadMod("test_mod.dll");

    while (true)
    {
        Sleep(1000);
    }

    return 0;
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