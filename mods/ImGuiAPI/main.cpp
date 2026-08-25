#include <imgui_internal.h>

#include "plasmid_api.h"
#include "imgui_setup.h"

static std::vector<void(*)()> ui_callbacks;

static void RegisterUI(void (*callback)())
{
    ui_callbacks.push_back(callback);
}

static void UnregisterUI(void (*callback)())
{
    std::erase(ui_callbacks, callback);
}

int test2 = 1;

inline ImGuiAPI imgui_api{
    nullptr,
    RegisterUI,
    UnregisterUI,
};


void DrawUI()
{
    imgui_api.context = ImGui::GetCurrentContext();
    P::Log() << "Context: " << imgui_api.context << '\n';
    ImGui::ShowDemoWindow();

    for (auto callback : ui_callbacks)
    {
        callback();
    }
}

void P::InitialiseMod()
{
    P::RegisterModule("ImGuiAPI", &imgui_api);
    mod_name = "ImGuiAPI";
    do_imgui_hooks();
}