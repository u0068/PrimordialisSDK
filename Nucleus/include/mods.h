#pragma once
#include <vector>
#include <windows.h>
#include <filesystem>

namespace fs = std::filesystem;

struct Mod;

namespace ModParser {
    inline std::vector<Mod> enabled_mods{};

    std::filesystem::path GetLoaderFilesFolder();

    inline fs::path game_path {fs::current_path()};
    inline fs::path profile_path {GetLoaderFilesFolder()};
    inline fs::path mod_path {profile_path / "mods"};

    void ParseMods();
}

struct Mod {
    std::string name{"Unnamed Mod"}; // mod name is the filename
    fs::path path{};
    fs::path dll_path{};
    fs::path init_path{};

    bool operator==(const Mod& other) const {
        if (weakly_canonical(path) == weakly_canonical(other.path)) { // path is the only thing that matters
            return true;
        }
        return false;
    }

    [[nodiscard]] bool is_lua() const {
        return !init_path.empty();
    }

    [[nodiscard]] bool is_cpp() const {
        return !dll_path.empty();
    }

    [[nodiscard]] bool is_installed() const {
        return exists(path);
    }
};

std::string ReadFile(const fs::path& path);
