#include <Windows.h>
#include <filesystem>
#include <string>

#include "lua_setup.h"
#include "mod_loader.h"
#include "nucleus_api.h"
#include "plasmid_api.h"
#include "include/primordialis_log.h"

constexpr std::string NUCLEUS_VERSION = "0.2.0";

using ModInit = void(*)(Nucleus*, const char*, const char*);

void P::InitialiseMod() {}

void LoadMod(Mod& mod) {
    HMODULE mod_handle = LoadLibraryA(mod.dll_path.string().c_str());

    if (!mod_handle) {
        P::Log(COL_ERROR) << "Failed to load mod " << mod.name;
        return;
    }
    P::Log(COL_MUTED) << "Loading mod " << mod.name;

    auto mod_init = reinterpret_cast<ModInit>(
        GetProcAddress(mod_handle, "Initialise")
    );

    if (!mod_init) {
        P::Log(COL_ERROR) << "mod_init not found for " << mod.name;
        return;
    }

    mod_init(&api, mod.path.string().c_str(), mod.name.c_str());

    // P::GamePrint("Loaded %s", mod.name);
}

void LoadMods() {
    std::string mod_names;
    for (auto& mod: ModManager::enabled_mods) {
        mod_names += "\t";
        mod_names += mod.name;
        mod_names += "\n";
    }

    P::PrimordialisLog("\n\nTHIS SESSION HAS BEEN MODIFIED USING THE NUCLEUS v" + NUCLEUS_VERSION +
                       "MODLOADER AND THE FOLLOWING MODS:\n" + mod_names +
                       "\nREPORT BUGS CAUSED BY MODS TO THE DEVELOPERS OF THE MODS AND MODDING SDK,"
                       " NOT to THE DEVELOPERS OF PRIMORDIALIS!\n\n");

    for (auto& mod: ModManager::enabled_mods) {
        LoadMod(mod);
    }

    P::Log(COL_SUCCESS) << "All Mods Initialised!";
}

void* trampoline;

uint64_t ThreadMainHook(void* context) {
    auto original = reinterpret_cast<uint64_t(*)(void*)>(trampoline);
    if (context == nullptr) {
        P::Log(COL_MUTED) << "Starting mod loader";

        P::Log(COL_MUTED) << "Loader Files Folder at: " << ModManager::loader_files_path;

        if (ModManager::loader_files_path.empty()) {
            P::Log(COL_ERROR) << "Loader file path not given!\nFalling back to Primordialis root.";
            return original(context);
        }
        ModManager::ParseMods();
        DoLuaInitHook();
        P::Log(COL_MUTED) << "Mod Count:" << ModManager::enabled_mods.size();
        LoadMods();
    }

    return original(context);
}

void Bootstrap() {
    nucleus = &api;
    P::mod_name = "Nucleus";

    P::Log(COL_MUTED) << "Bootstrapping Nucleus...";

    if (MH_Initialize() != MH_OK) {
        P::Log(COL_ERROR) << "MinHook init failed";
        return;
    }
    P::Log(COL_MUTED) << "MinHook initialized";

    InitDbgHelp();

    trampoline = CreateHook("thread_main", ThreadMainHook);
}

BOOL APIENTRY DllMain(
    HMODULE module,
    DWORD reason,
    LPVOID) {
    if (reason == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(module);

        Bootstrap();
    }

    return TRUE;
}
