#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601
#endif
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <deque>
#include <algorithm>
#define NOMINMAX
#include <windows.h>
#include <winbase.h>
#include <tlhelp32.h>
#include <psapi.h>
#include <tchar.h>
#include "SFML/Graphics.hpp"
#include "modloader.h"

namespace fs = std::filesystem;

DWORD GetProcessByName(const char* lpProcessName)
{
    PROCESSENTRY32 ProcList{};
    ProcList.dwSize = sizeof(ProcList);

    const HANDLE hProcList = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hProcList == INVALID_HANDLE_VALUE)
        return -1;

    if (!Process32First(hProcList, &ProcList))
        return -1;

    while (Process32Next(hProcList, &ProcList))
    {
        if (lstrcmpA(ProcList.szExeFile, lpProcessName) == 0)
            return ProcList.th32ProcessID;
    }

    return -1;
}

std::filesystem::path GetExePath()
{
    wchar_t buffer[MAX_PATH];
    DWORD len = GetModuleFileNameW(NULL, buffer, MAX_PATH);
    if (len == 0)
        throw std::runtime_error("Failed to get executable path");
    return std::filesystem::path(buffer);
}

bool IsDLL(const std::string& filePath, std::string& log)
{
    std::ifstream f(filePath, std::ios::binary);
    if (!f.is_open())
    {
        log.append("Mod could not be opened\n");
        return false;
    }

    IMAGE_DOS_HEADER dosHeader{};
    f.read(reinterpret_cast<char*>(&dosHeader), sizeof(dosHeader));
    if (!f || dosHeader.e_magic != IMAGE_DOS_SIGNATURE)
        return false;

    f.seekg(dosHeader.e_lfanew, std::ios::beg);
    IMAGE_NT_HEADERS ntHeaders{};
    f.read(reinterpret_cast<char*>(&ntHeaders), sizeof(ntHeaders));
    if (!f || ntHeaders.Signature != IMAGE_NT_SIGNATURE)
        return false;

    f.close();
    return (ntHeaders.FileHeader.Characteristics & IMAGE_FILE_DLL) != 0;
}

std::string ReadFile(const fs::path& path)
{
    std::ifstream file(path);

    if (!file)
        return {};

    std::stringstream buffer;
    buffer << file.rdbuf();

    return buffer.str();
}

std::string GetValue(const std::string& data, const std::string& key)
{
    size_t find = data.find(key + ":");

    if (find == std::string::npos)
        return {};

    find += key.length() + 1;

    size_t end = data.find("\n", find);

    if (end == std::string::npos)
        end = data.length();

    return data.substr(find, end - find);
}

