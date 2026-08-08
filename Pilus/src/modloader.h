#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <variant>
#include <windows.h>

namespace fs = std::filesystem;

struct ConfigValue
{
    std::string name{};
    std::variant<double, bool, std::string> value;
};

struct Mod
{
    // SAVED IN PILUS.CONFIG
    fs::path path{};
    fs::path dll_path{};
    bool enabled = true;

    // UNSAVED:
    std::string name = "mod.dll"; // mod name is the filename or whatever is held in info.txt
    std::string author{}; // default for no info.txt
    std::string description{}; // default for no info.txt

    std::vector<ConfigValue> config{};

    bool operator== (const Mod& other) const
    {
        if (fs::weakly_canonical(path) == fs::weakly_canonical(other.path)) // path is the only thing that matters
            return true;
        return false;
    }
};

struct ModManager
{
    sf::RenderWindow* window;
    std::vector<Mod> mods;
    std::string error_log;
    std::string log;

    fs::path modpath;
    std::string last_description_trunc;

    sf::Font* font;
    sf::Text* text;

    bool hover_top_move = false;
    bool hover_move = false;

    bool m_leftPressed = false;

    bool hover_inject = false;

    bool hover_mod_options = false;
    bool hover_top_option = false;

    uint32_t mod_hover = -1;
    uint32_t mod_selected = -1;
    uint32_t config_hover = -1;
    uint32_t config_selected = -1;

    std::string config_temp{};

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

struct ModInfo
{
    char name[MAX_PATH];
};

struct ModListShared
{
    uint32_t count;
    ModInfo mods[256];
};