#pragma once
#include "plasmid_api.h"

inline void AddStiffCell()
{
    auto material = P::materials_list[P::CellRef{"Hard cell"}.GetIndex()];
    material.is_hard = false;
    material.base_color = {0.6f, 0.6f, 1.0f, 1.0f}; // Slightly bluish to distinguish it from Hard cell
    SetCellNameAndDesc(material, "Stiff cell", "A stiff cell resistant to spikes and explosions");
    P::materials_list[P::n_materials++] = material;
}