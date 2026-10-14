#pragma once
#include <mutex>
#include <psapi.h>
#include <unordered_map>
#include "nucleus_interface.h"

namespace P {
    template<typename T>
    T& Resolve(const char* name) {
        static std::unordered_map<std::string, T> cache;

        auto& addr = cache[name];

        if (!addr) {
            addr = reinterpret_cast<T>(nucleus->ResolveSymbol(name));
        }

        return addr;
    }

    template<typename T>
    class ResolvedData {
        const char* name;
        T* ptr = nullptr;
        std::once_flag flag;

        T& Ref() {
            std::call_once(flag, [&]() {
                ptr = Resolve<T *>(name);
                if (!ptr) {
                    std::abort();
                }
            });
            return *ptr;
        }

    public:
        explicit ResolvedData(const char* name)
            : name(name) {}

        operator T&() {
            return Ref();
        }

        T* operator->() {
            return &Ref();
        }

        ResolvedData& operator=(const T& value) {
            Ref() = value;
            return *this;
        }
    };

    namespace Internal {
        uint64_t GetModuleBaseAddress(const char* moduleName) {
            HMODULE hModule = GetModuleHandleA(moduleName);
            if (!hModule) return 0;

            MODULEINFO modInfo;
            if (GetModuleInformation(GetCurrentProcess(), hModule, &modInfo, sizeof(MODULEINFO))) {
                return (uint64_t)modInfo.lpBaseOfDll;
            }
            return 0;
        }

        static const uint64_t BASE = GetModuleBaseAddress("primordialis.exe");

        // Fragile, unsafe workaround until I find a better way to resolve local functions
        template<typename T>
        T ResolveRVA(int rva) {
            return reinterpret_cast<T>(BASE + rva);
        }
    }
}
