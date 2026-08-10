#include <fstream>
#include <iostream>

#include "modloader.h"

namespace fs = std::filesystem;

void ParseConfig(Mod* mod, const std::string& data)
{
    size_t readingat = 0;

    while (readingat != std::string::npos)
    {
        ConfigValue workingV;
        size_t prevRead = readingat;
        readingat = data.find(':', readingat);

        if (readingat == std::string::npos)
            break;

        workingV.name = data.substr(prevRead, readingat - prevRead);

        readingat++;
        prevRead = readingat;

        readingat = data.find(':', readingat);

        if (readingat == std::string::npos)
            break;

        std::string type = data.substr(prevRead, readingat - prevRead);

        readingat++;
        prevRead = readingat;

        readingat = data.find('\n', readingat);

        if (readingat == std::string::npos)
            readingat = data.length();

        std::string value = data.substr(prevRead, readingat - prevRead);

        if (type == "STRING")
        {
            workingV.value = value;
        }
        else if (type == "BOOL")
        {
            workingV.value = value != "0";
        }
        else
        {
            workingV.value = std::strtod(value.c_str(), nullptr);
        }

        mod->config.push_back(workingV);

        if (readingat < data.length())
            readingat++;
        else
            break;
    }
}

std::string ReadFile(const fs::path& path)
{
    std::ifstream file(path);

    if (!file)
        return {};

    std::stringstream buffer;
    buffer << file.rdbuf();

    return buffer.str();
}

std::string GetValue(const std::string& data, const std::string& key)
{
    size_t find = data.find(key + ":");

    if (find == std::string::npos)
        return {};

    find += key.length() + 1;

    size_t end = data.find('\n', find);

    if (end == std::string::npos)
        end = data.length();

    return data.substr(find, end - find);
}

void ParseModInfo(Mod* mod, std::string& log)
{
    if (mod->path == mod->dll_path)
        return; // Mod is raw dll so has no info

    fs::path modFolder = mod->path;

    for (const auto& entry : fs::recursive_directory_iterator(modFolder))
    {
        if (!entry.is_regular_file())
            continue;

        auto filename = entry.path().filename().string();

        if (filename == "info.txt")
        {
            std::string data = ReadFile(entry.path());

            mod->name = GetValue(data, "name");
            mod->author = GetValue(data, "author");
            mod->description = GetValue(data, "description");
        }

        else if (filename == "config.txt")
        {
            std::string data = ReadFile(entry.path());

            ParseConfig(mod, data);
        }

        else if (entry.path().extension() == ".dll")
        {
            mod->dll_path = entry.path();
        }

        else if (filename == "init.lua")
        {
            mod->init_path = entry.path();
        }
    }
}

void ModManager::ConfigEdit(char32_t key)
{
    if (key == U'\b') // backspace
    {
        if (!config_temp.empty())
        {
            config_temp.pop_back();
        }
    }
    else
    {
        if (std::holds_alternative<std::string>(mods[mod_selected].config[config_selected].value))
        {
            config_temp.push_back(key);
        }
        else
        {
            if ((key >= U'0' && key <= U'9') || key == U'.')
                config_temp.push_back(key);
        }
    }
}

void ModManager::ConfigEditFinish()
{
    char* end;
    if (std::holds_alternative<std::string>(mods[mod_selected].config[config_selected].value))
        mods[mod_selected].config[config_selected].value = config_temp;
    else
        mods[mod_selected].config[config_selected].value = std::strtod(config_temp.c_str(), &end);
    config_temp.clear();
}

