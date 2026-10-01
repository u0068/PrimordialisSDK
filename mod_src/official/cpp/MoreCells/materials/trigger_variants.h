#pragma once
#include <generated/game_functions/creatures.h>
#include "plasmid_api.h"

void NegativeTrigger1(Game::cell* cell) {
    auto body = Game::get_living_body(cell->body_id);
    if (body->brain.abilities[0]) {
        PowerCell(cell, -1.0f);
    }
}

void NegativeTrigger2(Game::cell* cell) {
    auto body = Game::get_living_body(cell->body_id);
    if (body->brain.abilities[1]) {
        PowerCell(cell, -1.0f);
    }
}

void NegativeTrigger3(Game::cell* cell) {
    auto body = Game::get_living_body(cell->body_id);
    if (body->brain.abilities[2]) {
        PowerCell(cell, -1.0f);
    }
}

void InvertedTrigger1(Game::cell* cell) {
    auto body = Game::get_living_body(cell->body_id);
    if (not body->brain.abilities[0]) {
        PowerCell(cell, 1.0f);
    }
}

void InvertedTrigger2(Game::cell* cell) {
    auto body = Game::get_living_body(cell->body_id);
    if (not body->brain.abilities[1]) {
        PowerCell(cell, 1.0f);
    }
}

void InvertedTrigger3(Game::cell* cell) {
    auto body = Game::get_living_body(cell->body_id);
    if (not body->brain.abilities[2]) {
        PowerCell(cell, 1.0f);
    }
}

inline void AddTriggerVariants() {
    Game::material_t material{};

    material = Game::MatRef{"Ability trigger cell 1"}.GetCopy();
    // We don't do material.next_variant here
    // because we can't reference a material that doesn't exist yet, so we will do it afterward
    material.electric_update_fn = NegativeTrigger1;
    material.base_color = {1.00f, 0.25f, 1.0f, 1.0f}; // Pink
    Game::SetCellNameAndDesc(material, "Negative trigger cell 1",
                          "Produces -1V when ability trigger is pressed.");
    Game::materials_list[Game::n_materials++] = material;

    material = Game::MatRef{"Ability trigger cell 1"}.GetCopy();
    material.next_variant = Game::MatRef{"Negative trigger cell 1"}.GetIndex();
    material.electric_update_fn = NegativeTrigger2;
    material.drop_weight = 0.0f;
    material.base_color = {0.25f, 1.0f, 1.0f, 1.0f}; // Cyan
    Game::SetCellNameAndDesc(material, "Negative trigger cell 2",
                          "Produces -1V when ability trigger is pressed.");
    Game::materials_list[Game::n_materials++] = material;

    material = Game::MatRef{"Ability trigger cell 1"}.GetCopy();
    material.next_variant = Game::MatRef{"Negative trigger cell 2"}.GetIndex();
    material.electric_update_fn = NegativeTrigger3;
    material.drop_weight = 0.0f;
    material.base_color = {1.0f, 1.0f, 0.25f, 1.0f}; // Yellow
    Game::SetCellNameAndDesc(material, "Negative trigger cell 3",
                          "Produces -1V when ability trigger is pressed.");
    Game::materials_list[Game::n_materials++] = material;

    // Now Negative trigger cell 3 exists so we can reference it to use as Negative trigger cell 1's next_variant
    Game::MatRef{"Negative trigger cell 1"}.GetPointer()->next_variant =
            Game::MatRef{"Negative trigger cell 3"}.GetIndex();


    material = Game::MatRef{"Ability trigger cell 1"}.GetCopy();
    material.electric_update_fn = InvertedTrigger1;
    material.base_color = {0.3f, 0.0f, 0.0f, 1.0f}; // Dark red
    Game::SetCellNameAndDesc(material, "Inverted trigger cell 1",
                          "Produces 1V when ability trigger not is pressed.");
    Game::materials_list[Game::n_materials++] = material;

    material = Game::MatRef{"Ability trigger cell 1"}.GetCopy();
    material.next_variant = Game::MatRef{"Inverted trigger cell 1"}.GetIndex();
    material.electric_update_fn = InvertedTrigger2;
    material.drop_weight = 0.0f;
    material.base_color = {0.0f, 0.3f, 0.0f, 1.0f}; // Dark green
    Game::SetCellNameAndDesc(material, "Inverted trigger cell 2",
                          "Produces 1V when ability trigger not is pressed.");
    Game::materials_list[Game::n_materials++] = material;

    material = Game::MatRef{"Ability trigger cell 1"}.GetCopy();
    material.next_variant = Game::MatRef{"Inverted trigger cell 2"}.GetIndex();
    material.electric_update_fn = InvertedTrigger3;
    material.drop_weight = 0.0f;
    material.base_color = {0.0f, 0.0f, 0.3f, 1.0f}; // Dark blue
    Game::SetCellNameAndDesc(material, "Inverted trigger cell 3",
                          "Produces 1V when ability trigger not is pressed.");
    Game::materials_list[Game::n_materials++] = material;

    Game::MatRef{"Inverted trigger cell 1"}.GetPointer()->next_variant =
            Game::MatRef{"Inverted trigger cell 3"}.GetIndex();
}
