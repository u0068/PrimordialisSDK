#pragma once
#include "plasmid_api.h"

inline void AddCollagenCell() {
    auto material = P::MatRef{"Basic cell"}.GetCopy();
    material.next_variant = P::MatRef{"Lightweight cell"}.GetIndex();
    material.base_cost = 2.0f;
    material.regen_delay_multiplier = 0.0f;
    material.max_health = 2.0f;
    material.hardness = 2.0f;
    material.movement_force = 0.0f;
    material.growth_rate *= 0.1f;
    material.transfer_rate *= 0.1f;
    material.regen *= 0.1f;
    material.heat_conductivity *= 0.5f;
    material.base_color = {0.9f, 1.0f, 0.9f, 0.9f};
    material.uv = P::MatRef{"Lightweight cell"}.GetPointer()->uv;
    P::SetCellNameAndDesc(material, "Collagen cell", "A structural cell that doesn't pause regen when damaged.");
    P::materials_list[P::n_materials++] = material;
}
