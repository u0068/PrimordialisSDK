#include "plasmid_api.h"
#include "generated/game_functions/creatures.h"  // These are all the functions related to creatures
#include "generated/game_functions/brains.h" // These are all the vanilla creature brains
#include "creatures/green_fish.h"

// This function will be hooked to the game's init_creature_list function
void OnInitCreatures() {
    Game::Next<void>(); // Call original function
    if (not Game::IsThreadSafe()) { // Make sure we are only on the main thread
        return;
    }

    Game::creature_t creature{}; // The variable we use to store the creature we are working on

    // We can use existing brains and bods in modded creatures like this:
    creature.id = Game::HashId("Antenna Bug Clone");
    creature.ai_func = Game::passive_ai;
    creature.filename = "body plans/antenna_bug.bod";
    Game::load_body_plan(&creature.plan, creature.filename); // Load the body plan
    Game::creature_list[Game::n_creatures++] = creature; // Save the creature to the end of the creature list

    // We can also modify vanilla creatures in a very similar way:
    // Lets make the player show damage numbers like a target dummy
    auto ref_to_original = Game::CreatureRef{"start_player"}; // Get the reference to the original
    creature = ref_to_original.GetCopy(); // Copy the original
    creature.show_damage_numbers = true; // Edit our copy
    Game::creature_list[ref_to_original.GetIndex()] = creature; // Overwrite the original
    // See ObjRefTutorial for other methods of using CreatureRef that you might prefer!

    // We can also make creatures with our own bods and brains!

    // If your mod adds a lot of creatures, using the same file for all of them will quickly turn into a mess
    // To organise your creatures, put the code for each creature in their own files
    // Do #include "path/to/your/creature/code" to import the code from that file (see top of this file)
    // Once you have included a file, you can use the code from it:
    AddGreenFish(); // All the green fish code is in creatures/green_fish.h
}

void Game::InitialiseMod() {
    // Hook our OnInitCreatures function to the game's init_creature_list
    Game::Hook<"init_creature_list">(OnInitCreatures);
}