int Inject(const char* lpDLLName, char* lpFullDLLPath, const char* lpProcessName, std::string& log, std::string& elog)
{
    const DWORD dwProcessID = GetProcessByName(lpProcessName);

    if (dwProcessID == (DWORD)-1)
    {
        elog.append("An error occurred when trying to find the target process. Is Primordialis open?\n");
        return -1;
    }

    log.append("[DLL Injector]\n");

    const DWORD dwFullPathResult = GetFullPathNameA(lpDLLName, MAX_PATH, lpFullDLLPath, nullptr);
    if (dwFullPathResult == 0)
    {
        elog.append("Attempted to load a missing mod.\n");
        return -1;
    }

    if (!IsDLL(lpFullDLLPath, elog))
    {
        elog.append("Attempted to load an invalid .DLL\n");
        return -1;
    }

    const HANDLE hTargetProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwProcessID);
    if (hTargetProcess == INVALID_HANDLE_VALUE)
    {
        elog.append("An error occurred when trying to open the target process.\n");
        return -1;
    }

    log.append("[PROCESS INJECTION]\n");
    log.append("Process opened successfully.\n");

    const LPVOID lpPathAddress = VirtualAllocEx(hTargetProcess, nullptr, lstrlenA(lpFullDLLPath) + 1, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (lpPathAddress == nullptr)
    {
        elog.append("An error occurred when trying to allocate memory in the target process.\n");
        return -1;
    }

    log.append("Memory allocate at 0x");
    log.append(std::to_string((UINT)(uintptr_t)lpPathAddress));
    log.append("\n");

    const DWORD dwWriteResult = WriteProcessMemory(hTargetProcess, lpPathAddress, lpFullDLLPath, lstrlenA(lpFullDLLPath) + 1, nullptr);
    if (dwWriteResult == 0)
    {
        elog.append("An error occurred when trying to write the DLL path in the target process.\n");
        return -1;
    }

    log.append("DLL path written successfully.\n");

    const HMODULE hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == INVALID_HANDLE_VALUE || hModule == nullptr)
        return -1;

    const FARPROC lpFunctionAddress = GetProcAddress(hModule, "LoadLibraryA");
    if (lpFunctionAddress == nullptr)
    {
        elog.append("An error occurred when trying to get \"LoadLibraryA\" address.\n");
        return -1;
    }

    log.append("LoadLibraryA address at 0x");
    log.append(std::to_string((UINT)(uintptr_t)lpFunctionAddress));
    log.append("\n");

    const HANDLE hThreadCreationResult = CreateRemoteThread(hTargetProcess, nullptr, 0, (LPTHREAD_START_ROUTINE)lpFunctionAddress, lpPathAddress, 0, nullptr);
    if (hThreadCreationResult == INVALID_HANDLE_VALUE)
    {
        elog.append("An error occurred when trying to create the thread in the target process.\n");
        return -1;
    }

    log.append("DLL Injected !\n");

    WaitForSingleObject(hThreadCreationResult, INFINITE);
    CloseHandle(hThreadCreationResult);

    std::string dllFileName = lpFullDLLPath;
    size_t pos = dllFileName.find_last_of("/\\");
    if (pos != std::string::npos)
        dllFileName = dllFileName.substr(pos + 1);

    log.append("Mod injected !\n");

    VirtualFreeEx(hTargetProcess, lpPathAddress, 0, MEM_RELEASE);
    CloseHandle(hTargetProcess);

    return 0;
}

std::string WrapText(const sf::Text& text, std::string& string, int max)
{
    std::string nstring("");
    sf::Text temp = text;
    temp.setString(nstring);
    for (int i = 0; i < string.length(); i++)
    {
        nstring.append(string.substr(i, 1));
        temp.setString(nstring);
        if (temp.getLocalBounds().size.x > max)
        {
            nstring.insert(nstring.length() - 1, "\n");
        }
        temp.setString(nstring);
    }
    return nstring;
}

