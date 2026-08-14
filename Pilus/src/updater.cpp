#include "updater.h"
#include "modloader.h"
#include <iostream>
#include <regex>
#include <urlmon.h>
#include "../external/miniz-cpp/zip_file.hpp"
#pragma comment(lib, "urlmon.lib")

// TODO: Make cmake generate the version number automatically
constexpr Version PILUS_VERSION{0, 4, 1};

static std::optional<Version> ParseVersion(const std::string &tag)
{
    console_log << "Parsing Version: ";
    console_log << tag << "\n";

    Version version{0,0,0};

    std::regex tag_regex(R"((\d+)(?:.(\d+))?(?:.(\d+))?)");

    std::smatch match;
    if (std::regex_search(tag, match, tag_regex)) {
        // console_log << "Tag: " << match[0].str() << "\n";

        version.major = std::stoi(match[1].str());
        version.minor = std::stoi(match[2].matched ? match[2].str() : "0");
        version.patch = std::stoi(match[3].matched ? match[3].str() : "0");

        // console_log << "Major: " << version.major << "\n";
        // console_log << "Minor: " << version.minor << "\n";
        // console_log << "Patch: " << version.patch << "\n";

        return version;
    }

    console_log << err << "Failed to Parse Version\n";

    return std::nullopt;
}

void ExtractZip(
    const fs::path& zip,
    const fs::path& destination)
{
    console_log << "Extracting " << zip << " to " << destination << "\n";
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

    console_log << "Downloading " << source_path << "...\n";

    HRESULT hr = URLDownloadToFileA(nullptr, source_path.c_str(), dest_path.string().c_str(), 0, nullptr);
    if (SUCCEEDED(hr)) {
        console_log << "Downloaded to " << dest_path << "\n";
        return true;
    }
    console_log << err << "Download failed with error: " << hr << "\n";
    return false;
}

bool DownloadVersionManifest()
{
    DownloadFromURL(ModManager::version_manifest_url, ModManager::version_manifest_path);

    auto file = ReadFile(ModManager::version_manifest_path);

    if (file.empty())
    {
        console_log << err << "Version manifest not found, unable to check compatibility or download updates.\n";
        return false;
    }

    ModManager::version_manifest = json::parse(file);

    json mods_json = ModManager::version_manifest["mods"];

    return true;
}

bool CheckAndUpdate(
    const char* name,
    const fs::path& update_path,
    const fs::path& check_path = "")
{
    console_log << "Checking for " << name << " updates...\n";

    json version_json = ModManager::version_manifest[name];

    if (version_json.empty())
    {
        console_log << err << "Version JSON for " << name << " not found, unable to update.\n";
        return false;
    }

    std::string latest_version = version_json["latest_version"].get<std::string>();

    std::stringstream ss;
    ss << name << "_installed_version";
    auto installed_version_key = ss.str();

    if (check_path != "" and !exists(check_path))
    {
        console_log << name << " not installed!\n";
    }
    else
    {
        json installed_version_json = ModManager::pilus_config[installed_version_key];
        std::string installed_version = "0.0.0";
        if (!installed_version_json.empty())
        {
            installed_version = installed_version_json.get<std::string>();
        }

        console_log << "Current " << name << " version: " << installed_version << "\n";
        console_log << "Latest " << name << " version: " << latest_version << "\n";

        if (!(*ParseVersion(latest_version) > *ParseVersion(installed_version)))
        {
            console_log << name << " is up to date.\n";
            return false;
        }
    }

    console_log << "Downloading new " << name << " version: "
        << version_json["latest_version"].get<std::string>()
        << "\n";

    auto download_path = version_json["versions"][latest_version]["download_url"].get<std::string>();
    if(DownloadFromURL(download_path, update_path))
    {
        ModManager::pilus_config[installed_version_key] = latest_version;
        return true;
    }
    return false;
}

bool UpdatePilus()
{
    ModManager::pilus_config["Pilus_installed_version"] = PILUS_VERSION.to_string();

    fs::path pilus_path =
        absolute(
            fs::path("Pilus.exe"));

    fs::path update_path =
        pilus_path.parent_path() /
        "Pilus.new.exe";

    if (!CheckAndUpdate("Pilus", update_path))
    {
        return false;
    }

    // Find our own PID and launch the updater.

    DWORD pid = GetCurrentProcessId();

    fs::path updater_path=
        pilus_path.parent_path() /
        "PilusUpdater.exe";

    if (!CheckAndUpdate("PilusUpdater", updater_path, updater_path))
    {
        DeleteFileW(update_path.c_str());
        return false;
    }

    std::cout << console_log.str();

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
        console_log
            << err << "Failed to start updater: "
            << GetLastError()
            << "\n";

        DeleteFileW(updater_path.c_str());

        return false;
    }

    Sleep(200000);

    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);

    // The updater now owns the update process.
    // We MUST exit Pilus, or reality will collapse.

    ExitProcess(0);

    // This ends up never actually returning true because if everything goes right Pilus needs to close anyway.
}

