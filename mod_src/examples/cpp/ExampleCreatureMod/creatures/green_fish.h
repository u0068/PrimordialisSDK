#pragma once
#include "plasmid_api.h"
#include "generated/game_functions/creatures.h"

// See Primordialis/data/scripts/creature_funcs.h for all the vanilla C++ brains to use as examples!

// Let's code a brain for our fish!
// Green fish (modeled after the green fish in the old official art) attack pattern is this:
// - Always avoid walls and allies
// - If it doesn't see any enemies, swim around idly
// - If it's damaged, flee
// - If it's healthy, attack:
//     1. Approach the target
//     2. Spin around, spraying poison with Ability 1
//     3. When the target is sufficiently weakened by the poison, charge at it
//        While charging, use Ability 2 to blow the poison out of its way so that it doesn't poison itself.

// Now let's translate this to code!
inline void GreenFishBrain(P::body *self) {
    // First lets use an enum to conveniently represent the behaviour states
    // Enums are just labels for numbers.
    enum STATE {
        IDLE,
        FLEE,
        APPROACH,
        SPRAY_POISON,
        CHARGE_AND_BLOW,
    };

    // First, look around for enemies
    P::body* target = P::aggro(self, 500.0f); // aggro looks for enemies around a creature in a given range

    // Now lets code the basic state logic:
    if (not target) {
        // No target
        self->brain.action = IDLE;
    }
    else if (self->health / self->max_health < 0.5f) {
        // HP under 50%
        self->brain.action = FLEE;
    }
    else {
        // HP over 50%
        // Begin attacking if it isn't already.
        if (self->brain.action < APPROACH) {
            self->brain.action = APPROACH;
        }
    }

    // Now lets implement the behaviours.
    // You could just as well implement them in the ifs and elses above,
    // but in this example I will implement them below to show the step-by-step thinking process,
    // and because I think this way is more organised

    P::avoid_walls(self, 100.0f); // Avoid range is 100 to be safe, we don't want our poison to bounce back at us
    P::avoid_allies(self, 50.0f); // Avoid allies to be polite

    // A switch statement is like a chain of if else statements
    // that compare the same value to different cases
    switch (self->brain.action) {
        default: // Default is idle
        case IDLE: {
            P::passive_ai(self);
        } break;
        case FLEE: {
            P::avoid_body(self, target, 500.0f);
        } break;
        case APPROACH: {

        } break;
        case SPRAY_POISON: {

        } break;
        case CHARGE_AND_BLOW: {

        } break;
    }
}

inline void AddGreenFish() {
    P::creature_t creature{};
    creature.id = P::HashId("Green Fish");
    creature.ai_func = GreenFishBrain;
    creature.filename = (P::mod_path/"bodies/green_fish.bod").string().c_str(); // Get path to our bod and convert
    P::load_body_plan(&creature.plan, creature.filename); // Load the body plan
    P::creature_list[P::n_creatures++] = creature; // Save the creature to the end of the creature list
}