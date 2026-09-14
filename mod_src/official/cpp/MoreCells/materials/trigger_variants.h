#pragma once
#include <generated/game_functions/creatures.h>
#include "plasmid_api.h"

void NegativeTrigger(P::cell *cell) {
    auto body = P::get_living_body(cell->body_id);
    if (body->brain.abilities[0]) {
        PowerCell(cell, -1.0f);
    }
}

void InvertedTrigger(P::cell *cell) {
    auto body = P::get_living_body(cell->body_id);
    if (not body->brain.abilities[0]) {
        PowerCell(cell, 1.0f);
    }
}

inline void AddTriggerVariants() {
    P::material_t material{};

    material = P::materials_list[P::CellRef{"Ability trigger cell 1"}.GetIndex()];
    material.electric_update_fn = NegativeTrigger;
    material.base_color = {0.25f, 1.0f, 1.0f, 1.0f}; // Cyan
    P::SetCellNameAndDesc(material, "Negative ability trigger cell", "Produces -1V when ability trigger is pressed.");
    P::materials_list[P::n_materials++] = material;

    material = P::materials_list[P::CellRef{"Ability trigger cell 1"}.GetIndex()];
    material.electric_update_fn = InvertedTrigger;
    material.base_color = {1.0f, 0.25f, 1.0f, 1.0f}; // Blurple
    P::SetCellNameAndDesc(material, "Inverted ability trigger cell",
                          "Produces 1V when ability trigger not is pressed.");
    P::materials_list[P::n_materials++] = material;
}
