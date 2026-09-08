#pragma once
#include "plasmid_api.h"

inline void AddFatCell()
{
    auto material = P::materials_list[P::CellRef{"Elastic cell"}.GetIndex()];
    material.base_cost = 3.0f;
    material.max_health = 50.0f;
    material.regen = 0.0001f;
    material.transfer_rate = 1.0f;
    material.growth_rate = 0.01f;
    material.heat_capacity = 1000.0f;
    material.inv_heat_capacity = 1.0f / material.heat_capacity;
    material.base_color = {1.0f, 1.0f, 0.1f, 1.0f}; // Yellow
    SetCellNameAndDesc(material, "Fat cell", "A fatty cell with high biomass storage.");
    P::materials_list[P::n_materials++] = material;
}