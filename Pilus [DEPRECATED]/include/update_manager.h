#pragma once
#include <regex>

#include "json.hpp"
#include "mod_loader.h"

using json = nlohmann::json;

struct Version {
    int major{0};
    int minor{0};
    int patch{0};

    Version() {}

    Version(const std::string& tag) {
        std::regex tag_regex(R"((\d+)(?:.(\d+))?(?:.(\d+))?)");

        std::smatch match;
        if (std::regex_search(tag, match, tag_regex)) {
            major = std::stoi(match[1].str());
            minor = std::stoi(match[2].matched ? match[2].str() : "0");
            patch = std::stoi(match[3].matched ? match[3].str() : "0");
            // console_log << "Parsed Version: " << tag << ": "<<major<<"."<<minor<<"."<<patch<<"\n";
        }
        else {
            console_log << err << "Failed to Parse Version: " << tag << "\n";
        }
    }

    bool operator>(const Version& other) const {
        if (major != other.major)
            return major > other.major;

        if (minor != other.minor)
            return minor > other.minor;

        return patch > other.patch;
    }

    bool operator==(const Version& other) const {
        return major == other.major &&
               minor == other.minor &&
               patch == other.patch;
    }

    const std::string to_string() const {
        std::stringstream ss;
        ss << major << "." << minor << "." << patch;
        return ss.str();
    }

    operator std::string() const {
        return to_string();
    }
};

void UpdateLocalVersionManifest();

void UpdateModloader();

void CreateDirectories();