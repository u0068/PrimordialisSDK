#pragma once
#include <unordered_map>
#include <string>

struct HookChainBase
{
    virtual ~HookChainBase() = default;
};

struct NucleusRuntimeAPI
{
    void* (*ResolveSymbol)(const char*);
    void* (*CreateHook)(const char* name, void* detour);
    std::unordered_map<std::string, HookChainBase*> chains;
    void* (*GetCurrentContext)();
    void (*SetCurrentContext)(void* context);
};

inline NucleusRuntimeAPI* nucleus;

template<typename... Args>
void LogTemplate(const char* name, Args... args)
{
    char buffer[2048];
    sprintf_s(buffer,  args...);
    printf("[%s]\n  %s", name, buffer);
}