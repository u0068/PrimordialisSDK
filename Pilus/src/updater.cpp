#include "updater.h"
#include "modloader.h"
#include <iostream>
#include <regex>
#include <urlmon.h>
#include "../external/miniz-cpp/zip_file.hpp"
#pragma comment(lib, "urlmon.lib")

// TODO: Make cmake generate the version number automatically
constexpr Version PILUS_VERSION{0, 4, 0};

static std::optional<Version> ParseVersion(const std::string &tag)
{
    std::cout
        << "Parsing Version: ";

    std::cout
        << tag
        << "\n";

    Version version{0,0,0};

    std::regex tag_regex(R"((\d+)(?:.(\d+))?(?:.(\d+))?)");

    std::smatch match;
    if (std::regex_search(tag, match, tag_regex)) {
        std::cout << "Tag: " << match[0].str() << "\n";

        version.major = std::stoi(match[1].str());
        version.minor = std::stoi(match[2].matched ? match[2].str() : "0");
        version.patch = std::stoi(match[3].matched ? match[3].str() : "0");

        std::cout << "Major: " << version.major << "\n";
        std::cout << "Minor: " << version.minor << "\n";
        std::cout << "Patch: " << version.patch << "\n";

        return version;
    }

    std::cout
        << "Failed to Parse Version\n";

    return std::nullopt;
}

void ExtractZip(
    const fs::path& zip,
    const fs::path& destination)
{
    std::cout << "Extracting " << zip << " to " << destination << "\n";
    miniz_cpp::zip_file file(zip.string());
    for (const auto& name : file.namelist())
    {
        fs::path output = destination / name;

        // Directory entry
        if (name.back() == '/')
        {
            create_directories(output);
            continue;
        }

        // Ensure parent directory exists
        create_directories(output.parent_path());
    }
    file.extractall(destination.string());
}

bool DownloadFromURL(
    const std::string &source_path,
    const fs::path &dest_path) {

    std::cout
    << "Downloading " << source_path << "...\n";

    HRESULT hr = URLDownloadToFileA(nullptr, source_path.c_str(), dest_path.string().c_str(), 0, nullptr);
    if (SUCCEEDED(hr)) {
        std::cout << "Downloaded to " << dest_path << "\n";
        return true;
    }
    std::cout << "Download failed with error: " << hr << "\n";
    return false;
}

bool DownloadVersionManifest(ModManager &manager)
{
    DownloadFromURL(manager.version_manifest_url, manager.version_manifest_path);

    auto file = ReadFile(manager.version_manifest_path);

    if (file.empty())
    {
        printf("Verson manifest not found, unable to check compatibility or download updates.\n");
        return false;
    }

    manager.version_manifest = json::parse(file);

    json mods_json = manager.version_manifest["mods"];

    return true;
}

bool CheckAndUpdate(
    ModManager &manager,
    const char* name,
    const fs::path& update_path)
{
    std::cout
        << "Checking for " << name << " updates...\n";

    json version_json = manager.version_manifest[name];

    if (version_json.empty())
    {
        std::cout << "Version JSON for " << name << " not found, unable to update.\n";
        return false;
    }

    std::string latest_version = version_json["latest_version"].get<std::string>();

    std::stringstream ss;
    ss << name << "_installed_version";
    auto installed_version_key = ss.str();

    json installed_version_json = manager.pilus_config[installed_version_key];
    std::string current_version = "0.0.0";
    if (!installed_version_json.empty())
    {
        current_version = installed_version_json.get<std::string>();
    }

    std::cout
        << "Current " << name << " version: " << current_version << "\n";

    std::cout
        << "Latest " << name << " version: " << latest_version << "\n";

    if (!(*ParseVersion(latest_version) > *ParseVersion(current_version)))
    {
        std::cout
            << name << " is up to date.\n";

        return false;
    }

    std::cout
        << "Downloading new " << name << " version: "
        << version_json["latest_version"].get<std::string>()
        << "\n";

    auto download_path = version_json["versions"][latest_version]["download_url"].get<std::string>();
    if(DownloadFromURL(download_path, update_path))
    {
        manager.pilus_config[installed_version_key] = latest_version;
        return true;
    }
    return false;
}

bool UpdatePilus(ModManager &manager)
{
    manager.pilus_config["pilus_installed_version"] = PILUS_VERSION.to_string();

    fs::path pilus_path =
        fs::absolute(
            fs::path("Pilus.exe"));

    fs::path update_path =
        pilus_path.parent_path() /
        "Pilus.new.exe";

    if (!CheckAndUpdate(manager, "pilus", update_path))
        return false;

    // Find our own PID and launch the updater.

    DWORD pid = GetCurrentProcessId();

    fs::path updater_path=
        pilus_path.parent_path() /
        "PilusUpdater.exe";

    if (!CheckAndUpdate(manager, "pilus_updater", updater_path))
    {
        DeleteFileW(update_path.c_str());
        return false;
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

bool UpdatePDB(
    ModManager &manager,
    const fs::path& game_path)
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
    printf("AVX PDB downloaded successfully\n");

    // SSE3
    pdb_file_name = "primordialis_sse3_" + std::to_string(actual_build_id) + ".pdb";
    pdb_source_path = "https://raw.githubusercontent.com/u0068/PrimordialisSDK/master/PDBs/" + pdb_file_name;
    if (!DownloadFromURL(pdb_source_path, game_path / "primordialis_sse3.pdb"))
    {
        printf("SSE3 PDB download failed\n");
        return false;
    }
    printf("SSE3 PDB downloaded successfully\n");

    std::cout << "Installed all PBDs for build " << actual_build_id << " successfully!\n";
    manager.pilus_config["installed_pdb_build_id"] = actual_build_id;
    manager.SavePilusConfig();
    return true;
}

void CreateDirectories(ModManager &manager)
{
    if (!exists(manager.pilus_files_path))
    {
        create_directory(manager.pilus_files_path);
        manager.log.append("Created pilus files directory\n");
    }

    if (exists(manager.config_path))
    {
        manager.LoadPilusConfig();
    }

    if (!exists(manager.mod_path))
    {
        create_directory(manager.mod_path);
        manager.log.append("Created mod directory\n");
    }

    if (!exists(manager.luasome_path))
    {
        create_directory(manager.luasome_path);
        manager.log.append("Created luasome directory\n");
    }
}

void UpdateAll(ModManager &manager)
{
    CreateDirectories(manager);

    if (!DownloadVersionManifest(manager))
        return;

    UpdatePilus(manager);

    CheckAndUpdate(manager, "nucleus", manager.mod_path / "Nucleus.dll");

    fs::path luasome_temp_zip_path{manager.pilus_files_path / "luasome_tmp.zip"};
    if (CheckAndUpdate(manager, "luasome", luasome_temp_zip_path))
    {
        ExtractZip(luasome_temp_zip_path, manager.luasome_path);
        fs::remove(luasome_temp_zip_path);
    }

    UpdatePDB(manager, fs::current_path());
}