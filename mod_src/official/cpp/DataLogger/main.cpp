#include <include/primordialis_log.h>

#include "plasmid_api.h"
#include "material_printer.h"

// This function will be hooked to the game's init_materials_list function
void OnInitMats() {
    Game::Next<void>(); // Call original function
    if (Game::IsThreadSafe()) // Make sure we are only on the main thread
    {
        PrintMaterialProperties();
    }
    Game::LaneSync(); // Make all other threads wait for us to finish. Not sure if I actually need this.
}

void Game::InitialiseMod() {
    Game::Hook<"init_materials_list">(OnInitMats); // Hook our OnInitMats function to the game's init_materials_list
}
