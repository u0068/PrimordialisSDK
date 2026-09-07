#include "plasmid_api.h"
#include "generated/game_functions/cells.h" // Get all the cell functions

void acid_no_color_change(P::cell* cell)
{
    cell_acid(cell); // Call original acid function

    // Modify the acid to set its final color to its initial color with 0 alpha
    int n_acid_per_tick = 5; // The acid cell produces 5 particles per tick
    for (int i=0; i<n_acid_per_tick; i++)
    {
        int n = P::w->n_acid_particles - n_acid_per_tick + i; // The index of the particle that was just produced
        auto new_color = P::w->acid_particles[n/16].color_initial[n%16]; // Get the initial color
        new_color.w = 0.0f; // Set alpha to 0 (xyzw correspond to rgba channels)
        P::w->acid_particles[n/16].color_final[n%16] = new_color; // Overwrite the final color with our new color
    }
}

// This function will be hooked to the game's init_materials_list function
void OnInitMats()
{
    Next<void>(); // Call original function
    if (not P::IsThreadSafe()) // Make sure we are only on the main thread
        return;

    P::material_t* mats = P::materials_list; // Use "mats" as shorthand for "P::materials_list"
    P::material_t material{}; // The variable we use to store the material we are working on

    // First, lets make the Acid Cell spew acid that doesn't change color
    material = mats[P::CellRef{"Acid cell"}.GetIndex()]; // Copy the acid cell material
    material.physics_update_fn = acid_no_color_change; // We simply overwrite cell functions like this instead of using the Hook utility
    mats[P::CellRef{"Acid cell"}.GetIndex()] = material; // Overwrite the acid cell material

    // Next, lets make our own cell
    // We want to have a cell that is quite stiff but not entirely rigid.
    material = mats[P::CellRef{"Hard cell"}.GetIndex()]; // Copy the Hard cell material
    material.is_hard = false; // Make it not rigid
    material.base_color = {0.8f, 0.8f, 1.0f, 1.0f}; // Slightly bluish to distinguish it from Hard cell
    P::SetCellNameAndDesc(material, "Stiff Cell", "A stiff cell resistant to spikes and explosions");
    mats[P::n_materials++] = material; // Add our material to the end of the materials list
}

void P::InitialiseMod()
{
    mod_name = "Example Cell Mod";
    Hook<"init_materials_list">(OnInitMats); // Hook our OnInitMats function to the game's init_materials_list
}