#pragma once
#include "generated/game_functions/essential.h"

namespace P {
    static std::vector<const char *> translation_values;

    inline void AddTranslation(const char* _key, const char* _value) {
        char* key = new char[strlen(_key) + 1]{};
        memcpy_s(key, strlen(_key) + 1, _key, strlen(_key));

        translation_values.push_back(_value);
        const char** value = &translation_values.back();

        translation_list t_list{};
        t_list.text = value;
        t_list.formatted = nullptr;
        t_list.max_formatted = 0;
        add_entry(&w->translations, key, &t_list);
    }
}
