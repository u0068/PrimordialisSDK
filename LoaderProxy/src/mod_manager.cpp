#include <fstream>
#include <iostream>
#include "mod_loader.h"
#include "yaml-cpp/yaml.h"

namespace fs = std::filesystem;

std::string ReadFile(const fs::path& path)
{
    std::ifstream file(path);

    if (!file)
        return {};

    std::stringstream buffer;
    buffer << file.rdbuf();

    return buffer.str();
}

std::filesystem::path GetLoaderFilesFolder()
{
    int argc = 0;
    LPWSTR* argv = CommandLineToArgvW(
        GetCommandLineW(),
        &argc
    );

    if (!argv)
        return {};

    std::filesystem::path result;

    for (int i = 0; i < argc; ++i)
    {
        if (wcscmp(argv[i], L"--mod-folder") == 0)
        {
            if (i + 1 < argc)
                result = argv[i + 1];

            break;
        }
    }

    LocalFree(argv);

    Log() << "Loader Files Folder at: " << result << "\n";

    return result;
}

void ParseModInfo(Mod& mod)
{
    if (mod.path.has_extension())
        return; // Mod is raw dll so has no info

    fs::path modFolder = mod.path;
    mod.name = modFolder.filename().string();

    std::vector<fs::path> dlls{};
    for (const auto& entry : fs::recursive_directory_iterator(modFolder))
    {
        if (!entry.is_regular_file())
            continue;

        auto filename = entry.path().filename().string();

        if (entry.path().extension() == ".dll")
        {
            dlls.push_back(entry.path());
        }

        else if (filename == "init.lua")
            mod.init_path = entry.path();
    }
    if (dlls.size() > 1)
    {
        for (auto& dll_path : dlls)
        {
            // console_log << modFolder.filename() << "\n";
            // console_log << dll_path.filename() << "\n";
            if (dll_path.filename() == "main.dll" or
                dll_path.filename().replace_extension("") == modFolder.filename())
            {
                mod.dll_path = dll_path;
                break;
            }
        }
        if (mod.dll_path.empty())
            console_log << err << "Multiple .dll files detected! I don't know which one to load.\n"
                                  "\tPlease specify a \"main_dll\" in info.json,\n"
                                  "or make the dll that should be loaded have same filename as the mod folder!\n";
    }
    else if (dlls.size() == 1)
        mod.dll_path = dlls[0];
}

void ModManager::ParseMods()
{
    Log() << "Parsing Mods...\n";

    for (const auto& entry : std::filesystem::directory_iterator(mod_path))
    {
        console_log << "Found Mod: ";
        console_log << entry.path().filename().stem().string();
        console_log << "\n";

        Mod nmod;
        nmod.path = entry.path();
        nmod.name = entry.path().filename().stem().string();

        if (entry.path().extension() == ".dll")
            nmod.dll_path = entry.path();
        ParseModInfo(nmod);
        mods.push_back(nmod);
    }

    loader_files_path = GetLoaderFilesFolder();
    YAML::Node mods_yml = YAML::LoadFile((loader_files_path/"mods.yml").string());
    for (std::size_t i=0;i<mods_yml.size();i++)
        for (auto& mod : mods)
            if (mod.name == mods_yml[i]["name"].as<std::string>())
                mod.enabled = mods_yml[i]["enabled"].as<bool>();
}

// std::string ModConfigToLua(json config)
// {
//     std::stringstream lua;
//     lua << "\t{\n";
//     for (auto& el : config.items())
//         lua << "\t\t" << el.key() << " = " << el.value() << ",\n";
//     lua << "\t},\n";
//     return lua.str();
// }

void ModManager::SaveLuaModlist()
{
    std::ofstream file(lua_mod_list_path);

    if (!file) return;

    file.clear();
    file << "LUA_MODLOADER_MOD_LIST = {\n";

    for (auto& mod : mods)
    {
        // if (!mod.is_lua())
        //     continue;
        // if (!mod.user_enabled)
        //     continue;
        // if (mod.config_defaults.empty())
        // {
            file << "\t\"" << mod.name << "\",\n";
        //     continue;
        // }
        //
        // file << "\t{\"" << mod.name << "\",\n";
        // file << ModConfigToLua(mod.config_values);
        // file << "\t},\n";
    }

    file << "} -- Make sure that all mods are before this line!!!";
    file.close();
}

void ModManager::PatchInitLua()
{
    fs::path init_lua_path = game_path / "data/scripts/init.lua";
    fs::path temp_init_lua_path = game_path / "data/scripts/init.temp";
    std::string preline = "dofile(\"pilus_files/luasome/pre.lua\")\n";
    std::string postline = "dofile(\"pilus_files/luasome/post.lua\")";

    std::ifstream init_file;
    std::ofstream temp_init_file;
    init_file.open(init_lua_path);
    temp_init_file.open(temp_init_lua_path);

    std::string init_content, line;
    while (std::getline(init_file, line))
        init_content += line + "\n";

    Log() << "Patching init.lua\n";

    init_file.close();

    size_t pos = init_content.find(preline);
    if (pos == std::string::npos)
        init_content = preline + init_content;
    else
        Log() << "Mod loader content already found in init.lua, skipping preline append\n";

    pos = init_content.find(postline);
    if (pos == std::string::npos)
        init_content = init_content + postline;
    else
        Log() << "Mod loader content already found in init.lua, skipping postline append\n";

    temp_init_file << init_content;
    temp_init_file.close();

    fs::remove(init_lua_path);
    fs::rename(temp_init_lua_path, init_lua_path);
}