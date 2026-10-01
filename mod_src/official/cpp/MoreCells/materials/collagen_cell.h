#pragma once
#include "plasmid_api.h"

inline void AddCollagenCell() {
    auto material = Game::MatRef{"Basic cell"}.GetCopy();
    material.tags = TAG_STRUCTURE;
    material.next_variant = Game::MatRef{"Lightweight cell"}.GetIndex();
    material.drop_weight = 0.03f;
    material.base_cost = 1.0f;
    material.genome_size = 1.0f;
    material.regen_delay_multiplier = 0.0f;
    material.max_health = 2.0f;
    material.hardness = 2.0f;
    material.movement_force = 0.0f;
    material.growth_rate *= 0.1f;
    material.transfer_rate *= 0.1f;
    material.regen *= 0.1f;
    material.heat_conductivity *= 0.5f;
    material.base_color = {0.9f, 1.0f, 0.9f, 0.9f};
    material.uv = Game::MatRef{"Lightweight cell"}.GetPointer()->uv;
    Game::SetCellNameAndDesc(material, "Collagen cell", "A structural cell that doesn't pause regen when damaged.");
    Game::materials_list[Game::n_materials++] = material;
}
