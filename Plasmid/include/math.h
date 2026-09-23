#pragma once
#include "plasmid_log.h"
#include <numbers>
#include <cmath>
#include <string_view>

namespace P {
    // TODO: Make this human readable with something like base64
    inline uint32_t HashId(
        const char* name
    ) {
        uint32_t hash = 2166136261;

        auto hash_byte = [&](uint8_t c) {
            hash ^= c;
            hash *= 16777619;
        };

        for (char c: (std::string_view) mod_name) {
            hash_byte(c);
        }

        hash_byte(':');

        for (char c: (std::string_view) name) {
            hash_byte(c);
        }

        Internal::PLog(COL_MUTED) << "Generated id: " << hash << " for: " << name;

        return hash;
    }

    inline float AngleDifference(float a, float b) {
        auto angle_diff = (float) fmod(abs(a - b), 2.0f * std::numbers::pi);
        if (angle_diff > std::numbers::pi) {
            angle_diff = 2.0f * (float) std::numbers::pi - angle_diff;
        }
        return angle_diff;
    }

    inline float AngleTo(float a, float b) {
        auto angle_diff = (float) fmod(abs(a - b), 2.0f * std::numbers::pi);
        if (angle_diff > std::numbers::pi) {
            angle_diff = 2.0f * (float) std::numbers::pi - angle_diff;
        }
        if (a > b) {
            angle_diff = -angle_diff;
        }
        return angle_diff;
    }
}
