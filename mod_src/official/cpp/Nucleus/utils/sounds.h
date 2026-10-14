#pragma once
#include "resolution_manager.h"
#include "generated/globals.h"

inline Game::sound_t LoadOgg(const char* path) {
    return ResolveRVA<Game::sound_t(*)(const char*)>(0x2b600)(path);
}