#pragma once
#include <Windows.h>
#include <cstdint>

using HSteamUser = uint32_t;
using HSteamPipe = uint32_t;
using SteamAPICall_t = uint64_t;

class CCallbackBase;

extern "C" __declspec(dllexport)
IMAGE_DOS_HEADER __ImageBase;

static HMODULE real_steam = nullptr;

static HMODULE GetRealSteam()
{
    if (real_steam)
        return real_steam;

    char path[MAX_PATH];

    GetModuleFileNameA(
        reinterpret_cast<HMODULE>(&__ImageBase),
        path,
        MAX_PATH
    );

    char* slash = strrchr(path, '\\');

    if (slash)
        *(slash + 1) = '\0';

    strcat_s(path, "steam_api64_real.dll");

    real_steam = LoadLibraryA(path);

    return real_steam;
}

template<typename T>
static T GetSteamFunction(const char* name)
{
    return reinterpret_cast<T>(
        GetProcAddress(GetRealSteam(), name)
    );
}

extern "C" __declspec(dllexport)
HSteamUser SteamAPI_GetHSteamUser()
{
    using Fn = HSteamUser(*)();
    static Fn fn = GetSteamFunction<Fn>("SteamAPI_GetHSteamUser");
    return fn();
}

extern "C" __declspec(dllexport)
void SteamAPI_RegisterCallResult(
    CCallbackBase* pCallback,
    SteamAPICall_t hAPICall)
{
    using Fn = void(*)(CCallbackBase*, SteamAPICall_t);
    static Fn fn = GetSteamFunction<Fn>("SteamAPI_RegisterCallResult");
    fn(pCallback, hAPICall);
}

extern "C" __declspec(dllexport)
void SteamAPI_RegisterCallback(
    CCallbackBase* pCallback,
    int iCallback)
{
    using Fn = void(*)(CCallbackBase*, int);
    static Fn fn = GetSteamFunction<Fn>("SteamAPI_RegisterCallback");
    fn(pCallback, iCallback);
}

extern "C" __declspec(dllexport)
bool SteamAPI_RestartAppIfNecessary(
    uint32_t unOwnAppID)
{
    using Fn = bool(*)(uint32_t);
    static Fn fn = GetSteamFunction<Fn>("SteamAPI_RestartAppIfNecessary");
    return fn(unOwnAppID);
}

extern "C" __declspec(dllexport)
void SteamAPI_RunCallbacks()
{
    using Fn = void(*)();
    static Fn fn = GetSteamFunction<Fn>("SteamAPI_RunCallbacks");
    fn();
}

extern "C" __declspec(dllexport)
void SteamAPI_Shutdown()
{
    using Fn = void(*)();
    static Fn fn = GetSteamFunction<Fn>("SteamAPI_Shutdown");
    fn();
}

extern "C" __declspec(dllexport)
void SteamAPI_UnregisterCallResult(
    CCallbackBase* pCallback,
    SteamAPICall_t hAPICall)
{
    using Fn = void(*)(CCallbackBase*, SteamAPICall_t);
    static Fn fn =
        GetSteamFunction<Fn>("SteamAPI_UnregisterCallResult");
    fn(pCallback, hAPICall);
}

extern "C" __declspec(dllexport)
void SteamAPI_UnregisterCallback(
    CCallbackBase* pCallback)
{
    using Fn = void(*)(CCallbackBase*);
    static Fn fn =
        GetSteamFunction<Fn>("SteamAPI_UnregisterCallback");
    fn(pCallback);
}

extern "C" __declspec(dllexport)
void* SteamInternal_ContextInit(
    void* pContextInitData)
{
    using Fn = void*(*)(void*);
    static Fn fn =
        GetSteamFunction<Fn>("SteamInternal_ContextInit");
    return fn(pContextInitData);
}

extern "C" __declspec(dllexport)
void* SteamInternal_FindOrCreateUserInterface(
    HSteamUser hSteamUser,
    const char* pszVersion)
{
    using Fn = void*(*)(HSteamUser, const char*);
    static Fn fn =
        GetSteamFunction<Fn>(
            "SteamInternal_FindOrCreateUserInterface");

    return fn(hSteamUser, pszVersion);
}
extern "C" __declspec(dllexport)
int SteamInternal_SteamAPI_Init(
    const char* pszInternalCheckInterfaceVersions,
    void* SteamErrMsg)
{
    using Fn = int(*)(const char*, void*);

    static Fn fn =
        GetSteamFunction<Fn>("SteamInternal_SteamAPI_Init");

    return fn(pszInternalCheckInterfaceVersions, SteamErrMsg);
}