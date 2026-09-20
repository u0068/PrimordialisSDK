#pragma once
#include <cfloat>

#include "plasmid_api.h"

constexpr float max_mass = 1e4f;

inline void PinCell(P::cell* cell) {
    // TODO: Make it work when paused
    if (P::w->sm.dragged_body == cell->body_id) {
        cell->stasis = 0.0f;
        // cell->mass = 1.0f;
        // cell->custom_mass = true;
    }
    else if (cell->voltage <= 0.01f) {
        cell->stasis = FLT_MAX;
        // cell->mass = max_mass;
        // cell->custom_mass = false;

        cell->x_dot = 0.0f;
        cell->y_dot = 0.0f;
        auto extra_fields = GetExtraFields(cell);
        extra_fields->old_x_dot = {0.0f, 0.0f};
    }
    else {
        cell->stasis = 0.01f / cell->voltage;
        // cell->mass = 1.0f/(2.0f*cell->voltage + 1.0f/max_mass);
        // cell->custom_mass = true;
    }
}

inline void AddPinCell() {
    auto material = P::MatRef{"Heavy cell"}.GetCopy();
    material.is_hard = true;
    material.growth_rate = 0.01f;
    material.density = max_mass;
    material.force_update_fn = PinCell;
    const P::material_t conductive = P::MatRef{"Conductive cell"}.GetCopy();
    material.conductivity = conductive.conductivity;
    material.leak_conductivity = conductive.leak_conductivity;
    material.capacitance = conductive.capacitance;
    material.inv_capacitance = conductive.inv_capacitance;
    material.base_color = {0.9f, 0.8f, 0.9f, 1.0f};
    P::SetCellNameAndDesc(material, "Pin cell", "An nigh immovable cell, unless powered.");
    P::materials_list[P::n_materials++] = material;
}
