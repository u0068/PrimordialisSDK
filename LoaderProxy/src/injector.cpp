#include "mod_loader.h"
#include <tlhelp32.h>
#include <fstream>

DWORD GetProcessByName(const char* lpProcessName)
{
    PROCESSENTRY32 ProcList{};
    ProcList.dwSize = sizeof(ProcList);

    const HANDLE &hProcList = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hProcList == INVALID_HANDLE_VALUE)
        return -1;

    if (Process32First(hProcList, &ProcList))
        do
            if (lstrcmpA(ProcList.szExeFile, lpProcessName) == 0)
            {
                CloseHandle(hProcList);
                return ProcList.th32ProcessID;
            }
        while (Process32Next(hProcList, &ProcList));

    CloseHandle(hProcList);
    return -1;
}

// bool IsProcessRunning(const char* processName)
// {
//     PROCESSENTRY32 entry;
//     entry.dwSize = sizeof(PROCESSENTRY32);
//
//     HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
//     if (snapshot == INVALID_HANDLE_VALUE)
//         return false;
//
//     if (Process32First(snapshot, &entry))
//         do
//             if (_tcsicmp(entry.szExeFile, processName) == 0) // Case-insensitive comparison
//             {
//                 CloseHandle(snapshot);
//                 return true;
//             }
//         while (Process32Next(snapshot, &entry));
//
//     CloseHandle(snapshot);
//     return false;
// }

// std::filesystem::path GetExePath()
// {
//     wchar_t buffer[MAX_PATH];
//     DWORD len = GetModuleFileNameW(nullptr, buffer, MAX_PATH);
//     if (len == 0)
//         throw std::runtime_error("Failed to get executable path");
//     return buffer;
// }

bool IsDLL(const std::string& filePath)
{
    std::ifstream f(filePath, std::ios::binary);
    if (!f.is_open())
    {
        Log() << err << "Mod could not be opened\n";
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

int Inject(const char* lpDLLName, char* lpFullDLLPath, const char* lpProcessName)
{
    const DWORD dwProcessID = GetProcessByName(lpProcessName);

    if (dwProcessID == (DWORD)-1)
    {
        Log() << err << "An error occurred when trying to find the target process. Is Primordialis open?\n";
        return -1;
    }

    Log() << "[DLL Injector]\n";

    const DWORD dwFullPathResult = GetFullPathNameA(lpDLLName, MAX_PATH, lpFullDLLPath, nullptr);
    if (dwFullPathResult == 0)
    {
        Log() << err << "Attempted to load a missing mod.\n";
        return -1;
    }

    if (!IsDLL(lpFullDLLPath))
    {
        Log() << err << "Attempted to load an invalid .DLL\n";
        return -1;
    }

    const HANDLE &hTargetProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwProcessID);
    if (!hTargetProcess)
    {
        Log() << err << "An error occurred when trying to open the target process.\n";
        return -1;
    }

    Log() << "[PROCESS INJECTION]\n";
    Log() << "Process opened successfully.\n";

    const LPVOID &lpPathAddress = VirtualAllocEx(hTargetProcess, nullptr,
        lstrlenA(lpFullDLLPath) + 1, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (lpPathAddress == nullptr)
    {
        Log() << err << "An error occurred when trying to allocate memory in the target process.\n";
        return -1;
    }

    Log() << "Memory allocate at 0x";
    Log() << std::to_string((UINT)(uintptr_t)lpPathAddress);
    Log() << "\n";

    const DWORD dwWriteResult = WriteProcessMemory(hTargetProcess, lpPathAddress, lpFullDLLPath,
        lstrlenA(lpFullDLLPath) + 1, nullptr);
    if (dwWriteResult == 0)
    {
        Log() << err << "An error occurred when trying to write the DLL path in the target process.\n";
        return -1;
    }

    Log() << "DLL path written successfully.\n";

    const HMODULE hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == INVALID_HANDLE_VALUE || hModule == nullptr)
        return -1;

    const FARPROC &lpFunctionAddress = GetProcAddress(hModule, "LoadLibraryA");
    if (lpFunctionAddress == nullptr)
    {
        Log() << err << "An error occurred when trying to get \"LoadLibraryA\" address.\n";
        return -1;
    }

    Log() << "LoadLibraryA address at 0x";
    Log() << std::to_string((UINT)(uintptr_t)lpFunctionAddress);
    Log() << "\n";

    const HANDLE &hThreadCreationResult = CreateRemoteThread(hTargetProcess, nullptr, 0,
        (LPTHREAD_START_ROUTINE)lpFunctionAddress, lpPathAddress, 0, nullptr);
    if (!hThreadCreationResult)
    {
        Log() << err << "An error occurred when trying to create the thread in the target process.\n";
        return -1;
    }

    Log() << "DLL Injected !\n";

    WaitForSingleObject(hThreadCreationResult, INFINITE);
    CloseHandle(hThreadCreationResult);

    Log() << "Mod injected !\n";

    VirtualFreeEx(hTargetProcess, lpPathAddress, 0, MEM_RELEASE);
    CloseHandle(hTargetProcess);

    return 0;
}

void ModManager::InjectAll()
{
    constexpr const char *lpprocessname = "primordialis.exe";
    int failed = 0;

    for (auto & mod : mods)
    {
        if (not mod.is_cpp())
            continue;

        if (!mod.enabled)
        {
            // Log() << "Encountered disabled mod, skipping...\n";
            continue;
        }

        std::string injectPath = mod.dll_path.string();
        char dllpath[MAX_PATH];

        if (Inject(injectPath.c_str(), dllpath, lpprocessname) != 0)
        {
            Log() << err << "[INJECTION FAILED] (";
            Log() << mod.dll_path.filename().string();
            Log() << ") Skipped\n";

            failed++;
            continue;
        }
        Log() << "[INJECTION SUCCESS] (";
        Log() << mod.dll_path.filename().string();
        Log() << ")\n";

    }
    if (failed)
        Log() << err << "Failed " + std::to_string(failed) + "/" + std::to_string(mods.size()) + " mods\n";
    else
        Log() << "Mod injection finished successfully!\n";

    // Sleep(1000); // Sleep to give you time to attach a debugger
}