#pragma once
#include <json.hpp>
#include "loader_logging.h"

using json = nlohmann::json;
using ord_json = nlohmann::ordered_json;

template<typename... Args>
ord_json safe_parse(Args... args)
{
    try
    {
        return json::parse(args...);
    }
    catch (const json::parse_error& e)
    {
        console_log << err << e.what() << "\n"
                  << "exception id: " << e.id << "\n"
                  << "byte position of error: " << e.byte << "\n";
        return ord_json{};
    }
}
template<typename T>
T GetFromJson(json json, const char* name, const T& fallback=0)
{
    return json[name].empty() ? fallback : json[name].get<T>();
}
// You need to c_str() the output otherwise you get garbage.
inline std::string GetStringFromJson(json json, const std::string& name, const std::string& fallback="")
{
    return json[name].empty() ? fallback : json[name].get<std::string>();
}