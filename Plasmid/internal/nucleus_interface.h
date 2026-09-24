#pragma once
#include <unordered_map>
#include <string>
#include "tee_buffer_log.h"
#include <filesystem>

namespace P::Internal {
    struct HookChainBase {
        virtual ~HookChainBase() = default;
    };
}

struct Nucleus {
    void* (*ResolveSymbol)(const char*);

    void* (*CreateHook)(const char* name, void* detour);

    std::unordered_map<std::string, P::Internal::HookChainBase *> chains;

    void* (*GetCurrentContext)();

    void (*SetCurrentContext)(void* context);

    P::Internal::LogStream (*LogSourced)(const std::string& source, const int color, const bool important);

    void (*RegisterModule)(std::string name, void* module);

    void* (*GetModule)(std::string name);

    std::filesystem::path profile_path;
};

inline Nucleus* nucleus;
