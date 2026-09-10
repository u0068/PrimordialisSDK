#pragma once
#include "plasmid_api.h"

inline void FatCell(P::cell* cell)
{
    float health_normalised = cell->health / P::materials_list[cell->material_index].max_health;
    // cell->mass = (0.1f + health_normalised) * P::materials_list[cell->material_index].density;
    cell->target_spacing = health_normalised * 2.0f;
    cell->r = health_normalised * 2.0f;
}

inline void AddFatCell()
{
    auto material = P::materials_list[P::CellRef{"Elastic cell"}.GetIndex()];
    material.base_cost = 3.0f;
    material.max_health = 50.0f;
    material.regen = 0.0001f;
    material.transfer_rate = 1.0f;
    material.growth_rate = 0.01f;
    material.density = 2.0f;
    material.movement_force = 0.0f;
    material.heat_capacity = 1000.0f;
    material.physics_update_fn = FatCell;
    material.inv_heat_capacity = 1.0f / material.heat_capacity;
    material.base_color = {1.0f, 0.9f, 0.2f, 1.0f}; // Yellow
    SetCellNameAndDesc(material, "Fat cell", "A fatty cell with high biomass storage.");
    P::materials_list[P::n_materials++] = material;
}