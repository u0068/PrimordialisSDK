#include <fstream>
#include <iostream>

#include "dependency_manager.cpp"
#include "mod_loader.h"

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

void GetModConfigValuesFromDefaults(Mod& mod)
{
    for (auto& el : mod.config_defaults.items())
        mod.config_values[el.key()] = el.value()["default"];
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

        if (filename == "info.json")
        {
            mod.local_info = safe_parse(ReadFile(entry), nullptr, true, true);
            ModManager::pilus_config["installed_versions"][mod.name] = GetStringFromJson(mod.local_info, "version");
        }

        else if (filename == "config.json")
            mod.config_defaults = safe_parse(ReadFile(entry), nullptr, true, true);

        else if (entry.path().extension() == ".dll")
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

void ModManager::RefreshMods()
{
    console_log << "Refreshing Mods...\n";
    std::vector<Mod> installed_mods;
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
        installed_mods.push_back(nmod);
    }

    for (auto & mod : mods)
        for (auto &  installed_mod: installed_mods)
            if (mod == installed_mod)
            {
                installed_mod.user_enabled = mod.user_enabled;
                installed_mod.config_values = mod.config_values;
                mod = installed_mod;
                break;
            }
    for (const auto & installed_mod : installed_mods)
    {
        bool add_this_mod = true;
        for (const auto & mod : mods)
            if (installed_mod == mod)
            {
                add_this_mod = false;
                break;
            }
        if (add_this_mod)
            mods.push_back(installed_mod);
    }

    SortDeps();
    SavePilusConfig();
}

void ModManager::LoadPilusConfig()
{
    auto file = ReadFile(config_path);

    if (file.empty())
    {
        console_log << err<< "Failed to read config\n";
        return;
    }

    try
    {
        pilus_config = safe_parse(file);

        json mods_json = pilus_config["mods"];
        mods.clear();

        for (auto& el : mods_json.items())
        {
            json mod_json = el.value();
            Mod mod{};
            mod.name = mod_json["name"].get<std::string>();
            mod.path = mod_json["path"].get<std::string>();
            mod.dll_path = mod_json["dll_path"].get<std::string>();
            mod.init_path = mod_json["init_path"].get<std::string>();
            mod.user_enabled = mod_json["enabled"].get<bool>();
            mod.config_values = mod_json["config"];
            mods.push_back(mod);
        }
    }
    catch (const json::exception& e)
    {
        console_log << err << e.what() << "\n"
                  << "exception id: " << e.id << "\n";
        pilus_config = {};
    }
}

void ModManager::SavePilusConfig()
{
    std::ofstream file(config_path);

    if (!file) return;

    pilus_config["mods"] = json::array();

    for (auto mod : mods)
    {
        json mod_json;
        mod_json["name"] = mod.name;
        mod_json["path"] = mod.path;
        mod_json["dll_path"] = mod.dll_path;
        mod_json["init_path"] = mod.init_path;
        mod_json["enabled"] = mod.user_enabled;
        mod_json["config"] = mod.config_values;
        pilus_config["mods"].push_back(mod_json);
    }

    file.clear();
    file << pilus_config.dump(1, *"\t");

    file.close();
}

std::string ModConfigToLua(json config)
{
    std::stringstream lua;
    lua << "\t{\n";
    for (auto& el : config.items())
        lua << "\t\t" << el.key() << " = " << el.value() << ",\n";
    lua << "\t},\n";
    return lua.str();
}

void ModManager::SaveLuaModlist()
{
    std::ofstream file(lua_mod_list_path);

    if (!file) return;

    file.clear();
    file << "LUA_MODLOADER_MOD_LIST = {\n";

    for (auto& mod : mods)
    {
        if (!mod.is_lua())
            continue;
        if (!mod.user_enabled)
            continue;
        if (mod.config_defaults.empty())
        {
            file << "\t\"" << mod.name << "\",\n";
            continue;
        }
        if (mod.config_values.empty())
            GetModConfigValuesFromDefaults(mod);

        file << "\t{\"" << mod.name << "\",\n";
        file << ModConfigToLua(mod.config_values);
        file << "\t},\n";
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

    console_log << "Patching init.lua\n";

    init_file.close();

    size_t pos = init_content.find(preline);
    if (pos == std::string::npos)
        init_content = preline + init_content;
    else
        console_log << "Mod loader content already found in init.lua, skipping preline append\n";

    pos = init_content.find(postline);
    if (pos == std::string::npos)
        init_content = init_content + postline;
    else
        console_log << "Mod loader content already found in init.lua, skipping postline append\n";

    temp_init_file << init_content;
    temp_init_file.close();

    fs::remove(init_lua_path);
    fs::rename(temp_init_lua_path, init_lua_path);
}