void ModManager::Render()
{
    sf::VertexArray bline(sf::PrimitiveType::Lines, 2);

    window->clear(sf::Color::Black);
    if (modselected == -1)
    {
        std::deque<std::string> trunc_log;

        int maxlines = 12;
        std::istringstream sstream(errorlog);
        std::string line;
        while (std::getline(sstream, line))
        {
            trunc_log.push_back(line);
            if (trunc_log.size() > maxlines)
                trunc_log.pop_front();
        }
        sstream = std::istringstream(log);
        sstream.seekg(0);
        while (std::getline(sstream, line))
        {
            trunc_log.push_back(line);
            if (trunc_log.size() > maxlines)
                trunc_log.pop_front();
        }

        std::string flog;
        for (int i = 0; i < trunc_log.size(); i++)
        {
            flog.append(trunc_log[i]);
            flog.append("\n");
        }

        flog = WrapText(*text, flog, 400);
        flog = "Pilus Modloader\n" + flog;
        text->setString(flog);

        text->setPosition({ 400, 255 });

        window->draw(*text);

        bline[0].position = { 400, 255 };
        bline[1].position = { 800, 255 };

        window->draw(bline);
    }
    else
    {
        for (int i = 0; i < mods[modselected].config.size(); i++)
        {
            std::string configline;

            if (i == configselected)
                configline = "(" + mods[modselected].config[i].name + "): " + configtemp;
            else
            {
                configline = mods[modselected].config[i].name + ": ";

                if (std::holds_alternative<double>(mods[modselected].config[i].value))
                    configline.append(std::to_string(std::get<double>(mods[modselected].config[i].value)));
                else if (std::holds_alternative<bool>(mods[modselected].config[i].value))
                {
                    if (std::get<bool>(mods[modselected].config[i].value))
                        configline.append("Enabled");
                    else
                        configline.append("Disabled");
                }
                else if (std::holds_alternative<std::string>(mods[modselected].config[i].value))
                    configline.append(std::get<std::string>(mods[modselected].config[i].value));
            }
            if (i % 2 == 1)
            {
                sf::RectangleShape brighterrect;
                brighterrect.setSize({ 400, 50 });
                brighterrect.setFillColor(sf::Color(255, 255, 255, 10));
                brighterrect.setPosition({ 400, 50 * i + cscroll });
                window->draw(brighterrect);
            }

            text->setString(configline);
            text->setPosition({ 400, 50 * i + cscroll - text->getLocalBounds().size.y / 2 + 25 });
            window->draw(*text);
        }
    }

    bline[0].position = {400, 0};
    bline[1].position = {400, 560};

    window->draw(bline);

    if (modhover != -1 && !mods.empty())
    {
        if (modselected == -1)
        {
            lastdescriptiontrunc = WrapText(*text, mods[modhover].description, 400);
            text->setString(lastdescriptiontrunc);
            text->setPosition({ 600 - text->getLocalBounds().size.x / 2, 255 / 2 - text->getLocalBounds().size.y / 2 });
            window->draw(*text);
        }

        sf::RectangleShape hoverhighlight;
        if (!m_leftPressed)
        {
            hoverhighlight.setSize({399, 100});
            hoverhighlight.setPosition({0, 100 * modhover + scroll});
            hoverhighlight.setFillColor(sf::Color(20, 20, 20));

            if (hovermove)
            {
                hoverhighlight.setSize({ 31, 50 });
                if (hovertopmove)
                    hoverhighlight.setPosition({400 - 32, 100 * modhover + scroll});
                else
                    hoverhighlight.setPosition({400 - 32, 100 * modhover + scroll + 50});
            }
            if (hovermodoptions)
            {
                hoverhighlight.setSize({ 68, 50 });
                if (hovertopoption)
                    hoverhighlight.setPosition({ 300, 100 * modhover + scroll });
                else
                    hoverhighlight.setPosition({ 300, 100 * modhover + scroll + 50 });
            }
            window->draw(hoverhighlight);
        }

        text->setString("/\\");
        text->setPosition({ 400 - 16 - (text->getLocalBounds().size.x / 2), 100 * modhover + scroll - (text->getLocalBounds().size.y / 2) + 25 });
        window->draw(*text);

        text->setString("\\/");
        text->setPosition({ 400 - 16 - (text->getLocalBounds().size.x / 2), 100 * modhover + scroll - (text->getLocalBounds().size.y / 2) + 50 + 25 });
        window->draw(*text);

        text->setString("Config");
        text->setPosition({ 300 + 34 - (text->getLocalBounds().size.x / 2), 100 * modhover + scroll - (text->getLocalBounds().size.y / 2) + 25});
        window->draw(*text);

        if (mods[modhover].enabled)
            text->setString("Disable");
        else
            text->setString("Enable");
        text->setPosition({ 300 + 34 - (text->getLocalBounds().size.x / 2), 100 * modhover + scroll - (text->getLocalBounds().size.y / 2) + 50 + 25 });
        window->draw(*text);
    }
    else if (modselected == -1)
    {
        if (hoverinject)
        {
            sf::RectangleShape hoverhighlight;
            hoverhighlight.setSize({400, 254});
            hoverhighlight.setPosition({400, 0});
            hoverhighlight.setFillColor(sf::Color(20, 20, 20));

            window->draw(hoverhighlight);
        }

        text->setString("Start");
        // would add a way to check for if primordialis is already open and alternate between Start and Inject but its too slow
        text->setPosition({600 - text->getLocalBounds().size.x / 2, 255 / 2 - text->getLocalBounds().size.y / 2});
        window->draw(*text);
    }
    else
    {
        sf::RectangleShape hoverhighlight;
        hoverhighlight.setSize({ 399, 100 });
        hoverhighlight.setPosition({ 0, 100 * modselected + scroll });
        hoverhighlight.setFillColor(sf::Color(20, 20, 20));
        window->draw(hoverhighlight);

        text->setString("Editing Config");
        text->setPosition({ 320 - (text->getLocalBounds().size.x / 2), 100 * modselected + scroll - (text->getLocalBounds().size.y / 2) + 50 });
        window->draw(*text);
    }

    for (int i = 0; i < mods.size(); i++)
    {
        int mody = i * 100 + int(scroll);

        if (i % 2 == 1)
        {
            sf::RectangleShape brighterrect;
            brighterrect.setFillColor(sf::Color(255, 255, 255, 10));
            brighterrect.setSize({399, 100});
            brighterrect.setPosition({0, float(mody)});
            window->draw(brighterrect);
        }

        text->setPosition({8, float(mody + 8)});
        text->setString(mods[i].name);
        window->draw(*text);
        text->setPosition({8, float(mody + 100 - 50)});
        text->setString(mods[i].author);
        text->setFillColor(sf::Color(60, 60, 60));
        window->draw(*text);
        text->setFillColor(sf::Color::White);

        if (!mods[i].enabled)
        {
            sf::RectangleShape disablerect;
            disablerect.setSize({399, 100});
            disablerect.setPosition({0, float(mody)});
            disablerect.setFillColor(sf::Color(0, 0, 0, 150));
            window->draw(disablerect);
        }
    }

    window->display();
}

