#pragma once
#pragma once
#include "plasmid_api.h"
#include "generated/game_functions/creatures.h"
#include "generated/game_functions/math.h"
#include <cmath>

// This is the seeker cell code with an adjustable force
inline void SeekWithForce(P::cell* cell, const float force_coefficient) {
    P::real_2 force{};

    const int body_id = cell->body_id;
    P::body *body = P::get_living_body(body_id);
    float grab_weight = body->brain.grab_weight;
    if (grab_weight > 0.0f or cell->shock > 0.5f) {
        float randomness = 1.0f;
        if (P::GetMutationCount(body, P::mut_chain_lightning_index) == 0) {
            randomness = cell->shock * randomness;
        }
        randomness = std::ranges::clamp(randomness, 0.0f, 1.0f);
        const P::real_2 random_jitter = P::rand_normal_2((uint*)TlsGetValue(P::tls_index) + 0x68);
        if (grab_weight <= 0.0f) { // Shocked, jitter randomly
            force.x = cell->x + randomness * 1000.0f * random_jitter.x;
            force.y = cell->y + randomness * 1000.0f * random_jitter.y;
        }
        else {
            // Force towards target from the cell
            const P::real_2 target = body->brain.grab_target;
            force.x = target.x - cell->x;
            force.y = target.y - cell->y;
            // Interpolate with randomness
            force.x = std::lerp(force.x, random_jitter.x * 1000.0f, randomness);
            force.y = std::lerp(force.y, random_jitter.y * 1000.0f, randomness);
        }
        // Normalise the force if it's too big
        float force_mag_sq = force.x * force.x + force.y * force.y;
        if (force_mag_sq > 16.0f) {
            const float force_inv_mag = 1.0f / sqrt(force_mag_sq);
            force.x *= force_inv_mag * 16.0f;
            force.y *= force_inv_mag * 16.0f;
        }
        float force_multiplier = force_coefficient * 0.04f;
        force_multiplier *= cell->frozen_multiplier * body->brain.grab_dir;
        force.x *= force_multiplier;
        force.y *= force_multiplier;
        cell->x_dot += force.x;
        cell->y_dot += force.y;
        // Cell functions run 4 times per tick per cell so they need to be optimised
        // Here im optimising by using a reference (&) instead of making a copy and then overwriting.
        P::real_2& body_force = P::GetExtraFields(cell)->global_body_force;
        body_force.x -= force.x * cell->mass;
        body_force.y -= force.y * cell->mass;
    }
}

inline void HiderCell(P::cell *cell) {
    SeekWithForce(cell, -1.0f);
}

inline void ElectricSeekerCell(P::cell *cell) {
    SeekWithForce(cell, cell->voltage);
}

inline void AddSeekerVariants() {
    P::material_t material{};

    material = P::MatRef{"Seeker cell"}.GetCopy();
    material.next_variant = P::MatRef{"Seeker cell"}.GetIndex(); // Cycle to original seeker cell
    material.force_update_fn = HiderCell;
    material.base_color = {0.0f, 1.0f, 0.2f, 1.0f}; // Green
    P::SetCellNameAndDesc(material, "Hider cell",
                          "Hides when seek is pressed and vice versa.");
    P::materials_list[P::n_materials++] = material;

    material = P::MatRef{"Seeker cell"}.GetCopy();
    material.next_variant = P::MatRef{"Hider cell"}.GetIndex(); // Cycle to hider cell
    material.force_update_fn = ElectricSeekerCell;
    material.base_color = {1.0f, 0.0f, 0.2f, 1.0f}; // Blue
    // We also want to make this conductive, so lets copy conductive cell's electrical properties
    const P::material_t conductive = P::MatRef {"Conductive cell"}.GetCopy();
    material.conductivity = conductive.conductivity;
    material.leak_conductivity = conductive.leak_conductivity;
    material.capacitance = conductive.capacitance;
    material.inv_capacitance = conductive.inv_capacitance;
    P::SetCellNameAndDesc(material, "Electric seeker cell",
                          "Seeks with force proportional to voltage.");
    P::materials_list[P::n_materials++] = material;

    // Make seeker cycle to electric seeker
    P::MatRef{"Seeker cell"}.GetPointer()->next_variant = P::MatRef{"Electric seeker cell"}.GetIndex();
}
