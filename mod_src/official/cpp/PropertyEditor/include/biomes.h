#pragma once
#include "plasmid_api.h"

inline bool reset_biomes_on_reload = false;
inline bool has_initialised_biomes = false;
inline bool remove_view_limit = true;


union biome_id {
    uint numeric;
    char string[5];
};

inline void InitBiomeTypesHook() {
    if (not reset_biomes_on_reload and has_initialised_biomes) {
        return;
    }
    P::Next<void>();
    if (!P::IsThreadSafe()) {
        return;
    }
    has_initialised_biomes = true;
}

inline void DrawWallsHook(P::render_context* rc,P::map_t* map,float fade_in) {
    if (remove_view_limit) {
        P::w->vision_radius = 1e6f;
        // fade_in = 1.0f;
    }
    P::Next<void>(rc, map, fade_in);
}