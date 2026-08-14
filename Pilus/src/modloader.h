#pragma once
#include <fstream>
#include <vector>
#include <variant>
#include <windows.h>
#include "../external/json.hpp"

using json = nlohmann::json;

namespace fs = std::filesystem;

// inline fs::path pilus_log_path{fs::current_path() / "pilus_log.txt"};
// inline std::fstream console_log(pilus_log_path, std::ios::out | std::ios::in);
inline std::stringstream console_log;
const std::string err{"[ERROR]\t"};

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

    // std::vector<ConfigValue> config{};
   nlohmann::ordered_json config{};

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

namespace ModManager
{
    inline std::vector<Mod> mods{};

    inline fs::path game_path = fs::current_path();
    inline fs::path pilus_files_path{game_path / "pilus_files/"};
    inline fs::path luasome_path{pilus_files_path / "luasome"};
    inline fs::path lua_mod_list_path{luasome_path / "mod_list.lua"};

    const std::string version_manifest_url{
        "https://raw.githubusercontent.com/u0068/PrimordialisSDK/master/version_manifest.json"};
    const fs::path version_manifest_path{pilus_files_path.string()+"pilus_version_manifest.json"};
    inline json version_manifest{};

    const fs::path config_path{pilus_files_path.string()+"pilus_config.json"};
    inline json pilus_config{};

    inline fs::path mod_path{game_path / "mods"};
    inline std::string last_description_trunc{};

    void RefreshMods();
    void InjectAll();

    void SaveLuaModlist();
    void PatchInitLua();

    void SavePilusConfig();
    void LoadPilusConfig();
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