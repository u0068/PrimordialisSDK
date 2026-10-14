#pragma once

namespace P {
    inline sound_t LoadOgg(const char* path) {
        return Internal::ResolveRVA<sound_t(*)(const char* path)>(0x2b600)(path);
    }
}