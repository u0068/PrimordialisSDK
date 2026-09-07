#include "plasmid_api.h"
#include "generated/game_functions/creatures.h"

// This function will be hooked to the game's init_materials_list function
void OnInitCreatures()
{
    Next<void>(); // Call original function
    if (not P::IsThreadSafe()) // Make sure we are only on the main thread
        return;

    P::creature_t creature{}; // The variable we use to store the creature we are working on

    memset(P::creature_list + P::n_creatures,0,0x678); // Clear out the memory we wil be using
    creature.id = P::str_to_id("TEST");
    creature.filename = "body plans/target_dummy.bod";
    P::load_body_plan(&creature.plan, (char*)creature.filename); // Load the bodyplan
    P::creature_list[P::n_creatures++] = creature;  // Save the creature
}

void P::InitialiseMod()
{
    mod_name = "Example Creature Mod";
    Hook<"init_creature_list">(OnInitCreatures); // Hook our OnInitMats function to the game's init_materials_list
}