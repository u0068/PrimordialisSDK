#pragma once
#include "generated/globals.h"
#include "internal/tee_buffer_log.h"
#include "internal/nucleus_interface.h"

namespace P {
    inline std::string mod_name{"Unnamed Mod"};

    inline Internal::LogStream Log(const int color = COL_NORMAL) {
        return nucleus->LogSourced(
            mod_name,
            color,
            false
        );
    }

    inline Internal::LogStream ELog(const int color = COL_ERROR) {
        return nucleus->LogSourced(
            mod_name,
            color,
            true
        );
    }

    namespace Internal {
        // Plasmid log
        inline LogStream PLog(const int color = COL_NORMAL) {
            return nucleus->LogSourced(
                "PLASMID (" + mod_name + ")",
                color,
                false
            );
        }

        // Plasmid error log
        inline LogStream PELog(const int color = COL_ERROR) {
            return nucleus->LogSourced(
                "PLASMID (" + mod_name + ")",
                color,
                true
            );
        }
    }
}