void ModManager::ConfigEdit(char32_t key)
{
    if (key == U'\b') // backspace
    {
        if (configtemp.length() > 0)
        {
            configtemp.pop_back();
        }
    }
    else
    {
        if (std::holds_alternative<std::string>(mods[modselected].config[configselected].value))
        {
            configtemp.push_back(key);
        }
        else
        {
            if ((key >= U'0' && key <= U'9') || key == U'.')
                configtemp.push_back(key);
        }
    }
}
void ModManager::ConfigEditFinish()
{
    char* end;
    if (std::holds_alternative<std::string>(mods[modselected].config[configselected].value))
        mods[modselected].config[configselected].value = configtemp;
    else
        mods[modselected].config[configselected].value = std::strtod(configtemp.c_str(), &end);
    configtemp.clear();
}

void ModManager::Update()
{
    while (const std::optional event = window->pollEvent())
    {
        if (event->is<sf::Event::Closed>())
        {
            window->close();
            SaveModOrder();
        }
        if (event->is<sf::Event::MouseButtonPressed>())
        {
            CheckSignificantMouseMovement(); // often clicking something in the modloader after not being in focus can trigger wrong button so do this

            if (event->getIf<sf::Event::MouseButtonPressed>()->button == sf::Mouse::Button::Left)
                m_leftPressed = true;

            if (modhover != -1 && !mods.empty())
            {
                if (hovermodoptions && !hovertopoption)
                {
                    mods[modhover].enabled = !mods[modhover].enabled;
                }
                else if (hovermodoptions && hovertopoption)
                {
                    if (modselected != modhover)
                    {
                        modselected = modhover;
                        cscroll = 0;
                        configselected = -1;
                    }
                    else
                        modselected = -1;
                }
                else if (hovermove)
                {
                    if (hovertopmove)
                    {
                        if (modhover > 0)
                        {
                            std::swap(mods[modhover], mods[modhover - 1]);
                        }
                    }
                    else
                    {
                        if (modhover < mods.size() - 1)
                        {
                            std::swap(mods[modhover], mods[modhover + 1]);
                        }
                    }
                    SaveModOrder();
                }
            }
            else
            {
                if (modselected != -1) // enter config mode
                {
                    if (confighover != -1)
                    {
                        if (std::holds_alternative<bool>(mods[modselected].config[confighover].value))
                        {
                            mods[modselected].config[confighover].value = !std::get<bool>(mods[modselected].config[confighover].value);
                            configselected = -1;
                        }
                        else
                        {
                            if (std::holds_alternative<double>(mods[modselected].config[confighover].value))
                                configtemp = std::to_string(std::get<double>(mods[modselected].config[confighover].value));
                            else
                                configtemp = std::get<std::string>(mods[modselected].config[confighover].value);
                            configselected = confighover;
                        }
                    }
                }
                else
                {
                    if (hoverinject)
                        InjectAll();
                }
            }

            Render();
        }
        if (event->is<sf::Event::MouseButtonReleased>())
        {
            if (event->getIf<sf::Event::MouseButtonReleased>()->button == sf::Mouse::Button::Left)
                m_leftPressed = false;
        }
        if (event->is<sf::Event::KeyPressed>())
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::I))
                InjectAll();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::L))
            {
                std::ofstream file("loader_log.txt");
                file << errorlog << "\n" << log;
                file.close();
                log.clear();
                log.append("Printed log to \"loader_log.txt\"\n");
                Render();
            }
                
        }
        if (event->is<sf::Event::TextEntered>())
        {
            if (configselected != -1)
            {
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Enter))
                {
                    ConfigEditFinish();
                    configselected = -1;
                }
                else
                {
                    ConfigEdit(event->getIf<sf::Event::TextEntered>()->unicode);
                }
                Render();
            }
        }
        if (event->is<sf::Event::MouseMoved>())
        {
            if (CheckSignificantMouseMovement())
            {
                Render();
            }
        }
        if (event->is<sf::Event::MouseWheelScrolled>())
        {
            if (sf::Mouse::getPosition(*window).x < 400)
            {
                scroll += event->getIf<sf::Event::MouseWheelScrolled>()->delta * 20;
                scroll = std::min(0.f, scroll);
            }
            else
            {
                cscroll += event->getIf<sf::Event::MouseWheelScrolled>()->delta * 10;
                cscroll = std::min(0.f, cscroll);
            }
            Render();
        }
    }
}

