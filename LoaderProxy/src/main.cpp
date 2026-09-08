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
        Log()<<"Failed to load mod "<<path;
        return;
    }
    Log()<<"Loading mod "<<path;

    auto mod_init =
        reinterpret_cast<ModInit>(
            GetProcAddress(mod, "Initialise")
        );

    if (!mod_init)
    {
        Log()<<"mod_init not found for "<<path;
        return;
    }

    mod_init(&api, path);
}

void LoadMods()
{
    std::string mod_names;
    for (auto& mod : ModManager::enabled_mods)
    {
        mod_names += "\t";
        mod_names += mod.name;
        mod_names += "\n";
    }

    PrimordialisLog("\nTHIS SESSION HAS BEEN MODIFIED USING THE PILUS MODLOADER AND THE FOLLOWING MODS:\n"+mod_names+
                    "\nREPORT BUGS CAUSED BY MODS TO THE DEVELOPERS OF THE MODS AND MODDING SDK, NOT THE DEVELOPERS OF PRIMORDIALIS!\n");

    for (auto& mod : ModManager::enabled_mods)
    {
        LoadMod(mod.name.c_str());
    }

    Log()<<"All Mods Initialised!";
}

void* trampoline;
uint64_t ThreadMainHook(void *context)
{
    auto original = reinterpret_cast<uint64_t(*)(void*)>(trampoline);
    if (*(int*)context == 0)
    {
        Log() << "Starting mod loader";

        // Log() << "RVA = " << ResolveSymbol("get_material_index") << "";

        if (ModManager::loader_files_path.empty())
        {
            Log() << "Loader file path not given!\nNo mods will be loaded.";
            return original(context);
        }
        ModManager::ParseMods();
        Log() << "Mod Count:"<<ModManager::enabled_mods.size();
        ModManager::InjectAll();
        nucleus = &api;
        LoadMods();
    }

    return original(context);
}

void Bootstrap()
{

    Log()<<"Hello world!";

    if (MH_Initialize() != MH_OK)
    {
        Log()<<"MinHook init failed";
        return;
    }
    Log()<<"MinHook initialized";

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