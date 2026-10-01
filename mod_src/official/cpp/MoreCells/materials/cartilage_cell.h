#pragma once
#include "plasmid_api.h"

inline void AddCartilageCell() {
    auto material = Game::MatRef{"Hard cell"}.GetCopy();
    material.next_variant = Game::MatRef{"Hard cell"}.GetIndex();
    material.drop_weight *= 0.1; // Low drop weight because it can be cycled from hard cell
    material.is_hard = false;
    material.base_color = {0.6f, 0.6f, 1.0f, 1.0f}; // Slightly bluish to distinguish it from Hard cell
    Game::SetCellNameAndDesc(material, "Cartilage cell", "A stiff, but bendable cell resistant to spikes and explosions");
    Game::materials_list[Game::n_materials++] = material;

    Game::MatRef{"Hard cell"}.GetPointer()->next_variant = Game::MatRef{"Cartilage cell"}.GetIndex();
}
