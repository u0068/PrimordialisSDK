#include "ui.h"

void P::InitialiseMod()
{
    Hook<"init_materials_list">(InitMaterialsHook);

    imgui_api = P::GetModule<ImGuiAPI>("ImGuiAPI");
    P::Log() << "ImGui Context: " << imgui_api->context << '\n';
    imgui_api->RegisterUI(DrawUI);
}