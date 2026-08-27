#include "update_manager.h"
#include "mod_loader.h"
#include <zip_file.hpp>
#include <regex>
#include <urlmon.h>
#pragma comment(lib, "urlmon.lib")

// TODO: Make cmake increment the version number automatically
constexpr Version PILUS_VERSION{0, 6, 0};

static std::optional<Version> ParseVersion(const std::string &tag)
{
    // console_log << "Parsing Version: ";
    // console_log << tag << "\n";

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

    console_log << err << "Failed to Parse Version: "<< tag <<"\n";

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
    const std::string &source_url,
    const fs::path &dest_path)
{
    console_log << "Downloading " << source_url << "...\n";

    HRESULT hr = URLDownloadToFileA(nullptr, source_url.c_str(), dest_path.string().c_str(), 0, nullptr);
    if (SUCCEEDED(hr))
    {
        console_log << "Downloaded to " << dest_path << "\n";
        return true;
    }
    console_log << err << "Download failed with error: " << hr << "\n";
    return false;
}

// Merges the downloaded manifest and the local manifest
bool GetVersionManifest(
    const std::string &source_url)
{
    fs::path temp_path = ModManager::version_manifest_path.string()+".tmp";
    if (not DownloadFromURL(source_url, temp_path))
    {
        console_log << err << "Unable to download version manifest from"<<source_url<<"\n";
        return false;
    }

    auto file = ReadFile(temp_path);

    if (file.empty())
    {
        console_log << err << "Unable to read version manifest from "<<source_url<<".\n";
        return false;
    }

    json parsed = safe_parse(file);
    if (parsed.empty())
    {
        console_log << err << "Unable to parse version manifest json from "<<source_url<<".\n";
        return false;
    }

    ModManager::version_manifest.merge_patch(parsed);
    return true;
}

void SaveVersionManifest()
{
    std::ofstream file(ModManager::version_manifest_path);
    file.clear();
    file << ModManager::version_manifest.dump();
    file.close();
}

Version GetLatestVersion(json& version_manifest)
{
    Version latest_version{};
    for (auto& el : version_manifest["versions"].items())
    {
        const auto& version = *ParseVersion(el.key());
        if (version > latest_version)
            latest_version = version;
    }
    return latest_version;
}

std::string CheckForUpdates(
    const char* name,
    json& version_json,
    const fs::path& check_path = "")
{
    console_log << "Checking for " << name << " updates...\n";

    if (version_json.empty())
    {
        console_log << err << "Version JSON for " << name << " not found, unable to update.\n";
        return "";
    }

    Version latest_version = GetLatestVersion(version_json);
    json installed_version_json = ModManager::pilus_config["installed_versions"][name];

    if ((check_path != "" and not exists(check_path)) or installed_version_json.empty())
        console_log << name << " not installed!\n";
    else
    {
        auto installed_version = GetStringFromJson(installed_version, "0.0.0");

        console_log << "Current " << name << " version: " << installed_version << "\n";
        console_log << "Latest " << name << " version: " << latest_version.to_string() << "\n";

        if (not (latest_version> *ParseVersion(installed_version)))
        {
            console_log << name << " is up to date.\n";
            return "";
        }
    }

    console_log
        << "Update found for " << name << ", version: "
        << latest_version.to_string()
        << "\n";

    return GetStringFromJson(version_json["versions"][latest_version.to_string()], "download_url");
}

void UpdateLocalVersionManifest()
{
    ModManager::version_manifest.merge_patch(safe_parse(ReadFile(ModManager::version_manifest_path)));
    GetVersionManifest(ModManager::version_manifest_url);
    for (auto& mod : ModManager::mods)
    {
        if (ModManager::version_manifest.contains(mod.name))
            continue;
        std::string manifest_url = mod.info["version_manifest_url"];
        if (manifest_url.empty())
            continue;
        GetVersionManifest(manifest_url);
    }
    SaveVersionManifest();
}

int CheckSteamBuild()
{
    const char* manifest_filename = "appmanifest_3011360.acf";

    auto steam_manifest_path =
        ModManager::game_path.parent_path().parent_path() / manifest_filename;

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

bool UpdatePDB()
{
    int actual_build_id = CheckSteamBuild();
    if (actual_build_id == 0)
        return false;

    int installed_pdb_build_id{0};
    if (!ModManager::pilus_config.contains("installed_pdb_build_id"))
        console_log << err << "Installed PDB build ID not found\n";
    else
        installed_pdb_build_id = ModManager::pilus_config["installed_pdb_build_id"].get<int>();

    if (!fs::exists("primordialis_avx.pdb") || !fs::exists("primordialis_sse3.pdb"))
        console_log << err << "PDBs not found\n";
    else if (actual_build_id == installed_pdb_build_id)
    {
        console_log << "PDBs found with correct build ID " << installed_pdb_build_id << "\n";
        return false;
    }

    if (fs::exists("pdbs.zip"))
        ExtractZip("pdbs.zip", ModManager::game_path);
    else
    {
        console_log << err << "pdbs.zip not found. If you are on Primordialis v0.1, switch to the beta branch!\n";
        return false;
    }

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
        ModManager::LoadPilusConfig();

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

void CheckAllForUpdates()
{
    ModManager::pilus_config["installed_versions"]["Pilus"] = PILUS_VERSION.to_string();

    CreateDirectories();

    UpdateLocalVersionManifest();

    for (auto& el : ModManager::version_manifest.items())
        CheckForUpdates(el.key().c_str(), el.value());
}

bool DownloadUpdate(const char* name, const Version& version, const fs::path& dest_path)
{
    std::string download_url_json = GetStringFromJson(
        ModManager::version_manifest[name][version.to_string()], "download_url");
    if (download_url_json.empty())
    {
        console_log << err << "No download url found for " << name << "\n";
        return false;
    }
    if (download_url_json.ends_with(".zip"))
    {
        fs::path temp_zip_path{dest_path.string()+".tmp"};
        if (not DownloadFromURL(download_url_json, temp_zip_path))
            return false;
        ExtractZip(temp_zip_path, dest_path);
        fs::remove(temp_zip_path);
        return true;
    }
    return DownloadFromURL(download_url_json, dest_path);
}

bool UpdatePilus(const Version& pilus_version, const Version& updater_version)
{
    ModManager::pilus_config["Pilus_installed_version"] = PILUS_VERSION.to_string();

    fs::path pilus_path = absolute(fs::path("Pilus.exe"));

    fs::path update_path = pilus_path.parent_path() / "Pilus.new.exe";

    if (not DownloadUpdate("Pilus", pilus_version, update_path))
        return false;

    // Find our own PID and launch the updater.

    DWORD pid = GetCurrentProcessId();

    fs::path updater_path = pilus_path.parent_path() / "PilusUpdater.exe";

    if (not DownloadUpdate("PilusUpdater", updater_version, updater_path))
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

void UpdateSDK()
{
    // Get the latest versions for now.

    UpdatePilus(GetLatestVersion(ModManager::version_manifest["Pilus"]),
    GetLatestVersion(ModManager::version_manifest["PilusUpdater"])
        );

    DownloadUpdate("Luasome",
        GetLatestVersion(ModManager::version_manifest["Luasome"]),
        ModManager::luasome_path);

    UpdatePDB();
}