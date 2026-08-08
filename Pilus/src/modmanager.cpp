#include <fstream>
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
            SaveModOrder();
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
                    SaveModOrder();
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
                        InjectAll();
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
    for (const auto& entry : std::filesystem::directory_iterator(modpath))
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
    SaveModOrder();
}

void ModManager::LoadModOrder()
{
    std::ifstream file("PILUS_MODLOADER.CONFIG");

    if (!file) return;

    uint32_t num_mods;
    file.read(reinterpret_cast<char*>(&num_mods), sizeof(uint32_t));

    for (int i = 0; i < num_mods; i++)
    {
        Mod nmod;
        file.read(reinterpret_cast<char*>(&nmod.enabled), sizeof(bool));

        uint32_t pathlength = 0;
        file.read(reinterpret_cast<char*>(&pathlength), sizeof(uint32_t));
        std::string path(pathlength, '\0');
        file.read(&path[0], pathlength);
        nmod.path = std::filesystem::path(path);

        mods.push_back(nmod);
    }

    file.close();
}

void ModManager::SaveModOrder()
{
    std::ofstream file("PILUS_MODLOADER.CONFIG");

    if (!file) return;

    uint32_t num_mods = mods.size();
    file.write(reinterpret_cast<char*>(&num_mods), sizeof(uint32_t));
    for (auto & mod : mods)
    {
        file.write(reinterpret_cast<char*>(&(mod.enabled)), sizeof(bool));
        uint32_t pathlength = mod.path.string().size();
        file.write(reinterpret_cast<char*>(&pathlength), sizeof(uint32_t));
        file.write(mod.path.string().data(), mod.path.string().size());
    }

    file.close();
}
