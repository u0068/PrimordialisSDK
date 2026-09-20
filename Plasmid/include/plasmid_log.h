#pragma once
#include "generated/globals.h"
#include "internal/dual_buffer_log.h"
#include "internal/nucleus_interface.h"

namespace P {
    inline std::string mod_name{"Unnamed Mod"};

    namespace Internal {
        inline LogStream PlasmidLog(const COLOR color = COL_NORMAL) {
            return nucleus->LogSourced(
                "PLASMID (" + mod_name + ")",
                color
            );
        }
    }

    inline LogStream Log(const COLOR color = COL_NORMAL) {
        return nucleus->LogSourced(
            mod_name,
            color
        );
    }

    inline void BringConsoleToFront() {
        // Get the handle to the console window
        HWND hConsole = GetConsoleWindow();
        if (!hConsole) return;

        // Restore window if it is minimized
        ShowWindow(hConsole, SW_RESTORE);

        // Attempt to bring to foreground
        if (!SetForegroundWindow(hConsole)) {
            // Fallback: Flash the taskbar button to alert the user
            FLASHWINFO fw = {sizeof(fw), hConsole, FLASHW_ALL | FLASHW_TIMERNOFG, 3, 0};
            FlashWindowEx(&fw);
        }
    }

    // Brings the console to the front and pauses the game, to demand attention to the error
    inline void FocusConsoleAndPause() {
        BringConsoleToFront();
        system("pause");
    }
}
