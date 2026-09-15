#include "ui/ui.h"

void P::InitialiseMod() {
    P::Hook<"init_materials_list">(InitMaterialsHook);
    P::Hook<"init_biome_types">(InitBiomeTypesHook);
    P::Hook<"draw_walls">(DrawWallsHook);

    imgui_api = P::GetModule<ImGuiAPI>("ImGuiAPI");
    imgui_api->RegisterUI(DrawUI);
}