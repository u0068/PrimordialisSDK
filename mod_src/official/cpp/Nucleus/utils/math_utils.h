#pragma once
#include <numbers>
#include <cstdint>
#include <cstdlib>

#include "general.h"
#include "interface/logstream.h"

inline uint32_t HashId(const char *name) {
    uint32_t hash = 2166136261u;

    auto hash_byte = [&](uint8_t c) {
        hash ^= c;
        hash *= 16777619u;
    };

    for (char c : std::string_view(A::mod_name)) {
        hash_byte(static_cast<uint8_t>(c));
    }

    hash_byte(':');

    for (char c : std::string_view(name)) {
        hash_byte(static_cast<uint8_t>(c));
    }

    // 24 bits -> four 6-bit Base64 characters.
    constexpr char alphabet[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789+-";

    uint32_t value = hash & 0xFFFFFFu;

    uint32_t id =
         static_cast<uint32_t>(alphabet[(value >> 18) & 0x3F]) |
        (static_cast<uint32_t>(alphabet[(value >> 12) & 0x3F]) << 8) |
        (static_cast<uint32_t>(alphabet[(value >>  6) & 0x3F]) << 16) |
        (static_cast<uint32_t>(alphabet[ value        & 0x3F]) << 24);

    A::Log(COL_INFO)
            << "Generated id: "
            << UintToStr(id)
            << " (" << id << ") for: "
            << name;

    return id;
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
