#include "plasmid_api.h"
#include "stiff_cell.h"
#include "aerogel_cell.h"
#include "wall_detector.h"

// This function will be hooked to the game's init_materials_list function
void OnInitMats()
{
    Next<void>(); // Call original function
    if (not P::IsThreadSafe()) // Make sure we are only on the main thread
        return;

    // For organisation, all the cells were put into separate files
    AddStiffCell();
    AddAeroGelCell();
    AddWallDetector();
}

void P::InitialiseMod()
{
    mod_name = "More Cells";
    Hook<"init_materials_list">(OnInitMats); // Hook our OnInitMats function to the game's init_materials_list
}