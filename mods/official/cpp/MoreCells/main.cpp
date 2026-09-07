#include "plasmid_api.h"

// This function will be hooked to the game's init_materials_list function
void OnInitMats()
{
    Next<void>(); // Call original function
    if (not P::IsThreadSafe()) // Make sure we are only on the main thread
        return;

    P::material_t* mats = P::materials_list; // Use "mats" as shorthand for "P::materials_list"
    P::material_t material{}; // The variable we use to store the material we are working on

    material = mats[P::CellRef{"Hard cell"}.GetIndex()];
    material.is_hard = false;
    material.base_color = {0.8f, 0.8f, 1.0f, 1.0f}; // Slightly bluish to distinguish it from Hard cell
    SetCellNameAndDesc(material, "Stiff Cell", "A stiff cell resistant to spikes and explosions");
    mats[P::n_materials++] = material;

    material = mats[P::CellRef{"Lightweight cell"}.GetIndex()];
    material.density = 0.1f;
    material.base_cost = 2.0f;
    material.max_health = 0.1f;
    material.movement_force *= 0.5f;
    material.growth_rate *= 0.5f;
    material.transfer_rate *= 0.05f;
    material.regen *= 0.5f;
    material.max_angular_force *= 0.5f;
    material.max_radial_force *= 0.5f;
    material.radial_compliance *= 0.1f;
    material.angular_compliance *= 0.1f;
    material.plasticity = 0.01f;
    material.restitution = 0.9f;
    material.heat_conductivity = 0.0f;
    material.heat_capacity = 10.0f;
    material.inv_heat_capacity = 1.0f / material.heat_capacity;
    material.base_color = {0.8f, 0.8f, 1.0f, 0.5f};
    SetCellNameAndDesc(material, "Aero-gel Cell", "A very light, insulating and brittle cell");
    mats[P::n_materials++] = material;
}

void P::InitialiseMod()
{
    mod_name = "Example Cell Mod";
    Hook<"init_materials_list">(OnInitMats); // Hook our OnInitMats function to the game's init_materials_list
}