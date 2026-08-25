#pragma once
#include <unordered_map>
#include <string>
#include "logging.h"

struct HookChainBase
{
    virtual ~HookChainBase() = default;
};

struct Nucleus
{
    void* (*ResolveSymbol)(const char*);
    void* (*CreateHook)(const char* name, void* detour);
    std::unordered_map<std::string, HookChainBase*> chains;
    void* (*GetCurrentContext)();
    void (*SetCurrentContext)(void* context);
    LogStream (*LogSourced)(const std::string& source);
    void (*RegisterModule)(std::string name, void *module);
    void* (*GetModule)(std::string name);
};

inline Nucleus* nucleus;