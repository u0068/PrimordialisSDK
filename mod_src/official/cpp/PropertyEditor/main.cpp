#include "ui/ui.h"

void Game::InitialiseMod() {
    Game::Hook<"init_materials_list">(InitMaterialsHook);
    Game::Hook<"init_biome_types">(InitBiomeTypesHook);
    Game::Hook<"draw_walls">(DrawWallsHook);

    imgui_api = Game::GetModule<ImGuiAPI>("ImGuiAPI");
    imgui_api->RegisterUI(DrawUI);
}
