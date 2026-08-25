#pragma once
#include <imgui.h>
#include <imgui_internal.h>
#ifdef IMGUI_BUILD_DLL
#define IMGUI_API __declspec(dllexport)
#else
#define IMGUI_API __declspec(dllimport)
#endif

struct ImGuiAPI
{
    void (*RegisterUI)(void (*)());
    void (*UnregisterUI)(void (*)());
};