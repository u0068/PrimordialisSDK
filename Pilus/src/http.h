#pragma once
#include <windows.h>
#include <winhttp.h>
#include "modloader.h"
#include "update.h"

#pragma comment(lib, "winhttp.lib")

// HTTP boilerplate by ChatGPT
static std::optional<std::string> HttpGet(
    const std::wstring& host,
    const std::wstring& path)
{
    HINTERNET session = WinHttpOpen(
        USER_AGENT,
        WINHTTP_ACCESS_TYPE_AUTOMATIC_PROXY,
        nullptr,
        nullptr,
        0
    );

    if (!session)
        return std::nullopt;

    HINTERNET connection = WinHttpConnect(
        session,
        host.c_str(),
        INTERNET_DEFAULT_HTTPS_PORT,
        0
    );

    if (!connection)
    {
        WinHttpCloseHandle(session);
        return std::nullopt;
    }

    HINTERNET request = WinHttpOpenRequest(
        connection,
        L"GET",
        path.c_str(),
        nullptr,
        WINHTTP_NO_REFERER,
        WINHTTP_DEFAULT_ACCEPT_TYPES,
        WINHTTP_FLAG_SECURE
    );

    if (!request)
    {
        WinHttpCloseHandle(connection);
        WinHttpCloseHandle(session);
        return std::nullopt;
    }

    // GitHub API requests should explicitly identify themselves.
    const wchar_t* headers =
        L"Accept: application/vnd.github+json\r\n"
        L"X-GitHub-Api-Version: 2022-11-28\r\n";

    bool success =
        WinHttpSendRequest(
            request,
            headers,
            -1,
            nullptr,
            0,
            0,
            0
        ) &&
        WinHttpReceiveResponse(
            request,
            nullptr
        );

    if (!success)
    {
        WinHttpCloseHandle(request);
        WinHttpCloseHandle(connection);
        WinHttpCloseHandle(session);
        return std::nullopt;
    }

    DWORD status = 0;
    DWORD statusSize = sizeof(status);

    WinHttpQueryHeaders(
        request,
        WINHTTP_QUERY_STATUS_CODE |
        WINHTTP_QUERY_FLAG_NUMBER,
        nullptr,
        &status,
        &statusSize,
        nullptr
    );

    if (status != 200)
    {
        std::cerr
            << "GitHub returned HTTP "
            << status
            << "\n";

        WinHttpCloseHandle(request);
        WinHttpCloseHandle(connection);
        WinHttpCloseHandle(session);

        return std::nullopt;
    }

    std::string result;

    while (true)
    {
        DWORD available = 0;

        if (!WinHttpQueryDataAvailable(
                request,
                &available))
            break;

        if (available == 0)
            break;

        std::vector<char> buffer(available);

        DWORD read = 0;

        if (!WinHttpReadData(
                request,
                buffer.data(),
                available,
                &read))
            break;

        result.append(
            buffer.data(),
            read
        );
    }

    WinHttpCloseHandle(request);
    WinHttpCloseHandle(connection);
    WinHttpCloseHandle(session);

    return result;
}

static bool HttpDownload(
    const std::wstring& host,
    const std::wstring& path,
    const fs::path& destination)
{
    HINTERNET session = WinHttpOpen(
        USER_AGENT,
        WINHTTP_ACCESS_TYPE_AUTOMATIC_PROXY,
        nullptr,
        nullptr,
        0
    );

    if (!session)
        return false;

    HINTERNET connection = WinHttpConnect(
        session,
        host.c_str(),
        INTERNET_DEFAULT_HTTPS_PORT,
        0
    );

    if (!connection)
    {
        WinHttpCloseHandle(session);
        return false;
    }

    HINTERNET request = WinHttpOpenRequest(
        connection,
        L"GET",
        path.c_str(),
        nullptr,
        WINHTTP_NO_REFERER,
        WINHTTP_DEFAULT_ACCEPT_TYPES,
        WINHTTP_FLAG_SECURE
    );

    if (!request)
    {
        WinHttpCloseHandle(connection);
        WinHttpCloseHandle(session);
        return false;
    }

    bool success =
        WinHttpSendRequest(
            request,
            WINHTTP_NO_ADDITIONAL_HEADERS,
            0,
            nullptr,
            0,
            0,
            0
        ) &&
        WinHttpReceiveResponse(
            request,
            nullptr
        );

    if (!success)
    {
        WinHttpCloseHandle(request);
        WinHttpCloseHandle(connection);
        WinHttpCloseHandle(session);
        return false;
    }

    DWORD status = 0;
    DWORD statusSize = sizeof(status);

    WinHttpQueryHeaders(
        request,
        WINHTTP_QUERY_STATUS_CODE |
        WINHTTP_QUERY_FLAG_NUMBER,
        nullptr,
        &status,
        &statusSize,
        nullptr
    );

    if (status != 200)
    {
        WinHttpCloseHandle(request);
        WinHttpCloseHandle(connection);
        WinHttpCloseHandle(session);
        return false;
    }

    std::ofstream file(
        destination,
        std::ios::binary
    );

    if (!file)
    {
        WinHttpCloseHandle(request);
        WinHttpCloseHandle(connection);
        WinHttpCloseHandle(session);
        return false;
    }

    while (true)
    {
        DWORD available = 0;

        if (!WinHttpQueryDataAvailable(
                request,
                &available))
        {
            file.close();
            DeleteFileW(destination.c_str());

            WinHttpCloseHandle(request);
            WinHttpCloseHandle(connection);
            WinHttpCloseHandle(session);

            return false;
        }

        if (available == 0)
            break;

        std::vector<char> buffer(available);

        DWORD read = 0;

        if (!WinHttpReadData(
                request,
                buffer.data(),
                available,
                &read))
        {
            file.close();
            DeleteFileW(destination.c_str());

            WinHttpCloseHandle(request);
            WinHttpCloseHandle(connection);
            WinHttpCloseHandle(session);

            return false;
        }

        file.write(
            buffer.data(),
            read
        );
    }

    file.close();

    WinHttpCloseHandle(request);
    WinHttpCloseHandle(connection);
    WinHttpCloseHandle(session);

    return true;
}
