#include <windows.h>
#include <string>
#include <filesystem>
#include <iostream>
#include <vector>

namespace fs = std::filesystem;

static bool WaitForProcessExit(DWORD pid)
{
    HANDLE process = OpenProcess(
        SYNCHRONIZE,
        FALSE,
        pid
    );

    if (!process)
        return true;

    WaitForSingleObject(process, INFINITE);
    CloseHandle(process);

    return true;
}

static bool ReplaceFile(
    const fs::path& target,
    const fs::path& replacement)
{
    fs::path backup = target;
    backup += L".old";

    // Remove an old backup if one exists.
    DeleteFileW(backup.c_str());

    // Move the currently running executable out of the way.
    if (!MoveFileExW(
            target.c_str(),
            backup.c_str(),
            MOVEFILE_WRITE_THROUGH))
    {
        std::wcerr
            << L"Failed to move old Pilus: "
            << GetLastError()
            << L"\n";

        return false;
    }

    // Put the new executable in its place.
    if (!MoveFileExW(
            replacement.c_str(),
            target.c_str(),
            MOVEFILE_WRITE_THROUGH))
    {
        std::wcerr
            << L"Failed to install new Pilus: "
            << GetLastError()
            << L"\n";

        // Try to restore the old version.
        MoveFileExW(
            backup.c_str(),
            target.c_str(),
            MOVEFILE_WRITE_THROUGH
        );

        return false;
    }

    // The new version is installed successfully.
    DeleteFileW(backup.c_str());

    return true;
}

static bool StartPilus(
    const fs::path& executable)
{
    std::wstring commandLine =
        L"\"" + executable.wstring() + L"\"";

    STARTUPINFOW si{};
    si.cb = sizeof(si);

    PROCESS_INFORMATION pi{};

    // CreateProcess may modify the command line,
    // so give it a writable buffer.
    std::vector<wchar_t> buffer(
        commandLine.begin(),
        commandLine.end()
    );

    buffer.push_back(L'\0');

    if (!CreateProcessW(
            nullptr,
            buffer.data(),
            nullptr,
            nullptr,
            FALSE,
            0,
            nullptr,
            executable.parent_path().c_str(),
            &si,
            &pi))
    {
        std::wcerr
            << L"Failed to restart Pilus: "
            << GetLastError()
            << L"\n";

        return false;
    }

    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);

    return true;
}

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::wcerr
            << L"Usage:\n"
            << L"PilusUpdater.exe <pid> <Pilus.exe> <Pilus.new.exe>\n";

        return 1;
    }

    DWORD pid = std::stoul(argv[1], nullptr, 10);

    fs::path target = argv[2];
    fs::path replacement = argv[3];

    std::wcout << L"Waiting for Pilus to exit...\n";

    WaitForProcessExit(pid);

    // Give Windows a moment to release file handles.
    Sleep(100);

    if (!fs::exists(replacement))
    {
        std::wcerr
            << L"Update file does not exist.\n";

        return 1;
    }

    std::wcout << L"Installing update...\n";

    if (!ReplaceFile(target, replacement))
    {
        std::wcerr
            << L"Failed to replace Pilus.\n";

        return 1;
    }

    std::wcout << L"Update installed.\n";

    if (!StartPilus(target))
    {
        std::wcerr
            << L"Failed to restart Pilus.\n";

        return 1;
    }

    return 0;
}

int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow)
{
    return main(__argc, __argv);
}