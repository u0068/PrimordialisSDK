#pragma once
#include <imgui.h>

struct ImGuiAPI
{
    ImGuiContext* context;
    void (*RegisterUI)(void (*)());
    void (*UnregisterUI)(void (*)());
};