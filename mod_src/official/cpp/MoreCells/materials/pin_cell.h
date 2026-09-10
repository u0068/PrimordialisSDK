#pragma once
#include "plasmid_api.h"

inline void PinCell(P::cell* cell)
{
    cell->x -= cell->x_dot;
    cell->y -= cell->y_dot;
    cell->x_dot = 0.0f;
    cell->y_dot = 0.0f;
}

inline void AddPinCell()
{
    auto material = P::materials_list[P::CellRef{"Heavy cell"}.GetIndex()];
    material.density = 1e30f; // Very big number, but not big enough to worry about overflow.
    material.physics_update_fn = PinCell;
    material.base_color = {0.9f, 0.8f, 0.9f, 1.0f};
    SetCellNameAndDesc(material, "Pin cell", "An nigh immovable cell.");
    P::materials_list[P::n_materials++] = material;
}