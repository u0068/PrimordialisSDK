#pragma once
#include "plasmid_api.h"

inline void AddAeroGelCell()
{
    auto material = P::materials_list[P::CellRef{"Lightweight cell"}.GetIndex()];
    material.is_hard = true;
    material.density = 0.1f;
    material.base_cost = 2.0f;
    material.max_health = 0.1f;
    material.movement_force *= 0.5f;
    material.growth_rate *= 0.5f;
    material.transfer_rate *= 0.05f;
    material.regen *= 0.5f;
    material.max_angular_force = 0.05f;
    material.max_radial_force = 0.15f;
    material.radial_compliance = 0.0f;
    material.angular_compliance = 0.0f;
    material.plasticity = 0.01f;
    material.restitution = 0.9f;
    material.drag = 0.1f;
    material.heat_conductivity = 0.0f;
    material.heat_capacity = 10.0f;
    material.inv_heat_capacity = 1.0f / material.heat_capacity;
    material.base_color = {1.5f, 1.5f, 2.0f, 0.3f};
    SetCellNameAndDesc(material, "Aero-gel cell", "A very light, insulating and brittle cell");
    P::materials_list[P::n_materials++] = material;
}