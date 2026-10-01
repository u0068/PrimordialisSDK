#pragma once
#include "generated/game_functions/essential.h"
#include "generated/globals.h"

inline Game::context_t* GetContext() {
    return (Game::context_t *) FlsGetValue(Game::fls_index);
}

inline bool IsThreadSafe() {
    auto context = GetContext();
    if (context == nullptr) {
        return false;
    }
    return context->lane_index == 0;
}

inline void LaneSync() {
    SwitchToFiber(TlsGetValue(Game::tls_index));
}