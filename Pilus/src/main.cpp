#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601
#endif
#include "dependency_manager.h"
#include "imgui_helpers.h"
#include "ui.h"
#include "updater.h"

int main()
{
    console_log.clear();

    console_log << "Pilus Starting\n";

    UpdateAll();
    ModManager::RefreshMods();

    glfwSetErrorCallback(glfwErrorCallback);
    if (!glfwInit())
    {
        console_log << "Failed to initialise GLFW\n";
        return -1;
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    GLFWwindow* window = glfwCreateWindow(
        720,
        720,
        "Pilus Modloader",
        nullptr,
        nullptr
    );
    if (!window)
    {
        console_log << "Failed to create GLFW window\n";
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;
    io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;
    ImGui::StyleColorsDark();
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init("#version 330");

    console_log << "Pilus Initialised!\n";

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        ImGui::DockSpaceOverViewport();

        EnableDeps();

        DrawUI();

        // ImGui::ShowDemoWindow(); // I'm using https://pthom.github.io/imgui_explorer/ instead

        renderImGui(io);

        int width;
        int height;

        glfwGetFramebufferSize(window, &width, &height);

        glViewport(0, 0, width, height);
        glClear(GL_COLOR_BUFFER_BIT);

        ImGui_ImplOpenGL3_RenderDrawData(
            ImGui::GetDrawData()
        );

        glfwSwapBuffers(window);
    }

    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();
    glfwDestroyWindow(window);
    glfwTerminate();

    ModManager::SaveLuaModlist();
    ModManager::SavePilusConfig();

    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    return main();
}