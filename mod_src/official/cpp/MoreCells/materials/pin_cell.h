#pragma once
#include "plasmid_api.h"

inline void PinCell(P::cell *cell) {
    cell->x_dot = 0.0f;
    cell->y_dot = 0.0f;
    auto extra_fields = GetExtraFields(cell);
    extra_fields->old_x_dot = {0.0f, 0.0f};

    // TODO: Make it work when paused
    if (P::w->sm.dragged_body == cell->body_id) {
        cell->stasis = 0.0f;
    }
    else if (cell->voltage <= 0.0f) {
        cell->stasis = FLT_MAX;
    }
    else {
        cell->stasis = 0.01f/cell->voltage;
    }
}

inline void AddPinCell() {
    auto material = P::MatRef{"Heavy cell"}.GetCopy();
    material.growth_rate = 0.01f;
    material.density = 1e4f; // Big but not big enough to cause problems
    material.force_update_fn = PinCell;
    const P::material_t conductive = P::MatRef {"Conductive cell"}.GetCopy();
    material.conductivity = conductive.conductivity;
    material.leak_conductivity = conductive.leak_conductivity;
    material.capacitance = conductive.capacitance;
    material.inv_capacitance = conductive.inv_capacitance;
    material.base_color = {0.9f, 0.8f, 0.9f, 1.0f};
    P::SetCellNameAndDesc(material, "Pin cell", "An nigh immovable cell.");
    P::materials_list[P::n_materials++] = material;
}
