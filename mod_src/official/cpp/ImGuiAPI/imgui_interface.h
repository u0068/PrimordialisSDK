#pragma once
#include <imgui.h>
#include "imgui_extra.h"

// Use the demo window or https://pthom.github.io/imgui_explorer/ for reference!

struct ImGuiAPI {
    ImGuiContext* context;

    void (*RegisterUI)(void (*)());

    void (*UnregisterUI)(void (*)());
};
