#pragma once
#include "plasmid_api.h"
#include "include/biomes.h"
#include "generated/game_functions/world.h"
#include "imgui_extra.h"

inline void DrawBiomeTypeEditor(int idx, P::biome_type& type) {
    ImGui::PushID(idx);
    bool open = ImGui::CollapsingHeader("##header");
    ImGui::SameLine();
    ImGui::TextUnformatted(biome_id{type.id}.string);
    if (ImGui::BeginPopupContextItem(biome_id{type.id}.string)) {
        ImGui::PushItemFlag(ImGuiItemFlags_LiveEditOnInputText, false);
        if (ImGui::InputText("##name", biome_id{type.id}.string, 5, ImGuiInputTextFlags_EnterReturnsTrue))
            ImGui::EndPopup();
    }
    if (open) {
        ImGui::PushStyleVarY(ImGuiStyleVar_ItemSpacing, 1); // Tighten spacing
        ImGui::PushItemWidth(220.f);
        float speed = 0.005f;

        if (ImGui::TreeNode("General")) {
            ImGui::DragFloat("light", &type.light, speed);
            ImGui::SameLine();
            ImGuiExtra::InfoMarker("Ambient light brightness");
            ImGui::ColorEdit3("color", type.color.data);
            ImGui::SameLine();
            ImGuiExtra::InfoMarker("Background color");
            ImGui::Checkbox("safe", (bool *) &type.flags);
            ImGui::SameLine();
            ImGuiExtra::InfoMarker("This is currently the only biome flag");
            ImGui::DragFloat("bumpyness", &type.bumpyness, speed);
            ImGui::SameLine();
            ImGuiExtra::InfoMarker("Fine wall bumpiness");
            ImGui::DragFloat("temperature", &type.temperature, speed);
            ImGui::SameLine();
            ImGuiExtra::InfoMarker("Temperature of the walls");
            ImGui::DragInt("ambient_music_id", &type.ambient_music_id, speed);
            ImGui::DragInt("battle_music_id", &type.battle_music_id, speed);

            ImGui::TreePop();
        }
        if (ImGui::TreeNode("Terrain Generation")) {
            ImGui::DragFloat("noise_amount", &type.noise_amount, speed);
            ImGui::SameLine();
            ImGuiExtra::InfoMarker("Random dithering");
            ImGui::DragFloat("fbm_amount", &type.fbm_amount, speed);
            ImGui::SameLine();
            ImGuiExtra::InfoMarker("Fractal noise amount");
            ImGui::DragFloat("fbm_base_frequency", &type.fbm_base_frequency, speed);
            ImGui::SameLine();
            ImGuiExtra::InfoMarker("1 / noise scale");
            ImGui::DragFloat("fbm_octaves", &type.fbm_octaves, speed);
            ImGui::SameLine();
            ImGuiExtra::InfoMarker("Number of fractal layers, each half the scale of the previous one");
            ImGui::DragFloat("fbm_gain", &type.fbm_gain, speed);
            ImGui::SameLine();
            ImGuiExtra::InfoMarker("Influence multiplier for each subsequent fmb octave");
            ImGui::DragFloat("neighbor_fbm", &type.neighbor_fbm, speed);
            ImGui::SameLine();
            ImGuiExtra::InfoMarker("How much should terrain cells consider their neighbors");
            ImGui::DragFloat("neighbor_amount", &type.neighbor_amount, speed);
            ImGui::SameLine();
            ImGuiExtra::InfoMarker("Bias towards filled terrain cells also having filled neighbors");
            ImGui::DragFloat("base_amount", &type.base_amount, speed);
            ImGui::SameLine();
            ImGuiExtra::InfoMarker("Base emptiness amount");
            ImGui::DragFloat("min_value", &type.min_value, speed);

            ImGui::TreePop();
        }
        if (ImGui::TreeNode("Cell spawning")) {
            ImGui::DragFloat("cell_chance", &type.cell_chance, speed);
            ImGui::SameLine();
            ImGuiExtra::InfoMarker("Chance to spawn a cell pickup");
            ImGui::DragInt("cell_max_neighbors", &type.cell_max_neighbors, speed);
            ImGui::SameLine();
            ImGuiExtra::InfoMarker("Max cells pickups in a clump");
            // TODO: Cell pools

            ImGui::TreePop();
        }

        ImGui::PopItemWidth();
        ImGui::PopStyleVar();
    }
    ImGui::PopID();
}

inline bool has_just_regened_map = false;
inline bool was_in_map_mode = true;

inline void DrawBiomeTypesEditor() {
    // If this runs during loading screen, the skies will split and woe will be upon us
    if (P::w->loading_screen) return;

    // Restore zoom state after regening map
    if (has_just_regened_map) {
        has_just_regened_map = false;
        P::w->map_mode = was_in_map_mode;
        P::w->camera_dist = P::w->map_camera_dist;
    }

    ImGui::Begin("Biome Types Editor");

    if (ImGui::Button("Regenerate map")) {
        P::w->starting_game = true;
        P::w->loading_screen = false;
        P::w->done_loading = false;
        P::w->fade_in = 1.0f;
        P::w->start_trans = 1.0f;
        P::w->starting_new_run = false;
        P::w->starting_sandbox = true;
        P::w->sandbox_start_params.loading = false;

        has_just_regened_map = true;
        was_in_map_mode = P::w->map_mode;

        ImGui::End();
        return;
    }
    ImGui::SameLine();
    ImGui::Checkbox("Remove view radius", &remove_view_limit);
    ImGui::SameLine();
    ImGui::Checkbox("Keep seed", &P::w->sandbox_start_params.keep_seed);
    // ImGui::SameLine();
    // ImGui::Checkbox("Reset on Reload", &reset_biomes_on_reload);
    static ImGuiTextFilter filter;
    if (ImGui::IsWindowAppearing()) {
        ImGui::SetKeyboardFocusHere();
        filter.Clear();
    }
    ImGui::SetNextItemShortcut(ImGuiMod_Ctrl | ImGuiKey_F);
    filter.Draw("##Filter");
    for (int i = 0; i < P::w->n_biome_types; i++) {
        P::biome_type& type = P::w->biome_types[i];
        if (not filter.PassFilter(biome_id{type.id}.string)) continue;
        DrawBiomeTypeEditor(i, type);
    }

    ImGui::End();
}
