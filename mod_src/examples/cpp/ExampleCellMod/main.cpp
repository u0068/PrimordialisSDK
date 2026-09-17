#include "plasmid_api.h"
#include "generated/game_functions/cells.h" // Get all the cell functions
#include "aerogel_cell.h" // Include cells from other files

void acid_no_color_change(P::cell *cell) {
    P::cell_acid(cell); // Call original acid function

    // Modify the acid to set its final color to its initial color with 0 alpha
    int n_acid_per_tick = 5; // The acid cell produces 5 particles per tick
    for (int i = 0; i < n_acid_per_tick; i++) {
        int n = P::w->n_acid_particles - n_acid_per_tick + i; // The index of the particle that was just produced
        auto new_color = P::w->acid_particles[n / 16].color_initial[n % 16]; // Get the initial color
        new_color.w = 0.0f; // Set opacity to 0 (xyzw correspond to rgba channels)
        P::w->acid_particles[n / 16].color_final[n % 16] = new_color; // Overwrite the final color with our new color
    }
}

// This function will be hooked to the game's init_materials_list function
// A hook is our version of a function, which replaces the game's version
void OnInitMats() {
    // First, we want to initialise all the game materials, so we call the original function using P::Next
    P::Next<void>(); // The thing inside the <> must match the function's return type
    // DO NOT call the original function like this: P::init_materials_list()
    // Because the call to the original is replaced with the call to our function,
    // so it will get stuck in an infinite loop of calling itself.
    if (not P::IsThreadSafe()) { // Make sure we are only on the main thread
        return;
    }

    P::material_t material{}; // The variable we use to store the material we are working on

    // First, lets make the Acid Cell spew acid that doesn't change color
    material = P::MatRef{"Acid cell"}.GetCopy(); // Copy the acid cell material
    // Make it use our function.
    material.physics_update_fn = acid_no_color_change;
    // Using P::Hook on cell functions could also work, but it's better to use the method shown here.

    P::materials_list[P::MatRef{"Acid cell"}.GetIndex()] = material; // Overwrite the acid cell material
    // You could also edit existing cells by writing directly to the original's fields,
    // rather than replacing them with an edited copy of themselves.

    // Next, lets make our own cell!
    // We want to have a cell that is quite stiff but not entirely rigid.
    material = P::MatRef{"Hard cell"}.GetCopy(); // Copy the Hard cell material to use as the base
    // There are lots of different material properties we can tweak
    // Use the official Cell Tools mod to tweak material properties in-game
    // Any properties that we don't set will use the properties of the base material that we copied from
    material.is_hard = false; // Make it not rigid
    // Colors are in the format: {red, green, blue, opacity}, where each color channel is a float from 0.0f to 1.0f
    // Going outside that range will work to make super vibrant or negative colors, but may cause rendering weirdness
    material.base_color = {0.8f, 0.8f, 1.0f, 1.0f}; // Slightly bluish to distinguish it from Hard cell
    SetCellNameAndDesc(material, "Stiff Cell", "A stiff cell resistant to spikes and explosions");
    P::materials_list[P::n_materials++] = material; // Add our material to the end of the materials list

    // If your mod adds a lot of materials, using the same file for all of them will quickly turn into a mess
    // To organise your materials, put your material definitions in their own files
    // Do #include "file_path" to import the code from that file (see top of this file)
    // Once you have included a file, you can use the code from it:
    AddAeroGelCell(); // Add Aero-gel cell, defined in "materials/aerogel_cell.h"
}

void P::InitialiseMod() {
    // Hooks are used to add our code to the game's functions
    // Hook our OnInitMats function to the game's init_materials_list
    P::Hook<"init_materials_list">(OnInitMats);
}
