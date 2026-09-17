#pragma once
#include "generated/game_functions/essential.h"
#include "generated/resolve_data.h"

namespace P {

    inline context_t* GetContext() {
        return (context_t*)TlsGetValue(tls_index);
    }

    inline bool IsThreadSafe() {
        auto context = GetContext();
        if (context == nullptr) {
            return false;
        }
        return context->lane_index == 0;
    }

    inline void LaneSync() {
        auto context = GetContext();
        // I think this works idk
        EnterSynchronizationBarrier(
            reinterpret_cast<LPSYNCHRONIZATION_BARRIER &>(context->group->barrier), 0);
    }
}
