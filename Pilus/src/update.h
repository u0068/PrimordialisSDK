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

namespace Update
{
    bool CheckAndUpdate();
}

namespace
{
    constexpr wchar_t GITHUB_HOST[] = L"api.github.com";

    constexpr wchar_t RELEASES_PATH[] =
        L"/repos/u0068/PrimordialisSDK/releases";

    constexpr wchar_t USER_AGENT[] =
        L"Pilus-Updater";
}
