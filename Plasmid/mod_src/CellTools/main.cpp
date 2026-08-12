#define MOD_NAME "Cell Tools"

#include "plasmid_api.h"
#include "imgui_setup.h"

P::material_t* mats_local{};
P::material_t* mats_original{};
int n_vanilla_mats{};

void DrawCellEditor()
{
    if (P::w->loading_screen) return;

    ImGui::Begin("Cell Editor");
    for (int i = 0; i < P::n_materials; i++)
    {
        P::material_t& mat = P::materials_list[i];
        if (((std::string)mat.name).starts_with("Combo")) continue;
        ImGui::PushID(mat.name);
        if (ImGui::CollapsingHeader(mat.name))
        {
            ImGui::PushStyleVarY(ImGuiStyleVar_ItemSpacing, 1); // Tighten spacing
            float speed = 0.005f;
            if (ImGui::TreeNode("Biomass"))
            {
                ImGui::DragFloat("base_cost", &mat.base_cost, speed);
                ImGui::DragFloat("random_cost", &mat.random_cost, speed);
                ImGui::DragFloat("genome_size", &mat.genome_size, speed);
                ImGui::DragFloat("growth_rate", &mat.growth_rate, speed);
                ImGui::DragFloat("max_health", &mat.max_health, speed);
                ImGui::DragFloat("transfer_rate", &mat.transfer_rate, speed);
                ImGui::DragFloat("regen", &mat.regen, speed);

                ImGui::TreePop();
            }
            if (ImGui::TreeNode("Physics"))
            {
                ImGui::DragFloat("density", &mat.density, speed);
                ImGui::DragFloat("max_radial_force", &mat.max_radial_force, speed);
                ImGui::DragFloat("max_angular_force", &mat.max_angular_force, speed);
                ImGui::DragFloat("radial_compliance", &mat.radial_compliance, speed);
                ImGui::DragFloat("angular_compliance", &mat.angular_compliance, speed);
                ImGui::DragFloat("plasticity", &mat.plasticity, speed);
                ImGui::DragFloat("friction", &mat.friction, speed);
                ImGui::DragFloat("restitution", &mat.restitution, speed);
                ImGui::DragFloat("drag", &mat.drag, speed);
                ImGui::DragFloat("tangent_drag", &mat.tangent_drag, speed);
                ImGui::DragFloat("movement_force", &mat.movement_force, speed);
                ImGui::CheckboxFlags("is_hard", &mat.flags, 1<<10);

                ImGui::TreePop();
            }
            if (ImGui::TreeNode("Contact"))
            {
                ImGui::DragFloat("sharpness", &mat.sharpness, speed);
                ImGui::DragFloat("leeching", &mat.leeching, speed);
                ImGui::DragFloat("hardness", &mat.hardness, speed);

                ImGui::TreePop();
            }
            if (ImGui::TreeNode("Electrical"))
            {
                ImGui::DragFloat("conductivity", &mat.conductivity, speed);
                ImGui::DragFloat("leak_conductivity", &mat.leak_conductivity, speed);
                ImGui::DragFloat("capacitance", &mat.capacitance, speed);
                ImGui::DragFloat("inv_capacitance", &mat.inv_capacitance, speed);
                ImGui::DragFloat("directional_conductivity", &mat.directional_conductivity, speed);
                ImGui::DragFloat("heat_conductivity", &mat.heat_conductivity, speed);
                ImGui::DragFloat("leak_heat_conductivity", &mat.leak_heat_conductivity, speed);
                ImGui::DragFloat("heat_capacity", &mat.heat_capacity, speed);
                ImGui::DragFloat("inv_heat_capacity", &mat.inv_heat_capacity, speed);

                ImGui::TreePop();
            }
            if (ImGui::TreeNode("Visual"))
            {
                ImGui::ColorEdit4("base_color", mat.base_color.data, ImGuiColorEditFlags_Float);
                ImGui::DragFloat("light_radius", &mat.light_radius, speed);
                ImGui::DragFloat("light_intensity", &mat.light_intensity, speed);
                ImGui::ColorEdit3("emission", mat.emission.data, ImGuiColorEditFlags_Float);
                ImGui::SliderInt("texture_type", &mat.texture_type, 0, 4);
                P::int_2 uv = {(int)(mat.uv.x*32+0.5), (int)(mat.uv.y*32+0.5)};
                ImGui::DragInt2("uv", uv.data, 0.1);
                mat.uv = {(float)(uv.x-0.5)/32.f, (float)(uv.y-0.5)/32.f};

                ImGui::TreePop();
            }
            if (ImGui::TreeNode("Flags"))
            {
                if (ImGui::BeginTable("Flags Table", 3))
                {
                    ImGui::TableNextRow();
                    ImGui::TableNextColumn();
                    ImGui::CheckboxFlags("attach_to_cells", &mat.flags, 1<<0);
                    ImGui::TableNextColumn();
                    ImGui::CheckboxFlags("attach_to_walls", &mat.flags, 1<<1);
                    ImGui::TableNextColumn();
                    ImGui::CheckboxFlags("poison_immune", &mat.flags, 1<<2);
                    ImGui::TableNextRow();
                    ImGui::TableNextColumn();
                    ImGui::CheckboxFlags("no_electric_growth", &mat.flags, 1<<3);
                    ImGui::TableNextColumn();
                    ImGui::CheckboxFlags("penetrate_walls", &mat.flags, 1<<4);
                    ImGui::TableNextColumn();
                    ImGui::CheckboxFlags("self_touching", &mat.flags, 1<<5);
                    ImGui::TableNextRow();
                    ImGui::TableNextColumn();
                    ImGui::CheckboxFlags("is_cancer", &mat.flags, 1<<6);
                    ImGui::TableNextColumn();
                    ImGui::CheckboxFlags("is_directional", &mat.flags, 1<<7);
                    ImGui::TableNextColumn();
                    ImGui::CheckboxFlags("show_adjacency", &mat.flags, 1<<8);
                    ImGui::TableNextRow();
                    ImGui::TableNextColumn();
                    ImGui::CheckboxFlags("show_direction", &mat.flags, 1<<9);
                    ImGui::TableNextColumn();
                    ImGui::CheckboxFlags("play_note", &mat.flags, 1<<11);
                    ImGui::TableNextColumn();
                    ImGui::CheckboxFlags("no_recolor", &mat.flags, 1<<12);
                    ImGui::EndTable();
                }

                ImGui::TreePop();
            }

            ImGui::PopStyleVar();
        }
        ImGui::PopID();
    }

    ImGui::End();
}

bool show_demo_window = true;
void DrawUI()
{
    // if (show_demo_window)
    //     ImGui::ShowDemoWindow(&show_demo_window);

    DrawCellEditor();
}

void InitMaterialsHook()
{
    Next<void>();
    n_vanilla_mats = P::n_materials;
    // if (!P::IsThreadSafe())
        // return;

    // if (!mats_local)
    // {
    //     mats_local = P::materials_list;
    //     mats_original = P::materials_list;
    // }
    // else
    //     P::materials_list = mats_local;
}

void P::InitialiseMod()
{
    Log("Hello World!\n");
    Hook<"init_materials_list">(InitMaterialsHook);
    do_imgui_hooks();
}