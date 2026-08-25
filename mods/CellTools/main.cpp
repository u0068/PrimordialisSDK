#include "imgui_interface.h"
#include <regex>
#include <sstream>

#include "plasmid_api.h"
#include "generated/game_functions/cells.h"

int n_vanilla_mats{};
int copy_from = 1;
bool show_combos = false;
bool show_vanilla = true;
bool reset_on_reload = false;
bool show_cell_editor = true;
bool show_demo_window = false;

union material_u
{
    P::material_t mat;
    byte data[280];
};

P::material_t CopyMaterial(P::material_t mat)
{
    // Idk if this is a good way to unlink char* but it works
    mat.name = (char*)(new std::string(mat.name))->c_str();
    mat.id = P::HashCellId(mat.name);
    return mat;
}

std::string SaveMat(P::material_t& mat)
{
    std::stringstream output;
    output << mat.name << "\n";
    output << "{";
    for (int i = 0; i < 280; i++)
    {
        byte data = material_u{mat}.data[i];
        if (data < 100)
            output << "0";
        if (data < 10)
            output << "0";
        output << std::to_string(data);
        output << ",";
    }
    output << "}\n";
    return output.str();
}

void SaveAllMats()
{
    std::ofstream file("materials.txt");

    if (!file) return;

    file.clear();

    for (int idx = 0; idx < P::n_materials; idx++)
    {
        P::material_t& mat = P::materials_list[idx];
        file << SaveMat(mat);
    }

    file.close();
}

P::material_t LoadMat(std::string& data_string, std::string& name)
{
    material_u mat_data{};
    for (int i = 0; i < 280; i++)
    {
        byte data = std::stoi(data_string.substr(1+i*4, 3));
        mat_data.data[i] = data;
    }
    mat_data.mat.name = (char*)(new std::string(name))->c_str();
    return mat_data.mat;
}

void LoadAllMats()
{
    std::ifstream file("materials.txt");

    if (!file) return;

    file.clear();

    material_u mat_data{};
    int line_num{};
    std::string line{};
    std::string name;
    while (getline(file, line))
    {
        if (line_num % 2 == 0)
        {
            name = line;
        }
        else
        {
            LoadMat(line, name);
            P::materials_list[line_num/2] = mat_data.mat;
        }
        line_num++;
    }

    file.close();
}

void DrawMaterialEditor(int idx, P::material_t &mat)
{
    ImGui::PushID(idx);
    bool open = ImGui::CollapsingHeader("##header");
    ImGui::SameLine();
    ImGui::TextUnformatted(mat.name);
    if (ImGui::BeginPopupContextItem(mat.name))
    {
        ImGui::PushItemFlag(ImGuiItemFlags_LiveEditOnInputText, false);
        if (ImGui::InputText("##name", mat.name, 32, ImGuiInputTextFlags_EnterReturnsTrue))
            mat.id = P::HashCellId(mat.name);
        ImGui::PopItemFlag();
        if (ImGui::Button("Copy to Clipboard"))
        {
            // TO-DO: Make this human-readable and only store the changes
            ImGui::LogToClipboard();
            ImGui::LogText(SaveMat(mat).c_str());
            ImGui::LogFinish();
        }
        if (ImGui::Button("Load from Clipboard"))
        {
            std::string clipboard = ImGui::GetClipboardText();
            size_t pos = clipboard.find('\n');
            if (pos != std::string::npos) {
                std::string name = clipboard.substr(0,pos);
                std::string data_string = clipboard.substr(pos+1, 280*4);
                P::Log() << name;
                P::Log() << data_string;
                mat = LoadMat(data_string, name);
            }
        }
        if (ImGui::Button("Give"))
        {
            P::cell_item cell_item = {idx, {}, false};
            P::create_cell_item(&cell_item);
        }
        ImGui::EndPopup();
    }
    if (open)
    {
        ImGui::PushStyleVarY(ImGuiStyleVar_ItemSpacing, 1); // Tighten spacing
        ImGui::PushItemWidth(220.f);
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
            if(ImGui::DragFloat("capacitance", &mat.capacitance, speed))
                mat.inv_capacitance = 1.f / mat.capacitance;
            if(ImGui::DragFloat("inv_capacitance", &mat.inv_capacitance, speed))
                mat.capacitance = 1.f / mat.inv_capacitance;
            ImGui::DragFloat("directional_conductivity", &mat.directional_conductivity, speed);
            ImGui::DragFloat("heat_conductivity", &mat.heat_conductivity, speed);
            ImGui::DragFloat("leak_heat_conductivity", &mat.leak_heat_conductivity, speed);
            if(ImGui::DragFloat("heat_capacity", &mat.heat_capacity, speed))
                mat.inv_heat_capacity = 1.f / mat.heat_capacity;
            if(ImGui::DragFloat("inv_heat_capacity", &mat.inv_heat_capacity, speed))
                mat.heat_capacity = 1.f / mat.inv_heat_capacity;

            ImGui::TreePop();
        }
        if (ImGui::TreeNode("Visual"))
        {
            ImGui::ColorEdit4("base_color", mat.base_color.data, ImGuiColorEditFlags_Float | ImGuiColorEditFlags_PickerHueWheel);
            ImGui::DragFloat("light_radius", &mat.light_radius, speed);
            ImGui::DragFloat("light_intensity", &mat.light_intensity, speed);
            ImGui::ColorEdit3("emission", mat.emission.data, ImGuiColorEditFlags_Float);
            ImGui::SliderInt("texture_type", &mat.texture_type, 0, 4);
            P::int_2 uv = {(int)(mat.uv.x*32+0.5f), (int)(mat.uv.y*32+0.5f)};
            ImGui::DragInt2("uv", uv.data, 0.1);
            mat.uv = {(float)(uv.x-0.5f)/32.f, (float)(uv.y-0.5f)/32.f};

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
        ImGui::PopItemWidth();
        ImGui::PopStyleVar();
    }
    ImGui::PopID();
}

