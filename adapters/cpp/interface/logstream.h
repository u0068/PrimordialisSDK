#pragma once
#include <filesystem>
#include <sstream>
#include <iostream>

namespace fs = std::filesystem;

namespace A {
    inline std::string mod_name{"Unnamed Mod"};

    namespace Internal {
        class LogStream {
        public:
            LogStream(
                std::string prefix = "",
                std::string suffix = "\n",
                const int color = 0xf,
                const bool important = false
            )
                : prefix(std::move(prefix)),
                  suffix(std::move(suffix)),
                  color(color),
                  important(important) {}

            ~LogStream() {
                Write();
            }

            template<typename T>
            LogStream& operator<<(const T& value) {
                buffer << value;
                return *this;
            }

            void Write() {
                std::stringstream output{};
                output << prefix << buffer.str() << suffix;
                nucleus->Log(output.str().c_str(), color, important);
            }

        private:
            std::string prefix{};
            std::string suffix{};
            const int color{0};
            const bool important{false};
            std::stringstream buffer{};
        };

        inline LogStream LogSourced(std::string source, const int color = COL_NORMAL, const bool important = false) {
            return {
                "[" + source + "]\n",
                "\n",
                color,
                important
            };
        }

        inline LogStream ALog(const int color = COL_NORMAL, const bool important = false) {
            return LogSourced("ADAPTER ("+mod_name+")", color, important);
        }

        inline LogStream AELog(const int color = COL_ERROR, const bool important = true) {
            return LogSourced("ADAPTER ("+mod_name+")", color, important);
        }
    }

    inline Internal::LogStream Log(const int color = COL_NORMAL, const bool important = false) {
        return Internal::LogSourced(mod_name, color, important);
    }

    inline Internal::LogStream ELog(const int color = COL_ERROR, const bool important = true) {
        return Internal::LogSourced(mod_name, color, important);
    }
}