#pragma once
#include "generated/game_functions/essential.h"

namespace P {
    inline int GetMutationCount(body* body, const int mutation_index) {
        // Might move getting aux data to its own helper
        return *(body_auxiliary_data_from_body(body) + mutation_index);
    }
    inline int GetMutationCount(const int body_id, const int mutation_index) {
        // Might move getting aux data to its own helper
        return *(body_auxiliary_data_from_id(body_id) + mutation_index);
    }
}