bool IsProcessRunning(const char* processName) {
    PROCESSENTRY32 entry;
    entry.dwSize = sizeof(PROCESSENTRY32);

    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snapshot == INVALID_HANDLE_VALUE) {
        return false;
    }

    if (Process32First(snapshot, &entry)) {
        do {
            if (_tcsicmp(entry.szExeFile, processName) == 0) { // Case-insensitive comparison
                CloseHandle(snapshot);
                return true;
            }
        } while (Process32Next(snapshot, &entry));
    }

    CloseHandle(snapshot);
    return false;
}

void ModManager::InjectAll()
{
    log.clear();
    errorlog.clear();

    constexpr const char *lpprocessname = "primordialis.exe";
    int failed = 0;

    // we assume modloader is running inside primordialis working directory

    bool ownProcess = false;
    STARTUPINFO startI{0};
    PROCESS_INFORMATION procI{0};

    if (!IsProcessRunning(lpprocessname))
    {
        char cmdLine[] = "primordialis.exe --steamless --autoreload";
        ownProcess = true;
        if (!CreateProcessA(NULL, cmdLine, nullptr, nullptr, FALSE, 0, nullptr, nullptr, &startI, &procI))
        {
            log.append("Failed to start primordialis: ");
            log.append(std::to_string(GetLastError()));
            log.append("\n");
            return;
        }
        // try get to work with suspended process in future (for main menu altering mods that might need this)
        // for now cant do that due to current method of getting the handle of mod dll when injecting
    }

    HANDLE mapping =
    CreateFileMappingA(
        INVALID_HANDLE_VALUE,
        nullptr,
        PAGE_READWRITE,
        0,
        sizeof(ModListShared),
        "Pilus_ModList"
    );

    auto* shared =
    static_cast<ModListShared*>(
        MapViewOfFile(
            mapping,
            FILE_MAP_ALL_ACCESS,
            0,
            0,
            sizeof(ModListShared)));

    HANDLE modListReadyEvent =
    CreateEventA(
        nullptr,
        TRUE,
        FALSE,
        "Pilus_ModListReady"
    );

    shared->count = 0;

    for (int i = 0; i < mods.size(); i++)
    {
        //skip runtime api in modlist because should be last
        if (mods[i].dll_path.filename().string() == "NucleusRuntimeAPI.dll")
            continue;

        if (!mods[i].enabled)
        {
            log.append("Encountered disabled mod, skipping...\n");
            continue;
        }

        std::string injectPath = mods[i].dll_path.string();
        char dllpath[MAX_PATH];

        if (Inject(injectPath.c_str(), dllpath, lpprocessname, log, errorlog) != 0)
        {
            log.append("[INJECTION FAILED] (");
            log.append(mods[i].dll_path.filename().string());
            log.append(") Skipped\n");

            Render();
            failed++;
            continue;
        }
        log.append("[INJECTION SUCCESS] (");
        log.append(mods[i].dll_path.filename().string());
        log.append(")\n");

        strcpy_s(
            shared->mods[shared->count++].name,
            mods[i].dll_path.filename().string().c_str()
        );

        Render();
    }
    if (failed)
        log.append("Failed " + std::to_string(failed) + "/" + std::to_string(mods.size()) + " mods\n");
    else
        log.append("Mod injection finished successfully\n");
    Render();

    // load nucleus api.dll last after all other mods
    if (std::filesystem::exists("mods/NucleusRuntimeAPI.dll"))
    {
        char dllpath[MAX_PATH];
        if (Inject("mods/NucleusRuntimeAPI.dll", dllpath, lpprocessname, log, log) != 0)
        {
            log.append("Failed to inject runtime API, major issues may occur !\n");
            failed++;
        }
    }

    SetEvent(modListReadyEvent);

    if (ownProcess)
    {
        //ResumeThread(procI.hThread);

        CloseHandle(procI.hThread);
        CloseHandle(procI.hProcess);
    }
}

