#include "ui.h"
#include <imgui_internal.h>
#include "imgui_helpers.h"
#include "modloader.h"

bool AutoScroll = true;
bool ScrollToBottom = false;
std::vector<std::string> Lines{};

void DrawConsole()
{
    ImGui::Begin("Console");
    // ImGui::TextWrapped(console_log.str().c_str());

    std::string line{};
    while (std::getline(console_log, line))
        Lines.push_back(line);
    console_log.clear();

    if (ImGui::SmallButton("Clear"))    Lines.clear();
    ImGui::SameLine();
    bool copy_to_clipboard = ImGui::SmallButton("Copy");
    //static float t = 0.0f; if (ImGui::GetTime() - t > 0.02f) { t = ImGui::GetTime(); AddLog("Spam %f", t); }

    // Options menu
    if (ImGui::BeginPopup("Options"))
    {
        ImGui::Checkbox("Auto-scroll", &AutoScroll);
        if (ImGui::SmallButton("Scroll to bottom")) ScrollToBottom = true;
        ImGui::EndPopup();
    }
    ImGui::SameLine();
    if (ImGui::SmallButton("Options"))
        ImGui::OpenPopup("Options");

    ImGui::Separator();

    if (ImGui::BeginChild("ScrollingRegion", {0, 0}, ImGuiChildFlags_NavFlattened, ImGuiWindowFlags_HorizontalScrollbar))
    {
        if (ImGui::BeginPopupContextWindow())
        {
            if (ImGui::Selectable("Clear")) Lines.clear();
            ImGui::EndPopup();
        }
        ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(4, 1)); // Tighten spacing
        if (copy_to_clipboard)
            ImGui::LogToClipboard();
        for (auto line : Lines)
        {
            ImVec4 color;
            bool has_color = false;
            if (strstr(line.c_str(), "[ERROR]")) { color = ImVec4(1.0f, 0.4f, 0.4f, 1.0f); has_color = true; }
            else if (strncmp(line.c_str(), "# ", 2) == 0) { color = ImVec4(1.0f, 0.8f, 0.6f, 1.0f); has_color = true; }
            if (has_color)
                ImGui::PushStyleColor(ImGuiCol_Text, color);
            ImGui::TextUnformatted(line.c_str());
            if (has_color)
                ImGui::PopStyleColor();
        }
        if (copy_to_clipboard)
            ImGui::LogFinish();

        // Keep up at the bottom of the scroll region if we were already at the bottom at the beginning of the frame.
        // Using a scrollbar or mouse-wheel will take away from the bottom edge.
        if (ScrollToBottom || (AutoScroll && ImGui::GetScrollY() >= ImGui::GetScrollMaxY()))
            ImGui::SetScrollHereY(1.0f);
        ScrollToBottom = false;

        ImGui::PopStyleVar();
    }
    ImGui::EndChild();
    // ImGui::Separator();

    ImGui::End();
}

void DrawActionBox()
{
    ImGui::Begin("Action Box");

    ImGui::PushStyleColor(ImGuiCol_Button, (ImVec4)ImColor::HSV(0.0f, 0.7f, 0.7f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, (ImVec4)ImColor::HSV(0.0f, 0.8f, 0.8f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, (ImVec4)ImColor::HSV(0.0f, 0.9f, 0.9f));
    ImGuiStyle& style = ImGui::GetStyle();
    if (ImGui::Button("Start Game", {
        (ImGui::GetContentRegionAvail().x - style.ItemSpacing.x)/2,
        ImGui::GetContentRegionAvail().y}))
    {
        ModManager::InjectAll();
    }
    ImGui::PopStyleColor(3);

    ImGui::SameLine();
    if (ImGui::Button("Refresh Mods", ImGui::GetContentRegionAvail()))
    {
        ModManager::RefreshMods();
    }
    ImGui::End();
}

static void HelpMarker(const char* desc)
{
    ImGui::TextDisabled("(?)");
    if (ImGui::BeginItemTooltip())
    {
        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
        ImGui::TextUnformatted(desc);
        ImGui::PopTextWrapPos();
        ImGui::EndTooltip();
    }
}

void DrawModList()
{
    ImGui::Begin("Mods");

    auto& mods = ModManager::mods;

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
            80.0f
            );
        int moveDirection = 0;
        int draggedModIndex = -1;
        for (int i = 0; i < mods.size(); ++i)
        {
            Mod& mod = mods[i];
            ImGui::PushID(mod.name.c_str());
            if (mod.name == "Nucleus")
                ImGui::BeginDisabled();
            ImGui::TableNextRow();
            ImGui::TableNextColumn();
            if (ImGui::Checkbox("##Enabled", &mod.enabled))
                ModManager::SavePilusConfig();
            ImGui::TableNextColumn();
            if (!mod.enabled)
                ImGui::PushStyleColor(ImGuiCol_Text, ImGui::GetStyleColorVec4(ImGuiCol_TextDisabled));
            ImGui::Selectable(
                mod.name.c_str(),
                true
                );
            if (!mod.enabled)
                ImGui::PopStyleColor();

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
            if (mod.name == "Nucleus")
                ImGui::EndDisabled();
            if (mod.config.empty())
                ImGui::BeginDisabled();
            ImGui::TableNextColumn();
            HelpMarker(std::format("Author: {}\n{}", mod.author, mod.description).c_str());
            ImGui::SameLine();
            if (ImGui::Button("Config"))
            {
                // OpenModConfig(mod);
            }
            if (mod.config.empty())
                ImGui::EndDisabled();
            ImGui::PopID();
        }
        ImGui::EndTable();
        if (moveDirection != 0)
        {
            int next = draggedModIndex + moveDirection;
            if (next >= 1 && next < mods.size())
            {
                std::swap(mods[draggedModIndex], mods[next]);
                ModManager::SavePilusConfig();
            }
        }
    }
    ImGui::End();
}

void DrawUI()
{
    DrawActionBox();
    DrawModList();
    DrawConsole();
}