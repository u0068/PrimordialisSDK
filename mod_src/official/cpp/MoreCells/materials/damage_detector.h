#pragma once
#include "plasmid_api.h"

inline void DamageDetector(P::cell* cell)
{
    // Using low pass filters to eliminate the noise from health transfer

    constexpr float health_alpha = 0.01f;
    constexpr float damage_alpha = 0.01f;
    constexpr float multiplier = 1000.0f;

    const float previous_filtered_health = cell->value;
    const float previous_filtered_damage = cell->value2;

    const float filtered_health =
        previous_filtered_health * (1.0f - health_alpha) +
        cell->health * health_alpha;

    const float damage_rate = previous_filtered_health - filtered_health;

    const float filtered_damage =
        previous_filtered_damage * (1.0f - damage_alpha) +
        damage_rate * damage_alpha;

    cell->value = filtered_health;
    cell->value2 = filtered_damage;
    cell->voltage = filtered_damage * multiplier * cell->voltage_multiplier;
}

inline void AddDamageDetector()
{
    auto material = P::materials_list[P::CellRef{"Health monitor cell"}.GetIndex()];
    material.electric_update_fn = DamageDetector;
    // material.transfer_rate *= 0.5f;
    material.max_health = 5.0f;
    material.base_color = {0.4f, 0.01f, 0.0f, 1.0f}; // Dark reddish
    SetCellNameAndDesc(material, "Damage detector cell", "Creates a voltage when damaged.");
    P::materials_list[P::n_materials++] = material;
}