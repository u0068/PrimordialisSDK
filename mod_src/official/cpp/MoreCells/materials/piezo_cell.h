#pragma once
#include "plasmid_api.h"

inline void PiezoCell(P::cell* cell)
{
    constexpr float multiplier = 25.0f;

    float stress = 0.0f;
    for (int i=0; i<6; i++)
    {
        stress += cell->spacing[i*0x10];
    }

    cell->voltage = cell->voltage_multiplier * multiplier * stress;
}

inline void AddPiezoCell()
{
    auto material = P::materials_list[P::CellRef{"Proximity detecting cell"}.GetIndex()];
    material.electric_update_fn = PiezoCell;
    material.radial_compliance *= 16.0f;
    material.uv = P::materials_list[P::CellRef{"Power switch cell"}.GetIndex()].uv;
    material.base_color = {1.5f, 2.0f, 0.5f, 0.5f};
    SetCellNameAndDesc(material, "Angular velocity meter cell", "Creates a voltage proportional to the rate of rotation of the cell.");
    P::materials_list[P::n_materials++] = material;
}