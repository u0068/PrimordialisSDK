#pragma once
#include "plasmid_api.h"
#include "generated/game_functions/world.h"

inline void WallDetector(Game::cell* cell) {
    constexpr float max_voltage = 1.0f;
    constexpr float falloff = 0.005f;
    Game::wall_t walls = GetExtraFields(cell)->wall;
    Game::wall_map(&walls, &Game::w->map, Game::real_2{cell->x, cell->y}, false);
    PowerCell(cell, max_voltage / (std::max(0.0f, falloff * walls.dist) + 1.0f));
}

inline void AddWallDetector() {
    auto material = Game::MatRef{"Proximity detecting cell"}.GetCopy();
    material.electric_update_fn = WallDetector;
    material.base_color = {0.5f, 0.4f, 0.6f, 1.0f}; // Bluish gray
    Game::SetCellNameAndDesc(material, "Wall detector cell",
                          "Produces a voltage inversely proportional to its distance from a wall.");
    Game::materials_list[Game::n_materials++] = material;
}
