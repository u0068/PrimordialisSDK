#pragma once
#include "plasmid_api.h"
#include "imgui_interface.h"
#include "material_editor.h"
#include "biome_type_editor.h"

inline ImGuiAPI* imgui_api;

// Set this to true or use https://pthom.github.io/imgui_explorer/ for reference!
inline bool show_demo_window = false;

inline void DrawUI() {
    ImGui::SetCurrentContext(imgui_api->context);

    // P::Log() << "ImGui Context: " << imgui_api->context << '\n';

    if (show_demo_window)
        ImGui::ShowDemoWindow(&show_demo_window);

    ImGuiIO& io = ImGui::GetIO();
    io.ConfigColorEditFlags =
            ImGuiExtraColorEditFlags_PrimordialisStyle | ImGuiExtraColorEditFlags_AllInputs |
            ImGuiColorEditFlags_DisplayRGB;

    DrawMaterialsEditor();
    DrawBiomeTypesEditor();
}
