#pragma once
#include <imgui.h>

// Some extra imgui stuff that is likely to be used by many mods

enum ImGuiExtraColorEditFlags_ {
    ImGuiExtraColorEditFlags_PrimordialisStyle =
        ImGuiColorEditFlags_Float | ImGuiColorEditFlags_PickerHueWheel | ImGuiColorEditFlags_AlphaBar,
    ImGuiExtraColorEditFlags_AllInputs =
        ImGuiColorEditFlags_InputRGB | ImGuiColorEditFlags_InputHSV
};

namespace ImGuiExtra {
    static void InfoMarker(const char *desc, const char *sign = "(?)") {
        ImGui::TextDisabled(sign);
        if (ImGui::BeginItemTooltip()) {
            ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
            ImGui::TextUnformatted(desc);
            ImGui::PopTextWrapPos();
            ImGui::EndTooltip();
        }
    }
}
