#include "plasmid_api.h"
#include "generated/game_functions/cells.h"

void acid_no_color_change(Game::cell* cell) {
    cell_acid(cell); // Call original acid function

    // Modify the acid to set its final color to its initial color with 0 alpha
    int n_acid_per_tick = 5; // The acid cell produces 5 particles per tick
    for (int i = 0; i < n_acid_per_tick; i++) {
        int n = Game::w->n_acid_particles - n_acid_per_tick + i; // The index of the particle that was just produced
        auto new_color = Game::w->acid_particles[n / 16].color_initial[n % 16]; // Get the initial color
        new_color.w = 0.0f; // Set alpha to 0 (xyzw correspond to rgba channels)
        Game::w->acid_particles[n / 16].color_final[n % 16] = new_color; // Overwrite the final color with our new color
    }
}

// This function will be hooked to the game's init_materials_list function
void OnInitMats() {
    Game::Next<void>(); // Call original function
    if (not Game::IsThreadSafe()) // Make sure we are only on the main thread
        return;

    Game::material_t* mats = Game::materials_list; // Use "mats" as shorthand for "P::materials_list"
    Game::material_t material{}; // Initialise the material

    material = mats[Game::MatRef{"Acid cell"}.GetIndex()]; // Copy the acid cell material
    material.physics_update_fn = acid_no_color_change;
    // We simply overwrite cell functions like this instead of using the Hook utility
    mats[Game::MatRef{"Acid cell"}.GetIndex()] = material; // Overwrite the acid cell material
}

void Game::InitialiseMod() {
    Hook<"init_materials_list">(OnInitMats); // Hook our OnInitMats function to the game's init_materials_list
}
