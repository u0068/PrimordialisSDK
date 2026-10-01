#pragma once
#include <unordered_map>
#include <string>

#include "enums.h"

namespace P::Internal {
    struct HookChainBase {
        virtual ~HookChainBase() = default;
    };
}

struct Nucleus {
    // Hooking
    void* (*CreateHook)(const char* name, void* detour);
    std::unordered_map<std::string, P::Internal::HookChainBase *> hook_chains;
    void* (*GetCurrentContext)();
    void (*SetCurrentContext)(void* context);
    // Modules
    void (*RegisterModule)(std::string name, void* module);
    void* (*GetModule)(std::string name);
    // Threading
    bool (*IsThreadSafe)();
    void (*LaneSync)();
    // Misc
    void* (*ResolveSymbol)(const char*);
    void (*Log)(const char* message, int color = COL_NORMAL, bool important = false);
    void (*AddTranslation)(const char* _key, const char* _value);
    uint32_t (*HashId)(const char *name);
    COLOR colors;
    MATERIAL_TAGS material_tags;
    const char* profile_path;
};

inline Nucleus* nucleus;