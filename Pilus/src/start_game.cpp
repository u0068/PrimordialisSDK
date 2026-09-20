#include <windows.h>
#include <tchar.h>
#include <tlhelp32.h>
#include <fstream>
#include "mod_loader.h"

DWORD GetProcessByName(const char* lpProcessName) {
    PROCESSENTRY32 ProcList{};
    ProcList.dwSize = sizeof(ProcList);

    const HANDLE& hProcList = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hProcList == INVALID_HANDLE_VALUE)
        return -1;

    if (Process32First(hProcList, &ProcList))
        do
            if (lstrcmpA(ProcList.szExeFile, lpProcessName) == 0) {
                CloseHandle(hProcList);
                return ProcList.th32ProcessID;
            }
        while (Process32Next(hProcList, &ProcList));

    CloseHandle(hProcList);
    return -1;
}

bool IsProcessRunning(const char* processName) {
    PROCESSENTRY32 entry;
    entry.dwSize = sizeof(PROCESSENTRY32);

    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snapshot == INVALID_HANDLE_VALUE)
        return false;

    if (Process32First(snapshot, &entry))
        do
            if (_tcsicmp(entry.szExeFile, processName) == 0) // Case-insensitive comparison
            {
                CloseHandle(snapshot);
                return true;
            }
        while (Process32Next(snapshot, &entry));

    CloseHandle(snapshot);
    return false;
}

void ModManager::StartGame() {
    constexpr const char* lpprocessname = "primordialis.exe";

    // we assume modloader is running inside primordialis working directory

    STARTUPINFO startI{0};
    PROCESS_INFORMATION procI{nullptr};

    if (!IsProcessRunning(lpprocessname)) {
        char cmdLine[] = "primordialis.exe --steamless --autoreload --customdll \"mods/Nucleus.dll\" --mod-folder .";
        if (!CreateProcessA(nullptr, cmdLine, nullptr, nullptr, FALSE,
                            SYNCHRONIZE, nullptr, nullptr, &startI, &procI)) {
            console_log << "Failed to start primordialis: ";
            console_log << std::to_string(GetLastError());
            console_log << "\n";
            return;
        }
    }

    CloseHandle(procI.hThread);
    CloseHandle(procI.hProcess);
}
