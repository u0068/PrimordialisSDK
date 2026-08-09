#include "downloader.h"
#include "modloader.h"

// TODO: Make cmake generate the version number automatically
constexpr Version PILUS_VERSION{0, 2, 1};

bool CheckAndUpdate()
{
    std::cout
        << "Checking for Pilus updates...\n";

    auto release = GetLatestRelease();

    if (!release)
    {
        std::cout
            << "Could not check for updates.\n";

        return false;
    }

    auto version =
        ParseVersion(
            (*release)["tag_name"]
                .get<std::string>());

    if (!version)
    {
        std::cout
            << "Invalid release version.\n";

        return false;
    }

    Version current = PILUS_VERSION;

    if (!(*version > current))
    {
        std::cout
            << "Pilus is up to date.\n";

        return false;
    }

    std::cout
        << "New Pilus version available: "
        << (*release)["tag_name"]
        << "\n";

    fs::path pilus_path =
        fs::absolute(
            fs::path("Pilus.exe"));

    fs::path update_path =
        pilus_path.parent_path() /
        "Pilus.new.exe";

    DownloadAsset(release, "Pilus.exe", update_path);

    // Find our own PID and launch the updater.

    DWORD pid = GetCurrentProcessId();

    fs::path updater_path=
        pilus_path.parent_path() /
        "PilusUpdater.exe";

    if (!fs::exists(updater_path))
    {
        std::cout
            << "PilusUpdater.exe not found.\n";

        std::cout
            << "Downloading PilusUpdater from Github.\n";

        if (!DownloadAsset(release, "PilusUpdater.exe", updater_path))
        {
            DeleteFileW(update_path.c_str());
            return false;
        }
    }

    std::wstring commandLine =
        L"\"" + updater_path.wstring() + L"\" " +
        std::to_wstring(pid) + L" \"" +
        pilus_path.wstring() + L"\" \"" +
        update_path.wstring() + L"\"";

    STARTUPINFOW si{};
    si.cb = sizeof(si);

    PROCESS_INFORMATION pi{};

    std::vector<wchar_t> buffer(
        commandLine.begin(),
        commandLine.end());

    buffer.push_back(L'\0');

    if (!CreateProcessW(
            nullptr,
            buffer.data(),
            nullptr,
            nullptr,
            FALSE,
            0,
            nullptr,
            updater_path.parent_path().c_str(),
            &si,
            &pi))
    {
        std::cout
            << "Failed to start updater: "
            << GetLastError()
            << "\n";

        DeleteFileW(updater_path.c_str());

        return false;
    }

    Sleep(2000);

    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);

    // The updater now owns the update process.
    // We MUST exit Pilus, or reality will collapse.

    ExitProcess(0);

    // This ends up never actually returning true because if everything goes right Pilus needs to close anyway.
}

int CheckSteamBuild(const fs::path& game_path)
{
    const char* manifest_filename = "appmanifest_3011360.acf";

    auto steam_manifest_path =
        game_path.parent_path().parent_path() / manifest_filename;

    printf("steam manifest path: %ls\n", steam_manifest_path.c_str());

    auto file = ReadFile(steam_manifest_path);

    if (file.empty())
    {
        printf("Failed to read manifest\n");
        return 0;
    }

    std::string key = "\"buildid\"";

    size_t pos = file.find(key);

    if (pos == std::string::npos)
    {
        printf("No buildid found\n");
        return 0;
    }

    pos += key.length();

    while (pos < file.size() && std::isspace(file[pos]))
        pos++;

    if (file[pos] != '"')
    {
        printf("Invalid buildid format\n");
        return 0;
    }

    pos++;

    size_t end = file.find('"', pos);

    if (end == std::string::npos)
        return 0;

    std::string build = file.substr(pos, end - pos);

    printf("Build ID: %s\n", build.c_str());

    return std::stoi(build);
}

bool UpdatePDB(const fs::path& game_path, ModManager &manager)
{
    int actual_build_id = CheckSteamBuild(game_path);
    if (actual_build_id == 0)
        return false;

    int installed_pdb_build_id{0};
    if (!manager.pilus_config.contains("installed_pdb_build_id"))
    {
        printf("Installed PDB build ID not found\n");
    } else
    {
        installed_pdb_build_id = manager.pilus_config["installed_pdb_build_id"].get<int>();
    }

    if (!fs::exists("primordialis_avx.pdb") || !fs::exists("primordialis_sse3.pdb"))
    {
        printf("PDBs not found\n");
    }
    else
    {
        if (actual_build_id == installed_pdb_build_id)
        {
            printf("PDBs found, correct build ID %i\n", installed_pdb_build_id);
            return false;
        }
    }

    // AVX
    std::string pdb_file_name = "primordialis_avx_" + std::to_string(actual_build_id) + ".pdb";
    std::string pdb_source_path = "https://raw.githubusercontent.com/u0068/PrimordialisSDK/master/PDBs/" + pdb_file_name;
    if (!DownloadFromURL(pdb_source_path, game_path / "primordialis_avx.pdb"))
    {
        printf("AVX PDB download failed\n");
        return false;
    }
    printf("AVX PDB download succeeded\n");

    // SSE3
    pdb_file_name = "primordialis_sse3_" + std::to_string(actual_build_id) + ".pdb";
    pdb_source_path = "https://raw.githubusercontent.com/u0068/PrimordialisSDK/master/PDBs/" + pdb_file_name;
    if (!DownloadFromURL(pdb_source_path, game_path / "primordialis_sse3.pdb"))
    {
        printf("SSE3 PDB download failed\n");
        return false;
    }
    printf("SSE3 PDB download succeeded\n");

    std::cout << "Installed all PBDs for build " << actual_build_id << " successfully!\n";
    manager.pilus_config["installed_pdb_build_id"] = actual_build_id;
    manager.SaveConfig();
    return true;
}