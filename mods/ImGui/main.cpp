
#include "plasmid_api.h"
#include "imgui_setup.h"

void DrawUI()
{
    if (show_demo_window)
        ImGui::ShowDemoWindow(&show_demo_window);

    DrawMaterialsEditor();
}

void P::InitialiseMod()
{
    mod_name = "Cell Tools";
    do_imgui_hooks();
}