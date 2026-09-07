#pragma once
#include "plasmid_log.h"
#include <math.h>
#include <numbers>
//#include <cmath>
#include <string_view>

namespace P
{
    // TODO: Make this human readable with something like base64
    inline uint32_t HashCellId(
        const char *cell
    )
    {
        uint32_t hash = 2166136261;

        auto hash_byte = [&](uint8_t c)
        {
            hash ^= c;
            hash *= 16777619;
        };

        for (char c : (std::string_view)mod_name)
            hash_byte(c);

        hash_byte(':');

        for (char c : (std::string_view)cell)
            hash_byte(c);

        PlasmidLog() << "Generated '"<<cell<<"' id: "<<hash<<"\n";

        return hash;
    }

    inline float AnguleDifference(float a, float b)
    {
        float angle_diff = fmod(abs(a - b), 2.0f*std::numbers::pi);
        if (angle_diff > std::numbers::pi)
            angle_diff = 2.0f*std::numbers::pi-angle_diff;
        return angle_diff;
    }

    inline float AngleTo(float a, float b)
    {
        float angle_diff = fmod(abs(a - b), 2.0f*std::numbers::pi);
        if (angle_diff > std::numbers::pi)
            angle_diff = 2.0f*std::numbers::pi-angle_diff;
        if (a > b)
            angle_diff = -angle_diff;
        return angle_diff;
    }
}