int CheckSteamBuild( const fs::path& game_path)
{
    const char* manifest_filename = "appmanifest_3011360.acf";

    auto steam_manifest_path =
        game_path.parent_path().parent_path() / manifest_filename;

    console_log << "steam manifest path: " << steam_manifest_path << "\n";

    auto file = ReadFile(steam_manifest_path);

    if (file.empty())
    {
        console_log << err << "Failed to read manifest\n";
        return 0;
    }

    std::string key = "\"buildid\"";

    size_t pos = file.find(key);

    if (pos == std::string::npos)
    {
        console_log << err << "No buildid found\n";
        return 0;
    }

    pos += key.length();

    while (pos < file.size() && std::isspace(file[pos]))
        pos++;

    if (file[pos] != '"')
    {
        console_log << err << "Invalid buildid format\n";
        return 0;
    }

    pos++;

    size_t end = file.find('"', pos);

    if (end == std::string::npos)
        return 0;

    std::string build = file.substr(pos, end - pos);

    console_log << "Build ID: " << build << "\n";

    return std::stoi(build);
}

bool UpdatePDB(
    const fs::path& game_path)
{
    int actual_build_id = CheckSteamBuild(game_path);
    if (actual_build_id == 0)
        return false;

    int installed_pdb_build_id{0};
    if (!ModManager::pilus_config.contains("installed_pdb_build_id"))
    {
        console_log << err << "Installed PDB build ID not found\n";
    } else
    {
        installed_pdb_build_id = ModManager::pilus_config["installed_pdb_build_id"].get<int>();
    }

    if (!fs::exists("primordialis_avx.pdb") || !fs::exists("primordialis_sse3.pdb"))
    {
        console_log << err << "PDBs not found\n";
    }
    else
    {
        if (actual_build_id == installed_pdb_build_id)
        {
            console_log << "PDBs found, correct build ID" << installed_pdb_build_id << "\n";
            return false;
        }
    }

    // AVX
    std::string pdb_file_name = "primordialis_avx_" + std::to_string(actual_build_id) + ".pdb";
    std::string pdb_source_path = "https://raw.githubusercontent.com/u0068/PrimordialisSDK/master/PDBs/" + pdb_file_name;
    if (!DownloadFromURL(pdb_source_path, game_path / "primordialis_avx.pdb"))
    {
        console_log << err << "AVX PDB download failed\n";
        return false;
    }
    console_log << "AVX PDB downloaded successfully\n";

    // SSE3
    pdb_file_name = "primordialis_sse3_" + std::to_string(actual_build_id) + ".pdb";
    pdb_source_path = "https://raw.githubusercontent.com/u0068/PrimordialisSDK/master/PDBs/" + pdb_file_name;
    if (!DownloadFromURL(pdb_source_path, game_path / "primordialis_sse3.pdb"))
    {
        console_log << err << "SSE3 PDB download failed\n";
        return false;
    }
    console_log << "SSE3 PDB downloaded successfully\n";

    console_log << "Installed all PBDs for build " << actual_build_id << " successfully!\n";
    ModManager::pilus_config["installed_pdb_build_id"] = actual_build_id;
    ModManager::SavePilusConfig();
    return true;
}

void CreateDirectories()
{
    if (!exists(ModManager::pilus_files_path))
    {
        create_directory(ModManager::pilus_files_path);
        console_log << "Created pilus_files directory\n";
    }

    if (exists(ModManager::config_path))
    {
        ModManager::LoadPilusConfig();
    }

    if (!exists(ModManager::mod_path))
    {
        create_directory(ModManager::mod_path);
        console_log << "Created mod directory\n";
    }

    if (!exists(ModManager::luasome_path))
    {
        create_directory(ModManager::luasome_path);
        console_log << "Created luasome directory\n";
    }
}

void UpdateAll()
{
    CreateDirectories();

    if (!DownloadVersionManifest())
        return;

    UpdatePilus();

    CheckAndUpdate("Nucleus", ModManager::mod_path / "Nucleus.dll", ModManager::mod_path / "Nucleus.dll");

    fs::path luasome_temp_zip_path{ModManager::pilus_files_path / "luasome_tmp.zip"};
    if (CheckAndUpdate("Luasome", luasome_temp_zip_path, ModManager::luasome_path))
    {
        ExtractZip(luasome_temp_zip_path, ModManager::luasome_path);
        fs::remove(luasome_temp_zip_path);
    }

    UpdatePDB(fs::current_path());
}