#include <fstream>
#include <iostream>

#include "modloader.h"

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

void ParseModInfo(Mod* mod)
{
    if (mod->path.has_extension())
        return; // Mod is raw dll so has no info

    fs::path modFolder = mod->path;

    int dll_count = 0;
    for (const auto& entry : fs::recursive_directory_iterator(modFolder))
    {
        if (!entry.is_regular_file())
            continue;

        auto filename = entry.path().filename().string();

        if (filename == "info.json")
        {
            std::string data = ReadFile(entry.path());

            mod->info = json::parse(ReadFile(entry), nullptr, true, true);
            mod->name = mod->info["name"].get<std::string>().c_str();
        }

        else if (filename == "config.json")
            mod->config_defaults = json::parse(ReadFile(entry), nullptr, true, true);

        else if (entry.path().extension() == ".dll")
        {
            mod->dll_path = entry.path();
            dll_count++;
        }

        else if (filename == "init.lua")
            mod->init_path = entry.path();
    }
    if (dll_count > 1)
    {
        if (mod->info["main_dll"].empty())
        {
            console_log << err << "Multiple .dll files detected! I don't know which one to load.\n"
                                  "\tPlease specify a \"main_dll\" in info.json!\n"
                                  "\tFallback: Loading " << mod->dll_path << "\n";
        }
        else
        {
            mod->dll_path = mod->info["main_dll"].get<std::string>();
        }
    }
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
        ParseModInfo(&nmod);
        installed_mods.push_back(nmod);
    }

    std::vector<Mod> final_mods;

    for (auto & mod : mods)
        for (const auto & installed_mod : installed_mods)
            if (mod == installed_mod)
            {
                final_mods.push_back(installed_mod);
                final_mods[final_mods.size() - 1].enabled = mod.enabled;
                final_mods[final_mods.size() - 1].config_values = mod.config_values;
            }
    for (const auto & installed_mod : installed_mods)
    {
        bool add_this_mod = true;
        for (const auto & final_mod : final_mods)
            if (installed_mod == final_mod)
            {
                add_this_mod = false;
                break;
            }
        if (add_this_mod)
            final_mods.push_back(installed_mod);
    }
    for (auto i=0; i<final_mods.size(); i++)
        if (final_mods[i].name == "Nucleus")
            std::swap(final_mods[i], final_mods[0]);

    mods = final_mods;
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

    pilus_config = json::parse(file);

    json mods_json = pilus_config["mods"];

    for (auto& el : mods_json.items())
    {
        json mod_json = el.value();
        Mod mod{};
        mod.name = el.key();
        mod.path = mod_json["path"].get<std::string>();
        mod.dll_path = mod_json["dll_path"].get<std::string>();
        mod.init_path = mod_json["init_path"].get<std::string>();
        mod.enabled = mod_json["enabled"].get<bool>();
        mod.config_values = mod_json["config"];
        mods.push_back(mod);
    }
}

void ModManager::SavePilusConfig()
{
    std::ofstream file(config_path);

    if (!file) return;

    pilus_config["mod_count"] = mods.size();

    for (auto mod : mods)
    {
        json mod_json;
        mod_json["path"] = mod.path;
        mod_json["dll_path"] = mod.dll_path;
        mod_json["init_path"] = mod.init_path;
        mod_json["enabled"] = mod.enabled;
        mod_json["config"] = mod.config_values;
        pilus_config["mods"][mod.name] = mod_json;
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

    for (auto mod : mods)
    {
        if (!mod.is_lua())
            continue;
        if (!mod.enabled)
            continue;
        if (mod.config_defaults.empty())
            file << "\t\"" << mod.name << "\",\n";
        if (mod.config_values.empty())
            GetModConfigValuesFromDefaults(mod);

        file << "\t{\"" << mod.name << "\",\n";
        file << ModConfigToLua(mod.config_values);
        file << "\t}\n";
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