
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

ImGuiAPI imgui_api{
    RegisterUI,
    UnregisterUI
};

void DrawUI()
{
    for (auto callback : ui_callbacks)
        callback();
}

void P::InitialiseMod()
{
    P::RegisterModule("ImGuiAPI", &imgui_api);
    mod_name = "DearImGui";
    do_imgui_hooks();
}