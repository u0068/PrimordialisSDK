#pragma once
#include "plasmid_api.h"
#include "generated/game_functions/world.h"

inline void WallDetector(P::cell *cell) {
    constexpr float max_voltage = 1.0f;
    constexpr float falloff = 0.005f;
    P::wall_t walls = GetExtraFields(cell)->wall;
    P::wall_map(&walls, &P::w->map, P::real_2{cell->x, cell->y}, false);
    PowerCell(cell, max_voltage / (max(0, falloff * walls.dist) + 1.0f));
}

inline void AddWallDetector() {
    auto material = P::MatRef{"Proximity detector cell"}.GetCopy();
    material.electric_update_fn = WallDetector;
    material.base_color = {0.5f, 0.4f, 0.6f, 1.0f}; // Bluish gray
    P::SetCellNameAndDesc(material, "Wall detector cell",
                       "Produces a voltage inversely proportional to its distance from a wall.");
    P::materials_list[P::n_materials++] = material;
}
