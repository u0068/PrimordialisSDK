#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <variant>

struct ConfigValue
{
    std::string name = "";
    std::variant<double, bool, std::string> value;
};

struct Mod
{
    // SAVED IN PILUS.CONFIG
    std::filesystem::path path;
    bool enabled = true;

    // UNSAVED:
    std::string name = "mod.dll"; // mod name is the filename or whatever is held in info.txt
    std::string author = ""; // default for no info.txt
    std::string description = ""; // default for no info.txt

    std::vector<ConfigValue> config;

    bool operator== (Mod& other)
    {
        if (std::filesystem::weakly_canonical(path) == std::filesystem::weakly_canonical(other.path)) // path is the only thing that matters
            return true;
        return false;
    }
};

struct ModManager
{
    sf::RenderWindow* window;
    std::vector<Mod> mods;
    std::string errorlog;
    std::string log;

    std::filesystem::path modpath;
    std::string lastdescriptiontrunc = "";

    sf::Font* font;
    sf::Text* text;

    bool hovertopmove = false;
    bool hovermove = false;

    bool m_leftPressed = false;

    bool hoverinject = false;

    bool hovermodoptions = false;
    bool hovertopoption = false;

    uint32_t modhover = -1;
    uint32_t modselected = -1;
    uint32_t confighover = -1;
    uint32_t configselected = -1;

    std::string configtemp = "";

    float scroll = 0;
    float cscroll = 0;

    void RefreshMods();
    void InjectAll();

    bool CheckSignificantMouseMovement();

    void SaveModOrder();
    void LoadModOrder();

    void Render();
    void Update();

    void ConfigEdit(char32_t key);
    void ConfigEditFinish();

    ModManager() {}
};
