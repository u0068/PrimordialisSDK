#pragma once
#include "internal/dual_buffer_log.h"
#include "internal/nucleus_interface.h"

namespace P {
    inline std::string mod_name{"Unnamed Mod"};

    namespace Internal {
        inline LogStream PlasmidLog() {
            return nucleus->LogSourced(
                "PLASMID (" + mod_name + ")"
            );
        }
    }

    inline LogStream Log() {
        return nucleus->LogSourced(
            mod_name
        );
    }
}
