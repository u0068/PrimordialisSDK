#include "ui.h"

void P::InitialiseMod()
{
    mod_name = "Cell Tools";
    Hook<"init_materials_list">(InitMaterialsHook);

    imgui_api = P::GetModule<ImGuiAPI>("ImGuiAPI");
    P::Log() << "Init Context: " << imgui_api->context << '\n';
    imgui_api->RegisterUI(DrawUI);
}