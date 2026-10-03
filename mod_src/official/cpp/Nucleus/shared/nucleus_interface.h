#pragma once
#include <unordered_map>
#include <string>

#include "enums.h"
#include "generated/data_types.h"

namespace A::Internal {
    struct HookChainBase {
        virtual ~HookChainBase() = default;
    };
}

struct Nucleus {
    // Hooking
    void* (*CreateHook)(const char* name, void* detour);
    std::unordered_map<std::string, A::Internal::HookChainBase *> hook_chains;
    void* (*GetCurrentContext)();
    void (*SetCurrentContext)(void* context);

    // Modules
    void (*RegisterModule)(std::string name, void* module);
    void* (*GetModule)(std::string name);

    // Threading
    bool (*IsThreadSafe)();
    void (*LaneSync)();

    // Cells
    Game::cell_extra* (*GetExtraFields)(Game::cell* current_cell);
    void (*PowerCell)(Game::cell* current_cell, float power_voltage);
    void (*AddCellDescription)(const char* id, const char* desc);
    void (*SetCellNameAndDesc)(Game::material_t& cell_type, const char* name, const char* desc);

    // Math
    uint32_t (*HashId)(const char *name);
    float (*AngleDifference)(float a, float b);
    float (*AngleTo)(float a, float b);

    // Misc
    void* (*ResolveSymbol)(const char*);
    void (*Log)(const char* message, int color, bool important);
    void (*AddTranslation)(const char* _key, const char* _value);
    const char* (*UintToStr)(uint i);
    const char* profile_path;
};

inline Nucleus* nucleus;