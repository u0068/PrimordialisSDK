#pragma once
#include <generated/game_functions/creatures.h>
#include "plasmid_api.h"

void NegativeTrigger1(P::cell *cell) {
    auto body = P::get_living_body(cell->body_id);
    if (body->brain.abilities[0]) {
        PowerCell(cell, -1.0f);
    }
}
void NegativeTrigger2(P::cell *cell) {
    auto body = P::get_living_body(cell->body_id);
    if (body->brain.abilities[1]) {
        PowerCell(cell, -1.0f);
    }
}
void NegativeTrigger3(P::cell *cell) {
    auto body = P::get_living_body(cell->body_id);
    if (body->brain.abilities[2]) {
        PowerCell(cell, -1.0f);
    }
}

void InvertedTrigger1(P::cell *cell) {
    auto body = P::get_living_body(cell->body_id);
    if (not body->brain.abilities[0]) {
        PowerCell(cell, 1.0f);
    }
}
void InvertedTrigger2(P::cell *cell) {
    auto body = P::get_living_body(cell->body_id);
    if (not body->brain.abilities[1]) {
        PowerCell(cell, 1.0f);
    }
}
void InvertedTrigger3(P::cell *cell) {
    auto body = P::get_living_body(cell->body_id);
    if (not body->brain.abilities[2]) {
        PowerCell(cell, 1.0f);
    }
}

inline void AddTriggerVariants() {
    P::material_t material{};

    material = P::MatRef{"Ability trigger cell 1"}.GetCopy();
    // We don't do material.next_variant here
    // because we can't reference a material that doesn't exist yet, so we will do it afterward
    material.electric_update_fn = NegativeTrigger1;
    material.base_color = {1.00f, 0.25f, 1.0f, 1.0f}; // Pink
    P::SetCellNameAndDesc(material, "Negative trigger cell 1",
        "Produces -1V when ability trigger is pressed.");
    P::materials_list[P::n_materials++] = material;

    material = P::MatRef{"Ability trigger cell 1"}.GetCopy();
    material.next_variant = P::MatRef{"Negative trigger cell 1"}.GetIndex();
    material.electric_update_fn = NegativeTrigger2;
    material.base_color = {0.25f, 1.0f, 1.0f, 1.0f}; // Cyan
    P::SetCellNameAndDesc(material, "Negative trigger cell 2",
        "Produces -1V when ability trigger is pressed.");
    P::materials_list[P::n_materials++] = material;

    material = P::MatRef{"Ability trigger cell 1"}.GetCopy();
    material.next_variant = P::MatRef{"Negative trigger cell 2"}.GetIndex();
    material.electric_update_fn = NegativeTrigger3;
    material.base_color = {1.0f, 1.0f, 0.25f, 1.0f}; // Yellow
    P::SetCellNameAndDesc(material, "Negative trigger cell 3",
        "Produces -1V when ability trigger is pressed.");
    P::materials_list[P::n_materials++] = material;

    // Now Negative trigger cell 3 exists so we can reference it to use as Negative trigger cell 1's next_variant
    P::MatRef{"Negative trigger cell 1"}.GetPointer()->next_variant =
        P::MatRef{"Negative trigger cell 3"}.GetIndex();


    material = P::MatRef{"Ability trigger cell 1"}.GetCopy();
    material.electric_update_fn = InvertedTrigger1;
    material.base_color = {0.3f, 0.0f, 0.0f, 1.0f}; // Dark red
    P::SetCellNameAndDesc(material, "Inverted trigger cell 1",
                          "Produces 1V when ability trigger not is pressed.");
    P::materials_list[P::n_materials++] = material;

    material = P::MatRef{"Ability trigger cell 1"}.GetCopy();
    material.next_variant = P::MatRef{"Inverted trigger cell 1"}.GetIndex();
    material.electric_update_fn = InvertedTrigger2;
    material.base_color = {0.0f, 0.3f, 0.0f, 1.0f}; // Dark green
    P::SetCellNameAndDesc(material, "Inverted trigger cell 2",
                          "Produces 1V when ability trigger not is pressed.");
    P::materials_list[P::n_materials++] = material;

    material = P::MatRef{"Ability trigger cell 1"}.GetCopy();
    material.next_variant = P::MatRef{"Inverted trigger cell 2"}.GetIndex();
    material.electric_update_fn = InvertedTrigger3;
    material.base_color = {0.0f, 0.0f, 0.3f, 1.0f}; // Dark blue
    P::SetCellNameAndDesc(material, "Inverted trigger cell 3",
                          "Produces 1V when ability trigger not is pressed.");
    P::materials_list[P::n_materials++] = material;

    P::MatRef{"Inverted trigger cell 1"}.GetPointer()->next_variant =
        P::MatRef{"Inverted trigger cell 3"}.GetIndex();
}
