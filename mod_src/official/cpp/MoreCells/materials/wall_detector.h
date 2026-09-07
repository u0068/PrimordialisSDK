#pragma once
#include "plasmid_api.h"
#include "generated/game_functions/world.h"

inline void WallDetector(P::cell* cell)
{
    P::wall_t walls;
    P::wall_map_extended(&walls, &P::w->map, P::real_2{cell->x, cell->y});
    cell->voltage = 300.0 * cell->voltage_multiplier / walls.dist;
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