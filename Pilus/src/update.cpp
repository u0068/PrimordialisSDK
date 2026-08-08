#include "http.h"
#include <filesystem>
#include <fstream>
#include <string>
#include <vector>
#include <optional>
#include <iostream>

#include <bcrypt.h>

#pragma comment(lib, "bcrypt.lib")

// TODO: Make cmake generate the version number automatically
constexpr Version PILUS_VERSION{0, 1, 1};

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
            << "Returning Latest Release JSON\n";

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
        << "Parsing Version\n";

    if (!tag.empty() && tag[0] == 'v')
        tag.erase(0, 1);

    std::cout
        << tag
        << "\n";

    Version version;

    if (sscanf_s(
            tag.c_str(),
            "Pilus-v%d.%d.%d",
            &version.major,
            &version.minor,
            &version.patch) != 3)
    {
        std::cout
            << "Failed to Parse Version\n";

        return std::nullopt;
    }

    std::cout
        << "Parsed Version\n";

    return version;
}

static std::optional<json> FindPilusAsset(
    const json& release)
{
    if (!release.contains("assets"))
        return std::nullopt;

    for (const auto& asset : release["assets"])
    {
        if (asset["name"] == "Pilus.exe")
            return asset;
    }

    return std::nullopt;
}

// By ChatGPT
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

    auto asset = FindPilusAsset(*release);

    if (!asset)
    {
        std::cout
            << "Release does not contain Pilus.exe.\n";

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
            << "Unexpected download URL.\n";

        return false;
    }

    std::string path =
        downloadUrl.substr(prefix.size());

    fs::path pilus =
        fs::absolute(
            fs::path("Pilus.exe"));

    fs::path update =
        pilus.parent_path() /
        "Pilus.new.exe";

    DeleteFileW(update.c_str());

    std::cout
        << "Downloading update...\n";

    if (!HttpDownload(
            L"github.com",
            std::wstring(
                path.begin(),
                path.end()),
            update))
    {
        std::cout
            << "Failed to download update.\n";

        return false;
    }

    std::cout
        << "Verifying update...\n";

    auto actualHash =
        Sha256(update);

    if (!actualHash)
    {
        std::cout
            << "Failed to calculate SHA-256.\n";

        DeleteFileW(update.c_str());
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

        DeleteFileW(update.c_str());

        return false;
    }

    std::cout
        << "Update verified.\n";

    // Find our own PID and launch the updater.

    DWORD pid = GetCurrentProcessId();

    fs::path updater =
        pilus.parent_path() /
        "PilusUpdater.exe";

    if (!fs::exists(updater))
    {
        std::cout
            << "PilusUpdater.exe not found.\n";

        DeleteFileW(update.c_str());
        return false;
    }

    std::wstring commandLine =
        L"\"" + updater.wstring() + L"\" " +
        std::to_wstring(pid) + L" \"" +
        pilus.wstring() + L"\" \"" +
        update.wstring() + L"\"";

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
            updater.parent_path().c_str(),
            &si,
            &pi))
    {
        std::cout
            << "Failed to start updater: "
            << GetLastError()
            << "\n";

        DeleteFileW(update.c_str());

        return false;
    }

    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);

    // The updater now owns the update process.
    // We MUST exit Pilus, or reality will collapse.

    ExitProcess(0);

    // This ends up never returning true because if everything goes right Pilus needs to close anyway.
}