void ParseConfig(Mod* mod, const std::string& data)
{
    size_t readingat = 0;

    while (readingat != std::string::npos)
    {
        ConfigValue workingV;
        size_t prevRead = readingat;
        readingat = data.find(":", readingat);

        if (readingat == std::string::npos)
            break;

        workingV.name = data.substr(prevRead, readingat - prevRead);

        readingat++;
        prevRead = readingat;

        readingat = data.find(":", readingat);

        if (readingat == std::string::npos)
            break;

        std::string type = data.substr(prevRead, readingat - prevRead);

        readingat++;
        prevRead = readingat;

        readingat = data.find("\n", readingat);

        if (readingat == std::string::npos)
            readingat = data.length();

        std::string value = data.substr(prevRead, readingat - prevRead);

        if (type == "STRING")
        {
            workingV.value = value;
        }
        else if (type == "BOOL")
        {
            workingV.value = value != "0";
        }
        else
        {
            workingV.value = std::strtod(value.c_str(), nullptr);
        }

        mod->config.push_back(workingV);

        if (readingat < data.length())
            readingat++;
        else
            break;
    }
}
void ParseModInfo(Mod* mod, std::string& log)
{
    if (mod->path == mod->dll_path)
        return; // Mod is raw dll so has no info

    fs::path modFolder = mod->path;

    for (const auto& entry : fs::recursive_directory_iterator(modFolder))
    {
        if (!entry.is_regular_file())
            continue;

        auto filename = entry.path().filename().string();

        if (filename == "info.txt")
        {
            std::string data = ReadFile(entry.path());

            mod->name = GetValue(data, "name");
            mod->author = GetValue(data, "author");
            mod->description = GetValue(data, "description");
        }

        else if (filename == "config.txt")
        {
            std::string data = ReadFile(entry.path());

            ParseConfig(mod, data);
        }

        else if (entry.path().extension() == ".dll")
        {
            mod->dll_path = entry.path();
        }
    }
}

void ModManager::RefreshMods()
{
    log.append("Refreshing Mods...\n");
    std::vector<Mod> fmods;
    for (const auto& entry : std::filesystem::directory_iterator(modpath))
    {
        log.append("Found Mod: ");
        log.append(entry.path().filename().stem().string());
        log.append("\n");

        Mod nmod;
        nmod.path = entry.path();
        nmod.name = entry.path().filename().stem().string();

        if (entry.path().extension() == ".dll")
        {
            nmod.dll_path = entry.path();
        }
        ParseModInfo(&nmod, log);
        fmods.push_back(nmod);
    }
    Render();

    std::vector<Mod> finalmods;

    for (int i = 0; i < mods.size(); i++)
    {
        for (int j = 0; j < fmods.size(); j++)
        {
            if (mods[i] == fmods[j])
            {
                finalmods.push_back(fmods[j]);
                finalmods[finalmods.size() - 1].enabled = mods[i].enabled;
            }
        }
    }
    for (int i = 0; i < fmods.size(); i++)
    {
        bool addthismod = true;
        for (int j = 0; j < finalmods.size(); j++)
        {
            if (fmods[i] == finalmods[j])
            {
                addthismod = false;
                break;
            }
        }
        if (addthismod)
        {
            finalmods.push_back(fmods[i]);
        }
    }

    mods = finalmods;
    SaveModOrder();
}

