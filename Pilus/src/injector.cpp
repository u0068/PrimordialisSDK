#include <windows.h>
#include <tchar.h>
#include <tlhelp32.h>
#include <fstream>
#include "modloader.h"

DWORD GetProcessByName(const char* lpProcessName)
{
    PROCESSENTRY32 ProcList{};
    ProcList.dwSize = sizeof(ProcList);

    const HANDLE &hProcList = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
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

std::filesystem::path GetExePath()
{
    wchar_t buffer[MAX_PATH];
    DWORD len = GetModuleFileNameW(nullptr, buffer, MAX_PATH);
    if (len == 0)
        throw std::runtime_error("Failed to get executable path");
    return buffer;
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

    const HANDLE &hTargetProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwProcessID);
    if (hTargetProcess == INVALID_HANDLE_VALUE)
    {
        elog.append("An error occurred when trying to open the target process.\n");
        return -1;
    }

    log.append("[PROCESS INJECTION]\n");
    log.append("Process opened successfully.\n");

    const LPVOID &lpPathAddress = VirtualAllocEx(hTargetProcess, nullptr, lstrlenA(lpFullDLLPath) + 1, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
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

    const FARPROC &lpFunctionAddress = GetProcAddress(hModule, "LoadLibraryA");
    if (lpFunctionAddress == nullptr)
    {
        elog.append("An error occurred when trying to get \"LoadLibraryA\" address.\n");
        return -1;
    }

    log.append("LoadLibraryA address at 0x");
    log.append(std::to_string((UINT)(uintptr_t)lpFunctionAddress));
    log.append("\n");

    const HANDLE &hThreadCreationResult = CreateRemoteThread(hTargetProcess, nullptr, 0, (LPTHREAD_START_ROUTINE)lpFunctionAddress, lpPathAddress, 0, nullptr);
    if (hThreadCreationResult == INVALID_HANDLE_VALUE)
    {
        elog.append("An error occurred when trying to create the thread in the target process.\n");
        return -1;
    }

    log.append("DLL Injected !\n");

    WaitForSingleObject(hThreadCreationResult, INFINITE);
    CloseHandle(hThreadCreationResult);

    log.append("Mod injected !\n");

    VirtualFreeEx(hTargetProcess, lpPathAddress, 0, MEM_RELEASE);
    CloseHandle(hTargetProcess);

    return 0;
}

void ModManager::InjectAll()
{
    log.clear();
    error_log.clear();

    constexpr const char *lpprocessname = "primordialis.exe";
    int failed = 0;

    // we assume modloader is running inside primordialis working directory

    bool ownProcess = false;
    STARTUPINFO startI{0};
    PROCESS_INFORMATION procI{nullptr};

    if (!IsProcessRunning(lpprocessname))
    {
        char cmdLine[] = "primordialis.exe --steamless --autoreload";
        ownProcess = true;
        if (!CreateProcessA(nullptr, cmdLine, nullptr, nullptr, FALSE, CREATE_SUSPENDED | SYNCHRONIZE, nullptr, nullptr, &startI, &procI))
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

    shared->count = 0;

    for (auto & mod : mods)
    {
        //skip runtime api in modlist because should be last
        if (mod.dll_path.filename().string() == "Nucleus.dll")
            continue;

        if (!mod.enabled)
        {
            log.append("Encountered disabled mod, skipping...\n");
            continue;
        }

        std::string injectPath = mod.dll_path.string();
        char dllpath[MAX_PATH];

        if (Inject(injectPath.c_str(), dllpath, lpprocessname, log, error_log) != 0)
        {
            log.append("[INJECTION FAILED] (");
            log.append(mod.dll_path.filename().string());
            log.append(") Skipped\n");

            Render();
            failed++;
            continue;
        }
        log.append("[INJECTION SUCCESS] (");
        log.append(mod.dll_path.filename().string());
        log.append(")\n");

        strcpy_s(
            shared->mods[shared->count++].name,
            mod.dll_path.filename().string().c_str()
        );

        Render();
    }
    if (failed)
        log.append("Failed " + std::to_string(failed) + "/" + std::to_string(mods.size()) + " mods\n");
    else
        log.append("Mod injection finished successfully\n");
    Render();

    // load nucleus api.dll last after all other mods
    if (std::filesystem::exists("mods/Nucleus.dll"))
    {
        char dllpath[MAX_PATH];
        if (Inject("mods/Nucleus.dll", dllpath, lpprocessname, log, log) != 0)
        {
            log.append("Failed to inject nucleus runtime API, major issues may occur !\n");
            failed++;
        }
    }

    if (ownProcess)
    {
        // Sleep(1000); // Sleep to give you time to attach a debugger

        HANDLE nucleusModsInitialisedEvent =
        OpenEventA(
            SYNCHRONIZE,
            FALSE,
            "Nucleus_ModsInitialised");

        WaitForSingleObject(
        nucleusModsInitialisedEvent,
        INFINITE);

        ResumeThread(procI.hThread);

        CloseHandle(procI.hThread);
        CloseHandle(procI.hProcess);
    }
}