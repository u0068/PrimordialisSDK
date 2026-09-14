#pragma once
#include "plasmid_api.h"

inline void PinCell(P::cell *cell) {
    // cell->x -= cell->x_dot;
    // cell->y -= cell->y_dot;
    cell->x_dot = 0.0f;
    cell->y_dot = 0.0f;
    auto extra_fields = GetExtraFields(cell);
    // extra_fields->old_x.x -= extra_fields->old_x_dot.x;
    // extra_fields->old_x.y -= extra_fields->old_x_dot.y;
    extra_fields->old_x_dot = {0, 0};
    // extra_fields->attached_world_pos = extra_fields->old_x;
}

inline void AddPinCell() {
    auto material = P::MatRef{"Heavy cell"}.GetCopy();
    material.growth_rate = 0.01f;
    material.density = 1e4f; // Big but not big enough to cause problems
    material.force_update_fn = PinCell;
    material.base_color = {0.9f, 0.8f, 0.9f, 1.0f};
    P::SetCellNameAndDesc(material, "Pin cell", "An nigh immovable cell.");
    P::materials_list[P::n_materials++] = material;
}
