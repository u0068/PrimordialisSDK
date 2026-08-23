#include "nucleus_api.h"

const std::string NUCLEUS_VERSION = "v0.1.3";

struct ModInfo
{
    char name[MAX_PATH];
};

struct ModListShared
{
    uint32_t count;
    ModInfo mods[256];
};

using ModInit = void(*)(Nucleus*, const char*);

void LoadMod(const char* path)
{
    HMODULE mod = LoadLibraryA(path);

    if (!mod)
    {
        Log()<<"Failed to load mod "<<path<<"\n";
        return;
    }
    Log()<<"Loading mod "<<path<<"\n";

    auto mod_init =
        reinterpret_cast<ModInit>(
            GetProcAddress(mod, "Initialise")
        );

    if (!mod_init)
    {
        Log()<<"mod_init not found\n";
        return;
    }

    mod_init(&api, path);
}

DWORD WINAPI MainThread(LPVOID)
{
    AllocConsole();

    FILE* file;
    freopen_s(&file, "CONOUT$", "w", stdout);

    Log()<<"Hello from Nucleus "<<NUCLEUS_VERSION<<"!\n";

     if (MH_Initialize() != MH_OK)
     {
         Log()<<"MinHook init failed\n";
         return 0;
     }
     Log()<<"MinHook initialized\n";

    InitDbgHelp();

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

    HANDLE nucleusModsInitialisedEvent =
    CreateEventA(
        nullptr,
        TRUE,
        FALSE,
        "Nucleus_ModsInitialised"
        );

    Log()<<"Mod count: "<<shared->count<<"\n";

    std::string mod_names;
    for (uint32_t i = 0; i < shared->count; i++)
    {
        ModInfo mod = shared->mods[i];
        mod_names += "\t";
        mod_names += mod.name;
        mod_names += "\n";
    }

    PrimordialisLog("\nTHIS SESSION HAS BEEN MODIFIED USING THE NUCLEUS MODDING API "+NUCLEUS_VERSION+" AND THE FOLLOWING MODS:\n"
                    +mod_names+"\nREPORT BUGS CAUSED BY MODS TO THE DEVELOPERS OF THE MODS AND MODDING SDK, NOT THE DEVELOPERS OF PRIMORDIALIS!\n");

    for (uint32_t i = 0; i < shared->count; i++)
    {
        ModInfo mod = shared->mods[i];
        LoadMod(mod.name);
    }

    SetEvent(nucleusModsInitialisedEvent);

    Log()<<"All Mods Initialised!\n";

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