#include "ui.h"
#include <imgui_internal.h>

#include "dependency_manager.h"
#include "imgui_helpers.h"
#include "modloader.h"

// Use the demo window or https://pthom.github.io/imgui_explorer/ for reference

int configured_mod = -1;
bool config_open = true;

static void InfoMarker(const char* desc, const char* sign="(?)")
{
    ImGui::TextDisabled(sign);
    if (ImGui::BeginItemTooltip())
    {
        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
        ImGui::TextUnformatted(desc);
        ImGui::PopTextWrapPos();
        ImGui::EndTooltip();
    }
}

void DrawSettings(Mod& mod)
{
    ImGui::PushStyleVarY(ImGuiStyleVar_ItemSpacing, 1);
    for (auto& el : mod.config_defaults.items())
    {
        auto name = el.key().c_str();
        nlohmann::ordered_json& setting = el.value();
        if (mod.config_values[name].empty() and not setting["default"].empty())
            mod.config_values[name] = setting["default"];
        else if (setting["default"].empty() and mod.config_values[name].empty())
        {
            ImGui::TextColored({1.0, 0.5, 0.5, 1.0}, name);
            if (ImGui::IsItemHovered())
            {
                ImGui::BeginErrorTooltip();
                ImGui::Text("No default or value has been set! I don't know you want me to do with this.");
                ImGui::EndErrorTooltip();
                continue;
            }
        }
        // if (setting["default"].is_object())
        // {
        //     ImGui::SeparatorText(name);
        //     DrawSettings(setting["default"]);
        //     continue;
        // }
        if (mod.config_values[name].type() == json::value_t::number_integer || mod.config_values[name].type() == json::value_t::number_unsigned)
        {
            auto value = GetFromJson<int>(mod.config_values, name);
            auto min = GetFromJson<int>(setting, "min");
            auto max = GetFromJson<int>(setting, "max");
            auto speed = GetFromJson<float>(setting, "speed", 0.1f);
            auto slider = GetFromJson<bool>(setting, "slider");
            if (slider)
            {
                if (ImGui::SliderInt(name, &value, min, max))
                    mod.config_values[name] = value;
            }
            else
            {
                if (ImGui::DragInt(name, &value, speed, min, max))
                    mod.config_values[name] = value;
            }
        }
        else if (mod.config_values[name].type() == json::value_t::number_float)
        {
            auto value = GetFromJson<float>(mod.config_values, name);
            auto min = GetFromJson<float>(setting, "min");
            auto max = GetFromJson<float>(setting, "max");
            auto speed = GetFromJson<float>(setting, "speed", 0.1f);
            auto slider = GetFromJson<bool>(setting, "slider");
            if (slider)
            {
                if (ImGui::SliderFloat(name, &value, min, max))
                    mod.config_values[name] = value;
            }
            else
            {
                if (ImGui::DragFloat(name, &value, speed, min, max))
                    mod.config_values[name] = value;
            }
        }
        else if (mod.config_values[name].type() == json::value_t::boolean)
        {
            auto value = GetFromJson<bool>(mod.config_values, name);
            if (ImGui::Checkbox(name, &value))
                mod.config_values[name] = value;
        }
        else if (mod.config_values[name].type() == json::value_t::string)
        {
            auto value = (char*)GetStringFromJson(mod.config_values, name).c_str();
            auto hint = (char*)GetStringFromJson(setting, "default").c_str();
            if (ImGui::InputTextWithHint(name, hint, value, 128, ImGuiInputTextFlags_EnterReturnsTrue))
                mod.config_values[name] = value;
        }
        if (!setting["description"].empty())
        {
            ImGui::SameLine();
            InfoMarker(GetStringFromJson(setting, "description").c_str());
        }
    }
    ImGui::PopStyleVar();
}

void DrawModConfig()
{
    if (configured_mod < 0 or !config_open)
        return;
    Mod& mod = ModManager::mods[configured_mod];
    ImGui::Begin((mod.name + " Config").c_str(), &config_open);
    ImGui::PushItemWidth(200);

    DrawSettings(mod);

    ImGui::End();
}

