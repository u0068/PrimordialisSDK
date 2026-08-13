#pragma once

#include "plasmid_api.h"
#include <imgui.h>
#include <imgui_impl_opengl3.h>
#include <imgui_impl_opengl3_loader.h>
#include <imgui_impl_win32.h>

// Use https://pthom.github.io/imgui_explorer/ for reference
void DrawUI();

inline WNDPROC original_wndproc;

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

// LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
// {
//     if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
//         return true;
//     return ::DefWindowProcW(hWnd, msg, wParam, lParam);
// }

inline void AddKeyCharacter(WPARAM wParam, LPARAM lParam)
{
    BYTE keyboard_state[256];

    if (!GetKeyboardState(keyboard_state))
        return;

    WCHAR chars[8];

    UINT scan_code = (lParam >> 16) & 0xFF;

    int count = ToUnicodeEx(
        static_cast<UINT>(wParam),
        scan_code,
        keyboard_state,
        chars,
        ARRAYSIZE(chars),
        0,
        GetKeyboardLayout(0)
    );

    if (count > 0)
    {
        for (int i = 0; i < count; ++i)
            ImGui::GetIO().AddInputCharacter(chars[i]);
    }
}

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

    if (msg == WM_KEYDOWN)
    {
        switch (wParam)
        {
            case VK_SHIFT:
            case VK_CONTROL:
            case VK_MENU:
            case VK_LEFT:
            case VK_RIGHT:
            case VK_UP:
            case VK_DOWN:
            case VK_ESCAPE:
            case VK_RETURN:
            case VK_BACK:
            case VK_TAB:
                break;

            default:
                AddKeyCharacter(wParam, lParam);
            break;
        }
    }

    return CallWindowProc(
        original_wndproc,
        hwnd,
        msg,
        wParam,
        lParam
    );
}

inline void BlockInputs(P::window_t* window)
{
    Next<void>(window);

    if (!ImGui::GetIO().WantCaptureMouse)
        return;

    window->input.buttons_blocked = true;
    window->input.click_blocked = true;
    window->input.hover_blocked = true;
    window->input.escape_blocked = true;
    window->input.right_click_blocked = true;

    window->frame_input.buttons_blocked = true;
    window->frame_input.click_blocked = true;
    window->frame_input.hover_blocked = true;
    window->frame_input.escape_blocked = true;
    window->frame_input.right_click_blocked = true;

    P::w->block_mouse = 1;
    P::w->scroll_blocked = 1;

    window->input.cursor_type = 0;
    window->input.mouse_wheel = 0;
    window->input.mouse_hwheel = 0;

    window->frame_input.cursor_type = 0;
    window->frame_input.mouse_wheel = 0;
    window->frame_input.mouse_hwheel = 0;
}

inline void DrawImgui()
{
    ImGuiIO& io = ImGui::GetIO();

    // Start the Dear ImGui frame
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplWin32_NewFrame();

    GLint viewport[4];
    glGetIntegerv(GL_VIEWPORT, viewport);

    io.DisplaySize = ImVec2(
        static_cast<float>(viewport[2]),
        static_cast<float>(viewport[3])
    );;

    P::real_2 scale_factor{
        (float)P::settings->resolution_x/(float)P::settings->window_x,
        (float)P::settings->resolution_y/(float)P::settings->window_y};
    POINT mouse_pos;
    if (GetCursorPos(&mouse_pos))
    {
        ScreenToClient(
            (HWND)P::main_wnd->hwnd,
            &mouse_pos
        );

        io.AddMousePosEvent(
            static_cast<float>(mouse_pos.x)*scale_factor.x,
            static_cast<float>(mouse_pos.y)*scale_factor.y
        );
    }

    ImGui::NewFrame();

    DrawUI();

    ImGui::Render();

    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}

inline void ImguiHook(P::render_context *param_1,P::real_3 *param_2,float param_3,P::real_4 *param_4,int param_5)
{
    DrawImgui();
    Next<void>(param_1, param_2, param_3, param_4, param_5);
}

inline bool imgui_initialized = false;
inline void WindowInitHook(P::window_t* window)
{
    Next<void>(window);

    if (imgui_initialized)
        return;

    ImGui_ImplWin32_EnableDpiAwareness();

    // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;   // Enable Keyboard Controls
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;    // Enable Gamepad Controls
    io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;       // Enable Docking
    // io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;     // Enable Multi-Viewport / Platform Windows
    io.MouseDrawCursor = false;

    ImGui::StyleColorsDark();

    // Color correction to offset the game's post processing
    for (int i = 0; i < ImGuiCol_COUNT; i++)
    {
        auto col = ImGui::GetStyleColorVec4(i);
        float exponent = 1.75;
        col = {pow(col.x, exponent), pow(col.y, exponent), pow(col.z, exponent),pow(col.w, exponent)};
        ImGui::PushStyleColor(i, col);
    }

    ImGui_ImplWin32_InitForOpenGL(window->hwnd);

    ImGui_ImplOpenGL3_Init();

    original_wndproc = reinterpret_cast<WNDPROC>(
        SetWindowLongPtr(
            (HWND)window->hwnd,
            GWLP_WNDPROC,
            reinterpret_cast<LONG_PTR>(imgui_wndproc)
        )
    );

    imgui_initialized = true;

    P::settings->hardware_cursor = false;
}

inline void do_imgui_hooks()
{
    Hook<"init_gl_context">(WindowInitHook);
    Hook<"draw_cursor">(ImguiHook);
    Hook<"update_mouse_pos">(BlockInputs);
    P::Log("Done ImGui Hooks!\n");
}