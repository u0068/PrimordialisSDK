#include <include/primordialis_log.h>

#include "plasmid_api.h"
#include "material_printer.h"
#include "tags_printer.h"

// This function will be hooked to the game's init_materials_list function
void OnInitMats() {
    P::Next<void>(); // Call original function
    if (P::IsThreadSafe()) // Make sure we are only on the main thread
    {
        // PrintMaterialProperties();
        // print_material_tags();
        // P::GamePrint("TEST TEST\n");
    }
    P::LaneSync(); // Make all other threads wait for us to finish. Not sure if I actually need this.
}

void P::InitialiseMod() {
    P::Hook<"init_materials_list">(OnInitMats); // Hook our OnInitMats function to the game's init_materials_list
}
