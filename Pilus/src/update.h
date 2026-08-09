#pragma once
#include "../external/json.hpp"

using json = nlohmann::json;

struct Version
{
    int major{};
    int minor{};
    int patch{};

    bool operator>(const Version& other) const
    {
        if (major != other.major)
            return major > other.major;

        if (minor != other.minor)
            return minor > other.minor;

        return patch > other.patch;
    }

    bool operator==(const Version& other) const
    {
        return major == other.major &&
               minor == other.minor &&
               patch == other.patch;
    }
};

bool CheckAndUpdate();
bool UpdatePDB(const fs::path& game_path, ModManager &manager);