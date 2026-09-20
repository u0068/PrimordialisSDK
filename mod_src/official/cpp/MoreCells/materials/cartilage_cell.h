#pragma once
#include "plasmid_api.h"

inline void AddCartilageCell() {
    auto material = P::MatRef{"Hard cell"}.GetCopy();
    material.next_variant = P::MatRef{"Hard cell"}.GetIndex();
    material.drop_weight *= 0.1; // Low drop weight because it can be cycled from hard cell
    material.is_hard = false;
    material.base_color = {0.6f, 0.6f, 1.0f, 1.0f}; // Slightly bluish to distinguish it from Hard cell
    P::SetCellNameAndDesc(material, "Cartilage cell", "A stiff, but bendable cell resistant to spikes and explosions");
    P::materials_list[P::n_materials++] = material;

    P::MatRef{"Hard cell"}.GetPointer()->next_variant = P::MatRef{"Cartilage cell"}.GetIndex();
}
