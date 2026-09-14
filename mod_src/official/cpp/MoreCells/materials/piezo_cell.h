#pragma once
#include "plasmid_api.h"

inline void PiezoCell(P::cell *cell) {
    constexpr float multiplier = 50.0f;

    float stress = 0.0f;
    for (int i = 0; i < 6; i++) {
        auto neighbor = GetExtraFields(cell)->neighbors[i];
        if (not neighbor)
            continue;
        // Calculate connection stiffness from inverse mean of compliances
        const float stiffness = 2.0f / (
                                    P::materials_list[neighbor->material_index].radial_compliance +
                                    P::materials_list[cell->material_index].radial_compliance);
        // Use Hooke's law (F = -kx) to calculate stress force from extension and stiffness
        const float extension = cell->spacing[0x10 * i] - cell->target_spacing;
        stress -= extension * stiffness;
    }

    PowerCell(cell, multiplier * stress);
}

inline void AddPiezoCell() {
    auto material = P::MatRef{"Proximity detector cell"}.GetCopy();
    material.electric_update_fn = PiezoCell;
    material.radial_compliance *= 8.0f;
    material.uv = P::MatRef{"Feeler cell"}.GetCopy().uv; // Steal feelers texture, just to show how it's done.
    material.base_color = {0.3f, 0.0f, 1.0f, 0.8f};
    P::SetCellNameAndDesc(material, "Piezoelectric cell",
                       "Produces a voltage proportional to how much the cell is squeezed.");
    P::materials_list[P::n_materials++] = material;
}
