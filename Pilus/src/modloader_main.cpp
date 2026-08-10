#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601
#endif
#define NOMINMAX
#include <windows.h>
#include <winbase.h>
#include "modloader.h"
#include "update.h"

void run()
{
    AllocConsole();

    FILE* file;
    freopen_s(&file, "CONOUT$", "w", stdout);

    ModManager manager;

    if (!exists(manager.pilus_files_path))
    {
        fs::create_directory(manager.pilus_files_path);
        manager.log.append("Created pilus files directory\n");
    }

    UpdateAll(manager);

    sf::RenderWindow window(sf::VideoMode({ 800, 560 }), "Pilus", sf::Style::Titlebar | sf::Style::Close);

    sf::Font font;
    sf::Text text(font);
    if (!font.openFromFile("data/CreatoDisplay-Regular.otf"))
        if (!font.openFromFile("verdana.ttf"))
            printf("FAILED TO LOAD FONT\n");

    manager.font = &font;
    manager.text = &text;
    manager.window = &window;
    font.setSmooth(false);
    text.setCharacterSize(15);

    if (!exists(manager.mod_path))
    {
        fs::create_directory(manager.mod_path);
        manager.log.append("Created mod directory\n");
    }

    HANDLE dirchangenotif = FindFirstChangeNotification(
        manager.mod_path.string().c_str(),
        FALSE,
        FILE_NOTIFY_CHANGE_FILE_NAME);

    manager.mod_path = manager.mod_path;


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
