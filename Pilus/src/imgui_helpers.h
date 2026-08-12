#pragma once
#include <iostream>
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <GLFW/glfw3.h>

inline void checkGLError(const char *operation)
{
    GLenum error = glGetError();
    if (error != GL_NO_ERROR)
    {
        std::cerr << "OpenGL error after " << operation << ": " << error << "\n";
    }
}

inline void glfwErrorCallback(int error, const char *description)
{
    std::cerr << "GLFW Error " << error << ": " << description << "\n";
}

inline void renderImGui(const ImGuiIO& io)
{
    try
    {
        ImGui::Render();
        checkGLError("ImGui::Render");

        if (io.ConfigFlags & ImGuiConfigFlags_ViewportsEnable)
        {
            GLFWwindow *backup_current_context = glfwGetCurrentContext();
            ImGui::UpdatePlatformWindows();
            ImGui::RenderPlatformWindowsDefault();
            glfwMakeContextCurrent(backup_current_context);
        }

        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        checkGLError("ImGui_ImplOpenGL3_RenderDrawData");
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception in ImGui: " << e.what() << "\n";
    }
}