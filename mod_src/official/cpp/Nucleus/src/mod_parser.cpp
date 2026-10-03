#include <fstream>
#include <iostream>

#include "mods.h"
#include "nucleus_api.h"
#include "nucleus_interface.h"
#include "yaml-cpp/yaml.h"

namespace fs = std::filesystem;

std::string ReadFile(const fs::path& path) {
    std::ifstream file(path);

    if (!file) {
        return {};
    }

    std::stringstream buffer;
    buffer << file.rdbuf();

    return buffer.str();
}

std::filesystem::path ModParser::GetProfilePath() {
    int argc = 0;
    LPWSTR* argv = CommandLineToArgvW(
        GetCommandLineW(),
        &argc
    );

    if (!argv) {
        return {};
    }

    std::filesystem::path nucleus_dll_path{};

    for (int i = 0; i < argc; ++i) {
        if (wcscmp(argv[i], L"--customdll") == 0) {
            if (i + 1 < argc) {
                nucleus_dll_path = argv[i + 1];
            }
            break;
        }
    }

    LocalFree(argv);

    std::filesystem::path profile_path {absolute(nucleus_dll_path).parent_path()};

    // For loop because I don't trust while loops
    for (auto i = 0; i <= 3; i++) {
        if (not exists(profile_path/"mods")) {
            profile_path = profile_path.parent_path();
        }
        else {
            break;
        }
    }

    return profile_path;
}

void ParseModInfo(Mod& mod) {
    if (mod.path.has_extension())
        return; // Mod is raw dll so has no info

    fs::path modFolder = mod.path;
    mod.name = modFolder.filename().string();

    std::vector<fs::path> dlls{};
    for (const auto& entry: fs::recursive_directory_iterator(modFolder)) {
        if (not entry.is_regular_file()) {
            continue;
        }

        if (mod.name == "Nucleus" or mod.name == "u0068-Nucleus") {
            continue;
        }

        auto filename = entry.path().filename().string();

        if (entry.path().extension() == ".dll") {
            dlls.push_back(entry.path());
        }
        else if (filename == "init.lua") {
            mod.init_lua_path = entry.path();
        }
    }
    if (dlls.size() > 1) {
        for (auto& dll_path: dlls) {
            // Log() << modFolder.filename() << "\n";
            // Log() << dll_path.filename() << "\n";
            if (dll_path.filename() == "main.dll" or
                dll_path.filename().replace_extension("") == modFolder.filename()) {
                mod.dll_path = dll_path;
                break;
            }
        }
        if (mod.dll_path.empty()) {
            A::ELog(COL_ERROR) << "Multiple .dll files detected! I don't know which one to load.\n"
                    "Please make the dll that should be loaded have same filename as the mod folder!";
        }
    }
    else if (dlls.size() == 1) {
        mod.dll_path = dlls[0];
    }
}

void ModParser::ParseMods() {
    A::Log(COL_MUTED) << "Parsing Mods...";

    if (mod_path.empty()) {
        A::ELog(COL_ERROR) << "No mods found in " << mod_path;
        return;
    }

    std::vector<Mod> installed_mods{};
    for (const auto& entry: std::filesystem::directory_iterator(mod_path)) {
        // P::Log(COL_MUTED) << "Found Mod: "
        //         << entry.path().filename().stem().string();

        Mod nmod;
        nmod.path = entry.path();
        nmod.name = entry.path().filename().stem().string();

        if (entry.path().extension() == ".dll")
            nmod.dll_path = entry.path();
        ParseModInfo(nmod);
        installed_mods.push_back(nmod);
    }

    auto mods_yml_path = profile_path / "mods.yml"; // For r2modman profile
    if (exists(mods_yml_path)) {
        YAML::Node mods_yml = YAML::LoadFile(mods_yml_path.string());
        for (auto && i : mods_yml) {
            for (auto& mod: installed_mods) {
                if (mod.name == i["name"].as<std::string>()
                and i["enabled"].as<bool>()
                and mod.is_cpp()) {
                    enabled_mods.push_back(mod);
                }
            }
        }
    }
    else {
        for (auto& mod: installed_mods) {
            if (mod.is_cpp()) {
                enabled_mods.push_back(mod);
            }
        }
    }
}