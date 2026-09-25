#include "plasmid_api.h"

// This tutorial will show all the ways of using ObjRefs such as CreatureRef and MatRef
// We will use CreatureRef in the example, but it will work exactly the same for MatRef

// The purpose of CreatureRef and MatRef is to access existing creatures and materials respectively
// Without having to know their index

void OnInitCreatures() {
    P::Next<void>(); // Call original function
    if (not P::IsThreadSafe()) { // Make sure we are only on the main thread
        return;
    }

    P::creature_t creature{}; // The variable we use to store the creature we are working on

    // Let's say that we want to edit and existing creature, for example the player creature

    // To use CreatureRef, we need to initialise it with some way to identify the creature we want to access
    auto ref_to_original = P::CreatureRef{"start_player"}; // It's easiest to use the creature's bod's name
    // You can also identify it by its string id, numeric id, index, or pointer
    // MatRef can be identified by the material's name rather than bod's name

    // To make a new creature using data from an old creature, we can do this:
    creature = ref_to_original.GetCopy(); // Copy the original
    creature.show_damage_numbers = true; // Edit our copy
    P::creature_list[P::n_creatures++] = creature; // Insert our copy at the end of the creature list

    // In the same way, we can edit the original creature by overwriting the original with our copy
    creature = ref_to_original.GetCopy(); // Copy the original
    creature.show_damage_numbers = true; // Edit our copy
    P::creature_list[ref_to_original.GetIndex()] = creature; // Overwrite original
    // This is the method shown in ExampleCreatureMod because it's so similar to making a new creature
    // And doesn't use any advanced features like pointers or references.

    // However, you can use CreatureRef to do this in other, more concise and more performant ways
    // For example, you can index the creature list to access the original and its fields directly
    P::creature_list[ref_to_original.GetIndex()].show_damage_numbers = true;
    // Or you can use a pointer to do the same
    ref_to_original.GetPointer()->show_damage_numbers = true;
    // Or a reference
    ref_to_original.GetReference().show_damage_numbers = true;
}

void P::InitialiseMod() {
    // Hook our OnInitCreatures function to the game's init_creature_list
    P::Hook<"init_creature_list">(OnInitCreatures);
}
