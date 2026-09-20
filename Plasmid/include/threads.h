#pragma once
#include "generated/game_functions/essential.h"
#include "generated/globals.h"

namespace P {
    inline context_t* GetContext() {
        return (context_t *) FlsGetValue(fls_index);
    }

    inline bool IsThreadSafe() {
        auto context = GetContext();
        if (context == nullptr) {
            return false;
        }
        return context->lane_index == 0;
    }

    inline void LaneSync() {
        SwitchToFiber(TlsGetValue(tls_index));
    }
}
