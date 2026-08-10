#pragma once
#include <vector>
#include <variant>
#include <windows.h>
#include "../external/json.hpp"

using json = nlohmann::json;

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
    fs::path init_path{};
    bool enabled = true;

    // UNSAVED:
    std::string name = "Unnamed Mod"; // mod name is the filename or whatever is held in info.txt
    std::string author{"Unknown"}; // defaults for no info.txt
    std::string description{"No Description"};
    std::string mod_version{"Unknown"};
    std::string plasmid_version{"Unknown"};
    std::string min_primordialis_version{"Unknown"};

    std::vector<ConfigValue> config{};

    bool operator== (const Mod& other) const
    {
        if (weakly_canonical(path) == weakly_canonical(other.path)) // path is the only thing that matters
            return true;
        return false;
    }

    [[nodiscard]] bool is_lua() const
    {
        return !init_path.empty();
    }

    [[nodiscard]] bool is_cpp() const
    {
        return !dll_path.empty();
    }
};

struct ModManager
{
    std::vector<Mod> mods;
    std::string error_log;
    std::string log;

    fs::path game_path = fs::current_path();
    fs::path pilus_files_path{game_path / "pilus_files/"};
    fs::path luasome_path{pilus_files_path / "luasome"};
    fs::path lua_mod_list_path{luasome_path / "mod_list.lua"};

    const std::string version_manifest_url{
        "https://raw.githubusercontent.com/u0068/PrimordialisSDK/master/version_manifest.json"};
    const fs::path version_manifest_path{pilus_files_path.string()+"pilus_version_manifest.json"};
    json version_manifest;

    const fs::path config_path{pilus_files_path.string()+"pilus_config.json"};
    json pilus_config;

    fs::path mod_path{game_path / "mods"};
    std::string last_description_trunc;

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

    void SaveLuaModlist();
    void PatchInitLua();

    void SaveConfig();
    void LoadConfig();

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

std::string ReadFile(const fs::path& path);