#include <format>

#include "plasmid_api.h"
#include "generated/game_functions/cells.h"
#include "generated/game_functions/creatures.h"

void OnInitMats() {
    P::Next<void>();
    if (not P::IsThreadSafe()) {
        return;
    }

}

void P::InitialiseMod() {
    // P::Hook<"init_materials_list">(OnInitMats);

    ELog() << "TEST " << "TEST " << "TEST ";
}
