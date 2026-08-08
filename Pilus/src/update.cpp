#include "http.h"
#include <filesystem>
#include <fstream>
#include <string>
#include <vector>
#include <optional>
#include <iostream>
#include <regex>
#include <bcrypt.h>

#pragma comment(lib, "bcrypt.lib")

// TODO: Make cmake generate the version number automatically
constexpr Version PILUS_VERSION{0, 1, 4};

namespace fs = std::filesystem;

static std::optional<json> GetLatestRelease()
{
    std::cout
        << "Getting Latest Release\n";

    auto response =
        HttpGet(
            GITHUB_HOST,
            RELEASES_PATH
        );

    if (!response)
        return std::nullopt;

    try
    {
        json releases = json::parse(*response);

        if (!releases.is_array() ||
            releases.empty())
            return std::nullopt;

        std::cout
            << "Found Latest Release JSON\n";

        // GitHub returns releases newest first.
        return releases[0];
    }
    catch (const json::exception& e)
    {
        std::cout
            << "Failed to parse GitHub response: "
            << e.what()
            << "\n";

        return std::nullopt;
    }
}

static std::optional<Version> ParseVersion(
    std::string tag)
{
    std::cout
        << "Parsing Version: ";

    std::cout
        << tag
        << "\n";

    Version version;

    std::regex tag_regex(R"(\w*v(\d+).(\d+).(\d+)\w*)");

    std::smatch match;
    if (std::regex_search(tag, match, tag_regex)) {
        std::cout << "Tag: " << match[0].str() << "\n";
        std::cout << "Major: " << match[1].str() << "\n";
        std::cout << "Minor: " << match[2].str() << "\n";
        std::cout << "Patch: " << match[3].str() << "\n";

        version.major = std::stoi(match[1].str());
        version.minor = std::stoi(match[2].str());
        version.patch = std::stoi(match[3].str());

        return version;
    }

    std::cout
        << "Failed to Parse Version\n";

    return std::nullopt;
}

static std::optional<json> FindAsset(
    const json& release,
    const char* name)
{
    if (!release.contains("assets"))
        return std::nullopt;

    for (const auto& asset : release["assets"])
    {
        if (asset["name"] == name)
            return asset;
    }

    return std::nullopt;
}

// Sha256 boilerplate by ChatGPT
static std::optional<std::string> Sha256(
    const fs::path& file)
{
    BCRYPT_ALG_HANDLE algorithm = nullptr;
    BCRYPT_HASH_HANDLE hash = nullptr;

    DWORD objectSize = 0;
    DWORD resultSize = 0;
    DWORD hashSize = 0;

    if (BCryptOpenAlgorithmProvider(
            &algorithm,
            BCRYPT_SHA256_ALGORITHM,
            nullptr,
            0) != 0)
        return std::nullopt;

    if (BCryptGetProperty(
            algorithm,
            BCRYPT_OBJECT_LENGTH,
            reinterpret_cast<PUCHAR>(&objectSize),
            sizeof(objectSize),
            &resultSize,
            0) != 0)
    {
        BCryptCloseAlgorithmProvider(algorithm, 0);
        return std::nullopt;
    }

    if (BCryptGetProperty(
            algorithm,
            BCRYPT_HASH_LENGTH,
            reinterpret_cast<PUCHAR>(&hashSize),
            sizeof(hashSize),
            &resultSize,
            0) != 0)
    {
        BCryptCloseAlgorithmProvider(algorithm, 0);
        return std::nullopt;
    }

    std::vector<UCHAR> object(objectSize);
    std::vector<UCHAR> hashValue(hashSize);

    if (BCryptCreateHash(
            algorithm,
            &hash,
            object.data(),
            objectSize,
            nullptr,
            0,
            0) != 0)
    {
        BCryptCloseAlgorithmProvider(algorithm, 0);
        return std::nullopt;
    }

    std::ifstream input(
        file,
        std::ios::binary
    );

    if (!input)
    {
        BCryptDestroyHash(hash);
        BCryptCloseAlgorithmProvider(algorithm, 0);
        return std::nullopt;
    }

    std::vector<char> buffer(1024 * 1024);

    while (input)
    {
        input.read(
            buffer.data(),
            buffer.size()
        );

        std::streamsize count =
            input.gcount();

        if (count > 0)
        {
            if (BCryptHashData(
                    hash,
                    reinterpret_cast<PUCHAR>(
                        buffer.data()),
                    static_cast<ULONG>(count),
                    0) != 0)
            {
                BCryptDestroyHash(hash);
                BCryptCloseAlgorithmProvider(
                    algorithm,
                    0);
                return std::nullopt;
            }
        }
    }

    if (BCryptFinishHash(
            hash,
            hashValue.data(),
            hashSize,
            0) != 0)
    {
        BCryptDestroyHash(hash);
        BCryptCloseAlgorithmProvider(
            algorithm,
            0);
        return std::nullopt;
    }

    BCryptDestroyHash(hash);
    BCryptCloseAlgorithmProvider(
        algorithm,
        0);

    static constexpr char hex[] =
        "0123456789abcdef";

    std::string result;

    for (UCHAR byte : hashValue)
    {
        result += hex[byte >> 4];
        result += hex[byte & 0xF];
    }

    return result;
}

bool DownloadAsset(const json& release, const char* asset_name, fs::path dest_path)
{
    auto asset = FindAsset(release, asset_name);

    if (!asset)
    {
        std::cout
            << "Release does not contain "
            << asset_name
            << "\n";

        return false;
    }

    std::string downloadUrl =
        (*asset)["browser_download_url"];

    std::string digest =
        (*asset)["digest"];

    constexpr std::string_view prefix =
        "https://github.com";

    if (!downloadUrl.starts_with(prefix))
    {
        std::cout
            << "Unexpected download URL:" << downloadUrl << "\n";

        return false;
    }

    std::string path =
        downloadUrl.substr(prefix.size());

    DeleteFileW(dest_path.c_str());

    std::cout
        << "Downloading " << asset_name << "...\n";

    if (!HttpDownload(
            L"github.com",
            std::wstring(
                path.begin(),
                path.end()),
            dest_path))
    {
        std::cout
            << "Failed to download " << asset_name << ".\n";

        return false;
    }

    std::cout
        << "Verifying " << asset_name << "...\n";

    auto actualHash =
        Sha256(dest_path);

    if (!actualHash)
    {
        std::cout
            << "Failed to calculate SHA-256.\n";

        DeleteFileW(dest_path.c_str());
        return false;
    }

    constexpr std::string_view shaPrefix =
        "sha256:";

    std::string expectedHash =
        digest;

    if (expectedHash.starts_with(shaPrefix))
        expectedHash.erase(
            0,
            shaPrefix.size());

    if (*actualHash != expectedHash)
    {
        std::cout
            << "SHA-256 verification failed!\n"
            << "Expected: "
            << expectedHash
            << "\n"
            << "Actual:   "
            << *actualHash
            << "\n";

        DeleteFileW(dest_path.c_str());

        return false;
    }

    std::cout
        << asset_name << " hash verified.\n";
}

bool Update::CheckAndUpdate()
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

    // This ends up never returning true because if everything goes right Pilus needs to close anyway.
}