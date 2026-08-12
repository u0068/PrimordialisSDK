#pragma once

#include "plasmid_api.h"
#include <imgui.h>
#include <imgui_impl_opengl3.h>
#include <imgui_impl_opengl3_loader.h>
#include <imgui_impl_win32.h>

namespace P = APIUtil;

inline WNDPROC original_wndproc;

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

// LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
// {
//     if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
//         return true;
//     return ::DefWindowProcW(hWnd, msg, wParam, lParam);
// }

inline LRESULT CALLBACK imgui_wndproc(
    HWND hwnd,
    UINT msg,
    WPARAM wParam,
    LPARAM lParam)
{
    ImGui_ImplWin32_WndProcHandler(
        hwnd,
        msg,
        wParam,
        lParam
    );

    return CallWindowProc(
        original_wndproc,
        hwnd,
        msg,
        wParam,
        lParam
    );
}

inline bool show_demo_window = true;

inline void DrawImgui(P::window_t* window)
{
    if (!P::IsThreadSafe())
        return;

    // Start the Dear ImGui frame
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    if (show_demo_window)
        ImGui::ShowDemoWindow(&show_demo_window);

    ImGui::Render();

    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}

inline void imgui_hook(P::render_context* param_1, P::render_context* param_2, P::user_input* param_3, P::recording_buffer* param_4, float param_5, P::window_t* window)
{
    Next<void>(param_1, param_2, param_3, param_4, param_5, window);
    DrawImgui(window);
}

inline void window_init_hook(P::window_t* window)
{
    Next<void>(window);

    ImGui_ImplWin32_EnableDpiAwareness();

    // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;   // Enable Keyboard Controls
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;    // Enable Gamepad Controls
    io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;       // Enable Docking
    // io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;     // Enable Multi-Viewport / Platform Windows

    ImGui::StyleColorsDark();

    ImGui_ImplWin32_InitForOpenGL(window->hwnd);
    ImGui_ImplOpenGL3_Init();

    original_wndproc = reinterpret_cast<WNDPROC>(
        SetWindowLongPtr(
            (HWND)window->hwnd,
            GWLP_WNDPROC,
            reinterpret_cast<LONG_PTR>(imgui_wndproc)
        )
    );
}

inline void do_imgui_hooks()
{
    Hook<"init_gl_context">(window_init_hook);
    Hook<"render_game">(imgui_hook);
    P::Log("Done ImGui Hooks!\n");
}