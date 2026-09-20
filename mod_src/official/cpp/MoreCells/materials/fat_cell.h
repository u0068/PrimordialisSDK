#pragma once
#include "plasmid_api.h"

constexpr float density = 10.0f;

inline void FatCell(P::cell* cell) {
    float health_normalised = cell->health / P::materials_list[cell->material_index].max_health;
    // cell->mass = (0.1f + health_normalised) * P::materials_list[cell->material_index].density;
    cell->target_spacing = health_normalised * 2.0f;
    cell->base_r = health_normalised * 2.0f;
    cell->mass = health_normalised * density;
    cell->custom_mass = true;
}

inline void AddFatCell() {
    auto material = P::MatRef{"Elastic cell"}.GetCopy();
    material.tags = TAG_STRUCTURE | TAG_UTILITY;
    material.drop_weight = 0.1f;
    material.base_radius = 2.0f;
    material.base_cost = 3.0f;
    material.max_health = 50.0f;
    material.genome_size = 3.0f;
    material.regen = 0.0001f;
    material.transfer_rate = 1.0f;
    material.growth_rate = 0.01f;
    material.density = density;
    material.movement_force = 0.0f;
    material.heat_capacity = 1000.0f;
    material.physics_update_fn = FatCell;
    material.inv_heat_capacity = 1.0f / material.heat_capacity;
    material.base_color = {1.0f, 0.9f, 0.2f, 1.0f}; // Yellow
    P::SetCellNameAndDesc(material, "Fat cell",
                          "A soft, fatty cell with high biomass storage. Swells when storing biomass. Insulates heat.");
    P::materials_list[P::n_materials++] = material;
}
