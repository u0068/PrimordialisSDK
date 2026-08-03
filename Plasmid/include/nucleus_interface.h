#pragma once
#include <unordered_map>
#include <string>
#include <iostream>
#include <fstream>
#include <format>

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

// ====== Other shared stuff ======

inline std::string log_filename = "plasmid_log.txt";
inline std::ofstream log_file(log_filename);

template<typename... Args>
void LogTemplate(const char* name, Args... args)
{
    char buffer1[2048];
    sprintf_s(buffer1,  args...);
    char buffer2[2048];
    sprintf_s(buffer2, "[%s]\n  %s", name, buffer1);
    printf(buffer2);
    log_file << buffer2;
}