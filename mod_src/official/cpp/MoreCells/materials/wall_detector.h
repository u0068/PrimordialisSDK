#pragma once
#include "plasmid_api.h"
#include "generated/game_functions/world.h"

inline void WallDetector(P::cell* cell)
{
    constexpr float max_voltage = 1.0f;
    constexpr float falloff = 0.005f;
    P::wall_t walls = GetExtraFields(cell)->wall;
    P::wall_map(&walls, &P::w->map, P::real_2{cell->x, cell->y}, false);
    cell->voltage = cell->voltage_multiplier * max_voltage / (max(0, falloff * walls.dist) + 1.0f);
}

inline void AddWallDetector()
{
    auto material = P::materials_list[P::CellRef{"Proximity detecting cell"}.GetIndex()];
    material.electric_update_fn = WallDetector;
    material.uv = P::materials_list[P::CellRef{"Power switch cell"}.GetIndex()].uv;
    material.base_color = {0.5f, 0.4f, 0.6f, 1.0f}; // Bluish gray
    SetCellNameAndDesc(material, "Wall detector cell", "Creates a voltage inversely proportional to its distance from a wall.");
    P::materials_list[P::n_materials++] = material;
}