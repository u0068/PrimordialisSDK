#pragma once
#include "plasmid_api.h"

// We will call this function in OnInitMats in main.cpp
inline void AddAeroGelCell()
{
    // This is an Aero-gel cell, which is very light, brittle and insulating like aero-gel in real life
    auto material = P::materials_list[P::CellRef{"Lightweight cell"}.GetIndex()]; // Use Lightweight cell as base
    material.is_hard = true;
    material.density = 0.1f; // Weight
    material.base_cost = 2.0f;
    material.max_health = 0.1f;
    material.movement_force *= 0.5f;
    material.growth_rate *= 0.5f;
    material.transfer_rate *= 0.05f;
    material.regen *= 0.5f;
    material.max_angular_force = 0.05f;
    material.max_radial_force = 0.15f;
    material.radial_compliance = 0.0f; // Stretchiness
    material.angular_compliance = 0.0f; // Bendiness
    material.plasticity = 0.01f;
    material.restitution = 0.9f; // Bounciness
    material.drag = 0.1f;
    material.heat_conductivity = 0.0f;
    material.leak_heat_conductivity = 10.0f;
    material.heat_capacity = 1e4f;
    material.inv_heat_capacity = 1.0f / material.heat_capacity;
    material.base_color = {1.5f, 1.5f, 2.0f, 0.3f}; // Transparent super-luminous blue
    SetCellNameAndDesc(material, "Aero-gel cell", "A very light, insulating and brittle cell");
    P::materials_list[P::n_materials++] = material;
}