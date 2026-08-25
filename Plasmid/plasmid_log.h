#pragma once

namespace P
{
    inline std::string mod_name{"Unnamed Mod"};

    inline LogStream PlasmidLog()
    {
        return nucleus->LogSourced(
            "PLASMID (" + mod_name + ")"
        );
    }
    inline LogStream Log()
    {
        return nucleus->LogSourced(
            mod_name
        );
    }
}
