#include "ui.h"
#include <imgui_internal.h>
#include "imgui_helpers.h"


void DrawModList(ModManager &manager)
{
    ImGui::Begin("Mods");

    auto& mods = manager.mods;

    if (ImGui::BeginTable(
        "ModList",
        3,
        ImGuiTableFlags_RowBg |
        ImGuiTableFlags_BordersInnerV |
        ImGuiTableFlags_SizingStretchProp))
    {
        ImGui::TableSetupColumn(
            "Enabled",
            ImGuiTableColumnFlags_WidthFixed,
            20.0f
        );
        ImGui::TableSetupColumn(
            "Mod",
            ImGuiTableColumnFlags_WidthStretch
        );
        ImGui::TableSetupColumn(
            "##Config",
            ImGuiTableColumnFlags_WidthFixed,
            60.0f
            );
        int moveDirection = 0;
        int draggedModIndex = -1;
        for (int i = 0; i < mods.size(); ++i)
        {
            Mod& mod = mods[i];
            ImGui::PushID(mod.name.c_str());
            ImGui::TableNextRow();
            ImGui::TableNextColumn();
            ImGui::Checkbox("##Enabled", &mod.enabled);
            ImGui::TableNextColumn();
            ImGui::Selectable(
                mod.name.c_str(),
                true
                );

            bool isHovered = ImGui::TableGetHoveredRow() == i;
            if (ImGui::IsItemActive())
            {
                if (draggedModIndex == -1)
                    draggedModIndex = i;
                if (!isHovered)
                {
                    moveDirection =
                        ImGui::GetMouseDragDelta(0).y < 0.f ? -1 : 1;
                    int next = i + moveDirection;
                    if (next >= 0 &&
                        next < mods.size())
                    {
                        ImGui::ResetMouseDragDelta();
                    }
                }
            }
            // ImGui::Text("Active: %d", ImGui::IsItemActive());
            // ImGui::Text("Hovered: %d", isHovered);
            // ImGui::Text("Dragged: %d", draggedModIndex == i);
            ImGui::TableNextColumn();
            if (ImGui::Button("Config"))
            {
                // OpenModConfig(mod);
            }
            ImGui::PopID();
        }
        ImGui::EndTable();
        if (moveDirection != 0)
        {
            int next = draggedModIndex + moveDirection;
            if (next >= 0 && next < mods.size())
            {
                std::swap(mods[draggedModIndex], mods[next]);
            }
        }
    }
    ImGui::End();
}

void DrawUI(ModManager &manager)
{
    DrawModList(manager);
}