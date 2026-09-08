#include "plasmid_api.h"

// For organisation, all the cells were put into separate files
#include "stiff_cell.h"
#include "aerogel_cell.h"
#include "wall_detector.h"
#include "damage_detector.h"
#include "ang_vel_meter.h"
#include "piezo_cell.h"

// This function will be hooked to the game's init_materials_list function
void OnInitMats()
{
    Next<void>(); // Call original function
    P::LaneSync(); // Wait until all threads have finished their job
    if (not P::IsThreadSafe()) // Make sure we are only on the main thread
        return;

    // Add cells using their respective functions
    AddStiffCell();
    AddAeroGelCell();
    AddWallDetector();
    AddDamageDetector();
    AddAngVelMeter();
    AddPiezoCell();
}

void P::InitialiseMod()
{
    Hook<"init_materials_list">(OnInitMats); // Hook our OnInitMats function to the game's init_materials_list
}