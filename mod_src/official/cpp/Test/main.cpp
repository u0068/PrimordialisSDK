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

    for (int i = 0; i <= 0xF; i++) {
        Log(i) << std::format("COLOR: {:x}", i);
    }
    P::AttentionToConsole();

    // ELog() << "TEST " << "TEST " << "TEST ";
}
