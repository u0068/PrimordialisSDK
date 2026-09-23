#pragma once
#include "generated/globals.h"
#include "internal/tee_buffer_log.h"
#include "internal/nucleus_interface.h"

namespace P {
    inline std::string mod_name{"Unnamed Mod"};

    inline LogStream Log(const int color = COL_NORMAL) {
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
    inline void AttentionToConsole() {
        BringConsoleToFront();
        system("pause");
    }

    // Idk how to do inheritance properly, so I'm making this a wrapper instead
    class ELogStream {
    private:
        LogStream& stream;;
    public:
        ELogStream(LogStream _stream): stream(_stream) {}

        template<typename T>
        ELogStream& operator<<(const T& value) {
            stream << value;
            AttentionToConsole();
            return *this;
        }
    };

    inline ELogStream ELog(const int color = COL_ERROR) {
        return ELogStream(nucleus->LogSourced(
            mod_name,
            color
        ));
    }

    namespace Internal {
        // Plasmid log
        inline LogStream PLog(const int color = COL_NORMAL) {
            return nucleus->LogSourced(
                "PLASMID (" + mod_name + ")",
                color
            );
        }

        // Plasmid error log
        inline ELogStream PELog(const int color = COL_ERROR) {
            return ELogStream(nucleus->LogSourced(
                "PLASMID (" + mod_name + ")",
                color
            ));
        }
    }
}
