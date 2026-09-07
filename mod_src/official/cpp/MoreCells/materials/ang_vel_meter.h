#pragma once
#include "plasmid_api.h"

inline void AngVelMeter(P::cell* cell)
{
    constexpr float multiplier = 25.0f;

    const float angle = atan2(cell->rot_y, cell->rot_x);
    const float prev_angle = cell->value;

    const float ang_vel = P::AngleTo(prev_angle, angle);

    cell->value = angle;
    cell->voltage = cell->voltage_multiplier * multiplier * ang_vel;
}

inline void AddAngVelMeter()
{
    auto material = P::materials_list[P::CellRef{"Speedometer cell"}.GetIndex()];
    material.electric_update_fn = AngVelMeter;
    material.base_color = {0.4f, 0.5f, 1.0f, 1.0f}; // Blue
    SetCellNameAndDesc(material, "Angular velocity meter cell", "Creates a voltage proportional to the rate of rotation of the cell.");
    P::materials_list[P::n_materials++] = material;
}