#include <Windows.h>
#include <filesystem>
#include <string>

#include "mods.h"
#include "nucleus_api.h"
#include "zip.h"
#include "interface/all.h"

void A::InitialiseMod() {}

using ModInit = void(*)(Nucleus*, const char*, const char*);

void LoadMod(Mod& mod) {
    HMODULE mod_handle = LoadLibraryA(mod.dll_path.string().c_str());

    if (!mod_handle) {
        A::Log(COL_ERROR) << "Failed to load mod " << mod.name;
        return;
    }
    A::Log(COL_MUTED) << "Loading mod " << mod.name;

    auto mod_init = reinterpret_cast<ModInit>(
        GetProcAddress(mod_handle, "Initialise")
    );

    if (!mod_init) {
        A::Log(COL_ERROR) << "mod_init not found for " << mod.name;
        return;
    }

    mod_init(&api, mod.path.string().c_str(), mod.name.c_str());
}

void LoadMods() {
    std::string mod_names;
    for (auto& mod: ModParser::enabled_mods) {
        mod_names += "\t";
        mod_names += mod.name;
        mod_names += "\n";
    }

    PrimordialisLog("\n\nTHIS SESSION HAS BEEN MODIFIED USING THE NUCLEUS MODLOADER "
                       "AND THE FOLLOWING MODS:\n" + mod_names + "\n"
                       "REPORT BUGS CAUSED BY MODS TO THE DEVELOPERS OF THE MODS AND MODDING SDK, "
                       "NOT TO THE DEVELOPERS OF PRIMORDIALIS!\n\n");

    for (auto& mod: ModParser::enabled_mods) {
        LoadMod(mod);
    }

    A::Log(COL_SUCCESS) << "All Mods Initialised!";
}

void Bootstrap() {
    InitConsole();

    nucleus = &api;

    A::mod_name = "Nucleus";

    A::Log(COL_MUTED) << "Starting Nucleus mod loader.";

    ExtractPDBs();
    InitMinHook();
    InitDbgHelp();

    translation_values.reserve(2048);

    if (ModParser::profile_path.empty()) {
        if (ModParser::profile_path.empty() or not exists(ModParser::profile_path)) {
            A::Log(COL_WARNING) << "Profile path not given!\nFalling back to Primordialis root.";
            ModParser::profile_path = ModParser::game_path;
        }
    }
    A::Log(COL_MUTED) << "Profile Folder at: " << ModParser::profile_path;

    ModParser::ParseMods();
    A::Log(COL_MUTED) << "Mod Count:" << ModParser::enabled_mods.size();
    LoadMods();
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