void ModManager::Update()
{
    while (const std::optional event = window->pollEvent())
    {
        if (event->is<sf::Event::Closed>())
        {
            window->close();
            SaveConfig();
        }
        if (event->is<sf::Event::MouseButtonPressed>())
        {
            CheckSignificantMouseMovement(); // often clicking something in the modloader after not being in focus can trigger wrong button so do this

            if (event->getIf<sf::Event::MouseButtonPressed>()->button == sf::Mouse::Button::Left)
                m_leftPressed = true;

            if (mod_hover != -1 && !mods.empty())
            {
                if (hover_mod_options && !hover_top_option)
                {
                    mods[mod_hover].enabled = !mods[mod_hover].enabled;
                }
                else if (hover_mod_options && hover_top_option)
                {
                    if (mod_selected != mod_hover)
                    {
                        mod_selected = mod_hover;
                        cscroll = 0;
                        config_selected = -1;
                    }
                    else
                        mod_selected = -1;
                }
                else if (hover_move)
                {
                    if (hover_top_move)
                    {
                        if (mod_hover > 0)
                        {
                            std::swap(mods[mod_hover], mods[mod_hover - 1]);
                        }
                    }
                    else
                    {
                        if (mod_hover < mods.size() - 1)
                        {
                            std::swap(mods[mod_hover], mods[mod_hover + 1]);
                        }
                    }
                    SaveConfig();
                }
            }
            else
            {
                if (mod_selected != -1) // enter config mode
                {
                    if (config_hover != -1)
                    {
                        if (std::holds_alternative<bool>(mods[mod_selected].config[config_hover].value))
                        {
                            mods[mod_selected].config[config_hover].value = !std::get<bool>(mods[mod_selected].config[config_hover].value);
                            config_selected = -1;
                        }
                        else
                        {
                            if (std::holds_alternative<double>(mods[mod_selected].config[config_hover].value))
                                config_temp = std::to_string(std::get<double>(mods[mod_selected].config[config_hover].value));
                            else
                                config_temp = std::get<std::string>(mods[mod_selected].config[config_hover].value);
                            config_selected = config_hover;
                        }
                    }
                }
                else
                {
                    if (hover_inject)
                    {
                        SaveLuaModlist();
                        InjectAll();
                    }
                }
            }

            Render();
        }
        if (event->is<sf::Event::MouseButtonReleased>())
        {
            if (event->getIf<sf::Event::MouseButtonReleased>()->button == sf::Mouse::Button::Left)
                m_leftPressed = false;
        }
        if (event->is<sf::Event::KeyPressed>())
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::I))
                InjectAll();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::L))
            {
                std::ofstream file("loader_log.txt");
                file << error_log << "\n" << log;
                file.close();
                log.clear();
                log.append("Printed log to \"loader_log.txt\"\n");
                Render();
            }

        }
        if (event->is<sf::Event::TextEntered>())
        {
            if (config_selected != -1)
            {
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Enter))
                {
                    ConfigEditFinish();
                    config_selected = -1;
                }
                else
                {
                    ConfigEdit(event->getIf<sf::Event::TextEntered>()->unicode);
                }
                Render();
            }
        }
        if (event->is<sf::Event::MouseMoved>())
        {
            if (CheckSignificantMouseMovement())
            {
                Render();
            }
        }
        if (event->is<sf::Event::MouseWheelScrolled>())
        {
            if (sf::Mouse::getPosition(*window).x < 400)
            {
                scroll += event->getIf<sf::Event::MouseWheelScrolled>()->delta * 20;
                scroll = std::min(0.f, scroll);
            }
            else
            {
                cscroll += event->getIf<sf::Event::MouseWheelScrolled>()->delta * 10;
                cscroll = std::min(0.f, cscroll);
            }
            Render();
        }
    }
}

void ModManager::RefreshMods()
{
    log.append("Refreshing Mods...\n");
    std::vector<Mod> fmods;
    for (const auto& entry : std::filesystem::directory_iterator(mod_path))
    {
        log.append("Found Mod: ");
        log.append(entry.path().filename().stem().string());
        log.append("\n");

        Mod nmod;
        nmod.path = entry.path();
        nmod.name = entry.path().filename().stem().string();

        if (entry.path().extension() == ".dll")
        {
            nmod.dll_path = entry.path();
        }
        ParseModInfo(&nmod, log);
        fmods.push_back(nmod);
    }
    Render();

    std::vector<Mod> finalmods;

    for (auto & mod : mods)
    {
        for (const auto & fmod : fmods)
        {
            if (mod == fmod)
            {
                finalmods.push_back(fmod);
                finalmods[finalmods.size() - 1].enabled = mod.enabled;
            }
        }
    }
    for (const auto & fmod : fmods)
    {
        bool addthismod = true;
        for (const auto & finalmod : finalmods)
        {
            if (fmod == finalmod)
            {
                addthismod = false;
                break;
            }
        }
        if (addthismod)
        {
            finalmods.push_back(fmod);
        }
    }

    mods = finalmods;
    SaveConfig();
}

void ModManager::LoadConfig()
{
    auto file = ReadFile(config_path);

    if (file.empty())
    {
        printf("Failed to read config\n");
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
        mods.push_back(mod);
    }
}

void ModManager::SaveConfig()
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
        pilus_config["mods"][mod.name] = mod_json;
    }

    file.clear();
    file << pilus_config.dump(1, *"\t");

    file.close();
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
        file << "\t\"" << mod.name << "\",\n";
    }
    file << "} -- Make sure that all mods are before this line!!!";
    file.close();

    PatchInitLua();
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
    while (std::getline(init_file, line)) {
        init_content += line + "\n";
    }

    std::cout << "Patching init.lua\n";

    init_file.close();

    size_t pos = init_content.find(preline);
    if (pos == std::string::npos)
    {
        init_content = preline + init_content;
    }
    else
    {
        std::cout << "Mod loader content already found in init.lua, skipping preline append\n";
    }

    pos = init_content.find(postline);
    if (pos == std::string::npos)
    {
        init_content = init_content + postline;
    }
    else
    {
        std::cout << "Mod loader content already found in init.lua, skipping postline append\n";
    }

    temp_init_file << init_content;
    temp_init_file.close();

    fs::remove(init_lua_path);
    fs::rename(temp_init_lua_path, init_lua_path);
}