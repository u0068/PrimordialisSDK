#pragma once
#include <unordered_map>
#include <string>
#include "dual_buffer_log.h"

namespace P::Internal {
    struct HookChainBase {
        virtual ~HookChainBase() = default;
    };
}

struct Nucleus {
    void * (*ResolveSymbol)(const char *);

    void * (*CreateHook)(const char *name, void *detour);

    std::unordered_map<std::string, P::Internal::HookChainBase *> chains;

    void * (*GetCurrentContext)();

    void (*SetCurrentContext)(void *context);

    LogStream (*LogSourced)(const std::string &source, const COLOR color);

    void (*RegisterModule)(std::string name, void *module);

    void * (*GetModule)(std::string name);
};

inline Nucleus *nucleus;
