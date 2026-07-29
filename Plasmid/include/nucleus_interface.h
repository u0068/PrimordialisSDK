#pragma once
#include <unordered_map>
#include <string>

struct HookChainBase
{
    virtual ~HookChainBase() = default;
};

struct NucleusRuntimeAPI
{
    void (*Log)(const char*);
    void* (*ResolveSymbol)(const char*);
    void* (*CreateHook)(const char* name, void* detour);
    std::unordered_map<std::string, HookChainBase*> chains;
    void* (*GetCurrentContext)();
    void (*SetCurrentContext)(void* context);
};

inline NucleusRuntimeAPI* nucleus;