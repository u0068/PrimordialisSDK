#pragma once

namespace P
{
    inline std::string mod_name{"Unnamed Mod"};

    inline LogStream PlasmidLog()
    {
        return LogSourced(
            "PLASMID (" + mod_name + ")"
        );
    }
    inline LogStream Log()
    {
        return LogSourced(
            mod_name
        );
    }
}