void DrawMaterialsEditor()
{
    // If this runs during loading screen, the skies will split and woe will be upon us
    if (P::w->loading_screen) return;

    ImGui::Begin("Materials Editor");

    ImGui::Checkbox("Show Combos",  &show_combos); ImGui::SameLine();
    ImGui::Checkbox("Show Vanilla", &show_vanilla); ImGui::SameLine();
    ImGui::Checkbox("Reset on Reload",  &reset_on_reload);
    if (ImGui::Button("Save Materials"))
        SaveAllMats();
    ImGui::SameLine();
    if (ImGui::Button("Load Materials"))
        LoadAllMats();
    if (ImGui::Button("Create New From: "))
        P::materials_list[P::n_materials++] = CopyMaterial(P::materials_list[copy_from]);
    ImGui::SameLine();
    auto combo_preview_value = P::materials_list[copy_from].name;
    if (ImGui::BeginCombo("##copy_from", combo_preview_value, ImGuiComboFlags_WidthFitPreview))
    {
        static ImGuiTextFilter filter;
        if (ImGui::IsWindowAppearing())
        {
            ImGui::SetKeyboardFocusHere();
            filter.Clear();
        }
        ImGui::SetNextItemShortcut(ImGuiMod_Ctrl | ImGuiKey_F);
        filter.Draw("##Filter", -FLT_MIN);

        for (int n = 0; n < P::n_materials; n++)
        {
            const bool is_selected = (copy_from == n);
            if (filter.PassFilter(P::materials_list[n].name))
                if (ImGui::Selectable(P::materials_list[n].name, is_selected))
                    copy_from = n;
        }
        ImGui::EndCombo();
    }
    for (int i = 0; i < P::n_materials; i++)
    {
        P::material_t& mat = P::materials_list[i];
        if (((std::string)mat.name).starts_with("Combo") && !show_combos) continue;
        if (i < n_vanilla_mats && !show_vanilla) continue;
        DrawMaterialEditor(i, mat);
    }

    ImGui::End();
}

void DrawUI()
{
    if (show_demo_window)
        ImGui::ShowDemoWindow(&show_demo_window);

    DrawMaterialsEditor();
}

void InitMaterialsHook()
{
    if (!reset_on_reload and n_vanilla_mats > 0)
        return;
    Next<void>();
    if (!P::IsThreadSafe())
        return;
    if (n_vanilla_mats == 0)
        n_vanilla_mats = P::n_materials;
}

void P::InitialiseMod()
{
    mod_name = "Cell Tools";
    Log() << "Hello World!\n";
    Hook<"init_materials_list">(InitMaterialsHook);

    auto imgui_api = P::GetModule<ImGuiAPI>("ImGuiAPI");
    imgui_api->RegisterUI(DrawUI);
}