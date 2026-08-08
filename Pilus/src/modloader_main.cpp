#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601
#endif
#define NOMINMAX
#include <windows.h>
#include <winbase.h>
#include "modloader.h"

void run()
{
    sf::RenderWindow window(sf::VideoMode({ 800, 560 }), "Pilus", sf::Style::Titlebar | sf::Style::Close);

    sf::Font font;
    sf::Text text(font);
    if (!font.openFromFile("data/CreatoDisplay-Regular.otf"))
        if (!font.openFromFile("verdana.ttf"))
            printf("FAILED TO LOAD FONT\n");

    ModManager manager;
    manager.font = &font;
    manager.text = &text;
    manager.window = &window;
    font.setSmooth(false);
    text.setCharacterSize(15);

    std::filesystem::path modpath = std::filesystem::current_path().append("mods");

    if (!std::filesystem::exists(modpath))
    {
        std::filesystem::create_directory(modpath);
        manager.log.append("Created mod directory\n");
    }

    HANDLE dirchangenotif = FindFirstChangeNotification(
        modpath.string().c_str(),
        FALSE,
        FILE_NOTIFY_CHANGE_FILE_NAME);

    manager.modpath = modpath;

    if (std::filesystem::exists("PILUS_MODLOADER.CONFIG"))
    {
        manager.LoadModOrder();
    }

    manager.RefreshMods();
    manager.Render();

    while (window.isOpen())
    {
        WaitForSingleObject(dirchangenotif, 0);

        manager.log.clear();
        manager.RefreshMods();
        FindNextChangeNotification(dirchangenotif);

        manager.Update();
    }
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow) {
    run();
    return 0;
}