bool auto_scroll = true;
bool scroll_to_bottom = false;
bool wrap_text = true;
std::vector<std::string> Lines{};
void DrawConsole()
{
    ImGui::Begin("Console");
    // ImGui::TextWrapped(console_log.str().c_str());

    std::string stream_line{};
    while (std::getline(console_buffer, stream_line))
        Lines.push_back(stream_line);
    console_buffer.clear();

    if (ImGui::SmallButton("Clear"))    Lines.clear();
    ImGui::SameLine();
    bool copy_to_clipboard = ImGui::SmallButton("Copy");
    //static float t = 0.0f; if (ImGui::GetTime() - t > 0.02f) { t = ImGui::GetTime(); AddLog("Spam %f", t); }

    // Options menu
    if (ImGui::BeginPopup("Options"))
    {
        ImGui::Checkbox("Wrap text", &wrap_text);
        ImGui::Checkbox("Auto-scroll", &auto_scroll);
        if (ImGui::SmallButton("Scroll to bottom")) scroll_to_bottom = true;
        ImGui::EndPopup();
    }
    ImGui::SameLine();
    if (ImGui::SmallButton("Options"))
        ImGui::OpenPopup("Options");

    ImGui::Separator();

    if (ImGui::BeginChild("ScrollingRegion", {0, 0}, ImGuiChildFlags_NavFlattened, ImGuiWindowFlags_HorizontalScrollbar * !wrap_text))
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
            if (wrap_text)
                ImGui::TextWrapped(line.c_str());
            else
                ImGui::Text(line.c_str());
            if (has_color)
                ImGui::PopStyleColor();
        }
        if (copy_to_clipboard)
            ImGui::LogFinish();

        // Keep up at the bottom of the scroll region if we were already at the bottom at the beginning of the frame.
        // Using a scrollbar or mouse-wheel will take away from the bottom edge.
        if (scroll_to_bottom || (auto_scroll && ImGui::GetScrollY() >= ImGui::GetScrollMaxY()))
            ImGui::SetScrollHereY(1.0f);
        scroll_to_bottom = false;

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
        ModManager::SaveLuaModlist();
        ModManager::PatchInitLua();
        ModManager::InjectAll();
    }
    ImGui::PopStyleColor(3);

    ImGui::SameLine();
    if (ImGui::Button("Refresh Mods", ImGui::GetContentRegionAvail()))
    {
        ModManager::SaveLuaModlist();
        ModManager::RefreshMods();
    }
    ImGui::End();
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
            ImGui::CalcTextSize("(i) Mod  Config ").x
            );
        int move_direction = 0;
        int dragged_mod_index = -1;
        for (int i = 0; i < mods.size(); ++i)
        {
            Mod& mod = mods[i];
            ImGui::PushID(mod.name.c_str());
            // if (mod.name == "Nucleus")
            //     ImGui::BeginDisabled();
            ImGui::TableNextRow();
            ImGui::TableNextColumn();
            if (!exists(mod.dll_path) and !exists(mod.init_path))
                ImGui::BeginDisabled();
            if (ImGui::Checkbox("##Enabled", &mod.user_enabled))
                ModManager::SavePilusConfig();
            if (!exists(mod.dll_path) and !exists(mod.init_path))
            {
                mod.user_enabled = false;
                if (ImGui::IsItemHovered(ImGuiHoveredFlags_ForTooltip))
                    ImGui::SetTooltip("This mod is not installed");
                ImGui::EndDisabled();
            }
            ImGui::TableNextColumn();
            if (not mod.user_enabled)
            {
                if (mod.dep_enabled)
                    ImGui::PushStyleColor(ImGuiCol_Text, {1., 1., 0.5, 1.});
                else
                    ImGui::PushStyleColor(ImGuiCol_Text, ImGui::GetStyleColorVec4(ImGuiCol_TextDisabled));
            }

            ImGui::Selectable(
                mod.name.c_str(),
                true
                );
            if (not mod.user_enabled)
                ImGui::PopStyleColor();

            bool is_hovered = ImGui::TableGetHoveredRow() == i;
            if (ImGui::IsItemActive())
            {
                if (dragged_mod_index == -1)
                    dragged_mod_index = i;
                if (!is_hovered)
                {
                    move_direction =
                        ImGui::GetMouseDragDelta(0).y < 0.f ? -1 : 1;
                    int next = i + move_direction;
                    if (next >= 0 and next < mods.size())
                        ImGui::ResetMouseDragDelta();
                }
            }
            // ImGui::Text("Active: %d", ImGui::IsItemActive());
            // ImGui::Text("Hovered: %d", isHovered);
            // ImGui::Text("Dragged: %d", draggedModIndex == i);
            // if (mod.name == "Nucleus")
            //     ImGui::EndDisabled();
            ImGui::TableNextColumn();

            ImGui::TextDisabled("(?)");
            if (ImGui::BeginItemTooltip())
            {
                ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                // ImGui::Text("%s", mod.info.dump().c_str());
                ImGui::Text("Author: %s", GetStringFromJson(mod.info, "author", "Unknown").c_str());
                ImGui::Text("Description: %s", GetStringFromJson(mod.info, "description", "No Description").c_str());
                ImGui::Text("Version: %s", GetStringFromJson(mod.info, "version", "Unknown Version").c_str());
                if (not mod.info["dependencies"].empty())
                {
                    ImGui::Text("Dependencies:");
                    for (auto& dep : mod.info["dependencies"].items())
                    {
                        auto name = dep.key();
                        auto version = dep.value().empty() ? "" : dep.value().get<std::string>();
                        ImGui::Text("\t%s\t%s", name, version);
                    }
                }
                ImGui::Text("Directory: %s", mod.path.filename().string().c_str());
                if (not mod.dll_path.empty())
                    ImGui::Text("main dll path: %s",
                        mod.dll_path.lexically_relative(mod.path.parent_path()).string().c_str());
                if (not mod.init_path.empty())
                    ImGui::Text("init.lua path: %s",
                        mod.init_path.lexically_relative(mod.path.parent_path()).string().c_str());
                ImGui::PopTextWrapPos();
                ImGui::EndTooltip();
            }

            ImGui::SameLine();
            if (mod.is_lua() and mod.is_cpp())
                ImGui::Text("C+L");
            else if (mod.is_lua())
                ImGui::Text("Lua");
            else if (mod.is_cpp())
                ImGui::Text("C++");
            else
                ImGui::Dummy(ImGui::CalcTextSize("Lua"));
            ImGui::SameLine();
            if (mod.config_defaults.empty())
                ImGui::BeginDisabled();
            if (ImGui::Button("Config"))
            {
                configured_mod = i;
                config_open = true;
            }
            if (mod.config_defaults.empty())
            {
                if (ImGui::IsItemHovered(ImGuiHoveredFlags_ForTooltip))
                    ImGui::SetTooltip("This mod is not configurable");
                ImGui::EndDisabled();
            }
            ImGui::PopID();
        }
        ImGui::EndTable();
        if (move_direction != 0)
        {
            int next = dragged_mod_index + move_direction;
            if (next >= 0 && next < mods.size())
            {
                std::swap(mods[dragged_mod_index], mods[next]);
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
    DrawModConfig();
}