#include "plasmid_api.h"

// For organisation, all the cells were put into separate files
#include "stiff_cell.h"
#include "aerogel_cell.h"
#include "wall_detector.h"
#include "damage_detector.h"
#include "ang_vel_meter.h"
#include "piezo_cell.h"
#include "fat_cell.h"
#include "pin_cell.h"
#include "trigger_variants.h"
#include "toggling_cell.h"
#include "seeker_variants.h"

// This function will be hooked to the game's init_materials_list function
void OnInitMats() {
    P::Next<void>(); // Call original function
    if (P::IsThreadSafe()) // Make sure we are only on the main thread
    {
        // Add cells using their respective functions
        AddStiffCell();
        AddAeroGelCell();
        AddWallDetector();
        AddDamageDetector();
        AddAngVelMeter();
        AddPiezoCell();
        AddFatCell();
        AddPinCell();
        //AddTriggerVariants(); // I don't like them, so I turned them off
        AddTogglingCell();
        AddSeekerVariants();
    }
    P::LaneSync(); // Make all other threads wait for us to finish.
}

void P::InitialiseMod() {
    P::Hook<"init_materials_list">(OnInitMats); // Hook our OnInitMats function to the game's init_materials_list
}