void ModManager::LoadModOrder()
{
    std::ifstream file("PILUS_MODLOADER.CONFIG");

    if (!file) return;

    uint32_t num_mods;
    file.read(reinterpret_cast<char*>(&num_mods), sizeof(uint32_t));

    for (int i = 0; i < num_mods; i++)
    {
        Mod nmod;
        file.read(reinterpret_cast<char*>(&nmod.enabled), sizeof(bool));

        uint32_t pathlength = 0;
        file.read(reinterpret_cast<char*>(&pathlength), sizeof(uint32_t));
        std::string path(pathlength, '\0');
        file.read(&path[0], pathlength);
        nmod.path = std::filesystem::path(path);

        mods.push_back(nmod);
    }

    file.close();
}

void ModManager::SaveModOrder()
{
    std::ofstream file("PILUS_MODLOADER.CONFIG");

    if (!file) return;

    uint32_t num_mods = mods.size();
    file.write(reinterpret_cast<char*>(&num_mods), sizeof(uint32_t));
    for (int i = 0; i < mods.size(); i++)
    {
        file.write(reinterpret_cast<char*>(&(mods[i].enabled)), sizeof(bool));
        uint32_t pathlength = mods[i].path.string().size();
        file.write(reinterpret_cast<char*>(&pathlength), sizeof(uint32_t));
        file.write(mods[i].path.string().data(), mods[i].path.string().size());
    }

    file.close();
}

bool ModManager::CheckSignificantMouseMovement()
{
    bool change = false;
    sf::Vector2i mouse = sf::Mouse::getPosition(*window);

    if (mouse.x < 400)
    {
        if (mods.empty())
        {
            if (modhover != -1)
            {
                modhover = -1;
                change = true;
            }
        }
        else
        {

            if (hovermove != (mouse.x > 368))
            {
                hovermove = !hovermove;
                change = true;
            }
            if (hovermodoptions != (mouse.x > 300 && mouse.x < 368))
            {
                hovermodoptions = !hovermodoptions;
                change = true;
            }

            int hoveridxnoclamp = int(mouse.y - scroll) / 100;
            int hoveridx = std::max(0, std::min(hoveridxnoclamp, (int)mods.size() - 1));
            if (modhover != hoveridx)
            {
                modhover = hoveridx;
                change = true;
            }
            if (mouse.x > 368 && hoveridxnoclamp == hoveridx)
            {
                if (!hovermove)
                {
                    hovermove = true;
                    change = true;
                }
                if (hovertopmove != ((mouse.y - int(scroll)) % 100 < 50))
                {
                    hovertopmove = !hovertopmove;
                    change = true;
                }
            }
            else
            {
                if (mouse.x > 300)
                {
                    if (hovertopoption != ((mouse.y - int(scroll)) % 100 < 50))
                    {
                        hovertopoption = !hovertopoption;
                        change = true;
                    }
                }
            }
        }

        if (confighover != -1)
        {
            confighover = -1;
            change = true;
        }
    }
    else
    {
        if (modselected != -1)
        {
            int hoveridxnoclamp = int(mouse.y - cscroll) / 50;
            int hoveridx = std::max(0, std::min(hoveridxnoclamp, (int)mods[modselected].config.size() - 1));

            if (confighover != hoveridx)
            {
                confighover = hoveridx;
                change = true;
            }
        }

        if (modhover != -1)
        {
            modhover = -1;
            change = true;
        }

        if (hoverinject != mouse.y < 255)
        {
            hoverinject = mouse.y < 255;
            change = true;
        }
    }

    return change;
}

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
