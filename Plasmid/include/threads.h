#pragma once
// #include "generated/game_functions/essential.h"
#include "generated/resolve_data.h"

namespace P {
    inline bool IsThreadSafe() {
        auto tls_value = TlsGetValue(tls_index);
        if (tls_value == nullptr) {
            return false;
        }
        return *static_cast<int *>(tls_value) == 0;
    }

    inline void LaneSync() {
        auto tls_value = TlsGetValue(tls_index);
        EnterSynchronizationBarrier(LPSYNCHRONIZATION_BARRIER(*(longlong *) ((longlong) tls_value + 8) + 0x18), 0);
    }
}
