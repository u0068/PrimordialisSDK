#pragma once
#include "plasmid_api.h"

// This cell is a bit more complicated than the others
// Lets make it less complicated by using some helper functions
// cell->value stores the toggle state of all 6 sides using a bit for each side, where 1 = on and 0 = off
// We obviously need an is_toggled to represent whether the side is toggled
// Not so obviously, we also need a has_toggled so that we only toggle the side once per activation
// Here is a union that expresses that:
union toggle_states {
    uint flags;

    struct {
        byte is_toggled;  // Is this side currently toggled?
        byte has_toggled; // Has this side already been toggled?
        byte is_negative; // Is negatively charged? (We want to discharge -V but not affect +V to make it more snappy)
    };
};

// Functions for manipulating the bits so you don't have to

inline bool GetBit(const byte byte, const uint index) {
    return (byte >> index) & 1;
}

inline void SetBit(byte& byte, const uint index, const bool value) {
    if (value)
        byte |= 1 << index;
    else
        byte &= ~(1 << index);
}

inline void ToggleBit(byte& byte, const uint index) {
    byte ^= 1 << index;
}

inline void TogglingCellConnections(P::cell* cell) {
    auto neighbors = GetExtraFields(cell)->neighbors;
    auto states = toggle_states((uint) cell->value);
    float own_dir_conductivity = P::materials_list[cell->material_index].directional_conductivity;
    for (int side = 0; side < 6; side++) {
        if (auto* neighbor = neighbors[side]) {
            int index = side * 16; // cell properties are interweaved in 16 cell intervals for optimisation
            int opposite_side = (side + 3) % 6;
            int opposite_side_index = opposite_side * 16;
            float neighbor_conductivity = P::materials_list[neighbor->material_index].conductivity;
            float neighbor_dir_conductivity = P::materials_list[neighbor->material_index].directional_conductivity;
            float neighbor_voltage = neighbor->voltage;
            if (neighbor_dir_conductivity > 0.0f) {
                // If the neighbor is directionally conductive, use the directional values
                neighbor_voltage = neighbor->directional_voltage[opposite_side_index];
                neighbor_conductivity = neighbor_dir_conductivity;
            }
            if (neighbor_voltage >= 0.25f and not GetBit(states.has_toggled, opposite_side)) {
                ToggleBit(states.is_toggled, opposite_side);
                SetBit(states.has_toggled, opposite_side, true);
            }
            else if (neighbor_voltage < 0.25f) {
                SetBit(states.has_toggled, opposite_side, false);
            }
            if (neighbor_voltage < 0.0f) {
                SetBit(states.is_negative, side, true);
            }
            else {
                SetBit(states.is_negative, side, false);
            }
            if (neighbor_conductivity > 0.0f) {
                float conductance = (own_dir_conductivity * neighbor_conductivity) / (
                                        own_dir_conductivity + neighbor_conductivity);
                if (neighbor_dir_conductivity <= 0.0f) {
                    // Equalise voltages between neighboring cells
                    neighbor->equilibrium_voltage += conductance * cell->directional_voltage[index];
                    neighbor->total_conductance += conductance;
                }
                cell->directional_eq_voltage[index] += conductance * neighbor_voltage;
                cell->directional_conductance[index] += conductance;
            }
        }
    }
    cell->value = (float) states.flags;
}

// This is actually identical to the isolator's electric_update_fn, so we could have just reused that,
// But I wrote this anyway to use as an example.
inline void TogglingCellElectric(P::cell* cell) {
    auto states = toggle_states((uint) cell->value);
    for (int side = 0; side < 6; side++) {
        int index = side * 16;
        if (GetBit(states.is_toggled, side)) {
            cell->directional_voltage[index] = -cell->voltage_multiplier;
        }
        else if (GetBit(states.is_negative, side)) {
            cell->directional_voltage[index] = 0;
        }
        else {
            // Passive conduction
            // TODO: Make this a helper function
            float dir_inv_capacitance = 0.1f;
            cell->directional_conductance[index] += 0.05f; // Temporarily make itself directionally conductive
            float exp_decay = expf(-dir_inv_capacitance * cell->directional_conductance[index]);
            float dvoltage = cell->directional_eq_voltage[index] / cell->directional_conductance[index];
            dvoltage *= 1.0f - exp_decay;
            cell->directional_voltage[index] *= exp_decay;
            cell->directional_voltage[index] += dvoltage;
        }
        cell->directional_eq_voltage[index] = 0.0f;
        cell->directional_conductance[index] = 0.0f;
    }
}

inline void AddTogglingCell() {
    auto material = P::MatRef{"Electric isolator cell"}.GetCopy();
    material.connection_update_fn = TogglingCellConnections;
    material.electric_update_fn = TogglingCellElectric;
    material.base_color = {0.5f, 0.4f, 0.2f, 1.0f};
    P::SetCellNameAndDesc(material, "Toggling cell",
                          "Toggles output between 0V and -1V when powered with 0.25V on the opposite side.");
    P::materials_list[P::n_materials++] = material;
}
