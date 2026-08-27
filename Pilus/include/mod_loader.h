#pragma once
#include <vector>
#include <windows.h>
#include "json_helpers.h"

namespace fs = std::filesystem;

struct Mod;

namespace ModManager
{
    inline std::vector<Mod> mods{};

    inline fs::path game_path = fs::current_path();
    inline fs::path pilus_files_path{game_path / "pilus_files/"};
    inline fs::path luasome_path{pilus_files_path / "luasome"};
    inline fs::path lua_mod_list_path{luasome_path / "mod_list.lua"};

    const std::string version_manifest_url{
        "https://raw.githubusercontent.com/u0068/PrimordialisSDK/master/version_manifest.json"};
    const fs::path version_manifest_path{pilus_files_path/"pilus_version_manifest.json"};
    inline json version_manifest{};

    const fs::path config_path{pilus_files_path/"pilus_config.json"};
    inline json pilus_config{};

    inline fs::path mod_path{game_path / "mods"};
    inline std::string last_description_trunc{};

    void RefreshMods();
    void InjectAll();

    void SaveLuaModlist();
    void PatchInitLua();

    void SavePilusConfig();
    void LoadPilusConfig();
}

struct Mod
{
    // SAVED IN PILUS.CONFIG
    fs::path path{};
    fs::path dll_path{};
    fs::path init_path{};
    json config_values{};
    bool user_enabled = true;

    // UNSAVED:
    std::string name = "Unnamed Mod"; // mod name is the filename or whatever is held in info.json
    std::string installed_version = "0.0.0";
    ord_json config_defaults{};
    json local_info{};
    bool dep_enabled = false;

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

    [[nodiscard]] bool is_enabled() const
    {
        return user_enabled or dep_enabled;
    }

    [[nodiscard]] bool is_installed() const
    {
        return exists(path);
    }

    [[nodiscard]] json& get_manifest() const
    {
        return ModManager::version_manifest[name];
    }

    [[nodiscard]] json& get_deps() const
    {
        return get_manifest()["versions"][installed_version]["dependencies"];
    }
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