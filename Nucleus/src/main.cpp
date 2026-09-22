#include <Windows.h>
#include <filesystem>
#include <string>

#include "mods.h"
#include "nucleus_api.h"
#include "plasmid_api.h"
#include "include/primordialis_log.h"

const std::string NUCLEUS_VERSION = "0.2.0";

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
    for (auto& mod: ModParser::enabled_mods) {
        mod_names += "\t";
        mod_names += mod.name;
        mod_names += "\n";
    }

    P::PrimordialisLog("\n\nTHIS SESSION HAS BEEN MODIFIED USING THE NUCLEUS v" + NUCLEUS_VERSION +
                       "MODLOADER AND THE FOLLOWING MODS:\n" + mod_names +
                       "\nREPORT BUGS CAUSED BY MODS TO THE DEVELOPERS OF THE MODS AND MODDING SDK,"
                       " NOT TO THE DEVELOPERS OF PRIMORDIALIS!\n\n");

    for (auto& mod: ModParser::enabled_mods) {
        LoadMod(mod);
    }

    P::Log(COL_SUCCESS) << "All Mods Initialised!";
}

void MainHook(void* context) {
    static std::once_flag flag;
    std::call_once(flag, []() {
        P::Log(COL_MUTED) << "Starting Nucleus mod loader.";

        if (ModParser::profile_path.empty()) {
            if (ModParser::profile_path.empty() or not exists(ModParser::profile_path)) {
                P::Log(COL_WARNING) << "Profile path not given!\nFalling back to Primordialis root.";
                ModParser::profile_path = ModParser::game_path;
            }
        }
        P::Log(COL_MUTED) << "Profile Folder at: " << ModParser::profile_path;

        ModParser::ParseMods();
        P::Log(COL_MUTED) << "Mod Count:" << ModParser::enabled_mods.size();
        LoadMods();
    });

    return P::Next<void>(context);
}

void Bootstrap() {
    InitConsole();

    nucleus = &api;

    P::mod_name = "Nucleus";

    P::Log(COL_MUTED) << "Bootstrapping Nucleus...";

    InitMinHook();

    InitDbgHelp();

    P::Hook<"fiber_main">(MainHook);
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
