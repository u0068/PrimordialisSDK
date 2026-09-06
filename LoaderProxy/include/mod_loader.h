#pragma once
#include <vector>
#include <windows.h>
#include <filesystem>
#include "log_setup.h"
// #include "json_helpers.h"

namespace fs = std::filesystem;

struct Mod;

namespace ModManager
{
    inline std::vector<Mod> mods{};

    inline fs::path game_path = fs::current_path();
    inline fs::path loader_files_path{};
    inline fs::path luasome_path{loader_files_path / "luasome"};
    inline fs::path lua_mod_list_path{luasome_path / "mod_list.lua"};

    inline fs::path mod_path{loader_files_path / "mods"};
    inline std::string last_description_trunc{};

    void ParseMods();
    void InjectAll();

    void SaveLuaModlist();
    void PatchInitLua();
}

struct Mod
{
    std::string name = "Unnamed Mod"; // mod name is the filename or whatever is held in info.json
    fs::path path{};
    fs::path dll_path{};
    fs::path init_path{};
    bool enabled = false;

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

    [[nodiscard]] bool is_installed() const
    {
        return exists(path);
    }
};

std::string ReadFile(const fs::path& path);