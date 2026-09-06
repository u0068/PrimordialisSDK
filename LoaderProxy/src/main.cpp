#include <Windows.h>
#include <filesystem>
#include <string>
#include "steam_exports.h"
#include "mod_loader.h"
#include "nucleus_api.h"
#include "plasmid_api.h"

using ModInit = void(*)(Nucleus*, const char*);

void P::InitialiseMod(){}

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
        Log()<<"mod_init not found for "<<path<<"\n";
        return;
    }

    mod_init(&api, path);
}

void LoadMods()
{
    std::string mod_names;
    for (auto& mod : ModManager::mods)
    {
        if (not mod.enabled)
            continue;
        mod_names += "\t";
        mod_names += mod.name;
        mod_names += "\n";
    }

    PrimordialisLog("\nTHIS SESSION HAS BEEN MODIFIED USING THE PILUS MODLOADER AND THE FOLLOWING MODS:\n"+mod_names+
                    "\nREPORT BUGS CAUSED BY MODS TO THE DEVELOPERS OF THE MODS AND MODDING SDK, NOT THE DEVELOPERS OF PRIMORDIALIS!\n");

    for (auto& mod : ModManager::mods)
    {
        if (not mod.enabled)
            continue;
        LoadMod(mod.name.c_str());
    }

    Log()<<"All Mods Initialised!\n";
}

void* trampoline;
uint64_t ThreadMainHook(void *context)
{
    if (*(int*)context == 0)
    {
        Log() << "Hello from the hook!\n";
        ModManager::ParseMods();
        Log() << "Mod Count:"<<ModManager::mods.size()<<"\n";
        ModManager::InjectAll();
        LoadMods();
    }

    return reinterpret_cast<uint64_t(*)(void*)>(trampoline)(context);
}

void Bootstrap()
{
    AllocConsole();

    FILE* file;
    freopen_s(&file, "CONOUT$", "w", stdout);

    Log()<<"Hello world!\n";

    if (MH_Initialize() != MH_OK)
    {
        Log()<<"MinHook init failed\n";
        return;
    }
    Log()<<"MinHook initialized\n";

    InitDbgHelp();

    trampoline = CreateHook("thread_main", ThreadMainHook);
}

BOOL APIENTRY DllMain(
    HMODULE module,
    DWORD reason,
    LPVOID)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(module);
        Bootstrap();
    }

    return TRUE;
}