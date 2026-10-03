#pragma once
#include "generated/globals.h"

inline const char* UintToStr(uint i) {
    union {
        uint numeric{0};
        char string[5];
    };
    numeric = i;
    string[4] = '\0';
    return string;
}