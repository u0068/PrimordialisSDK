#define MOD_NAME "Cell Tools"

#include "plasmid_api.h"
#include "imgui_setup.h"

P::material_t* mats_local{};

void DrawCellEditor()
{
    ImGui::Begin("Cell Editor");

    if (ImGui::TreeNode("Header"))
    {
        ImGui::Text("IsItemHovered: %d", ImGui::IsItemHovered());
        for (int i = 0; i < 5; i++)
            ImGui::Text("Some content %d", i);
        ImGui::TreePop();
    }

    ImGui::End();
}

void DrawUI()
{
    if (show_demo_window)
        ImGui::ShowDemoWindow(&show_demo_window);

    // DrawCellEditor();
}

void InitMaterialsHook()
{
    Next<void>();
    if (!P::IsThreadSafe())
        return;

    if (!mats_local)
        mats_local = P::materials_list;
    else
        P::materials_list = mats_local;
}

void P::InitialiseMod()
{
    Log("Hello World!\n");
    Hook<"init_materials_list">(InitMaterialsHook);
    do_imgui_hooks();
}