#include <format>

#include "plasmid_api.h"
#include "generated/game_functions/cells.h"
#include "generated/game_functions/creatures.h"

void OnInitMats() {
    Game::Next<void>();
    if (not Game::IsThreadSafe()) {
        return;
    }

}

void Game::InitialiseMod() {
    // P::Hook<"init_materials_list">(OnInitMats);

    for (int i = 0; i <= 0xF; i++) {
        Log(i) << std::format("COLOR: {:x}", i);
    }
    Game::AttentionToConsole();

    // ELog() << "TEST " << "TEST " << "TEST ";
}
