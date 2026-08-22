#@category PrimordialisSDK
#@description Annotate inlined functions using inline_site_info.json

import re
import sys

START = re.compile(r'^\s*(?:/\*)? INLINE_REGION_START: (.+?)\s*(?:\*/)?$')
END = re.compile(r'^\s*(?:/\*)? INLINE_REGION_END\s*(?:\*/)?$')

def process(path):
    with open(path, "r", encoding="utf-8") as f:
        lines = f.readlines()

    output = []

    for line in lines:
        match = START.match(line)

        if match:
            output.append(
                "#pragma region inlined: " + match.group(1) + "\n"
            )
            continue

        if END.match(line):
            output.append("#pragma endregion\n")
            continue

        output.append(line)

    with open(path, "w", encoding="utf-8") as f:
        f.writelines(output)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: process_inline_regions.py <decompiled.cpp>")
        sys.exit(1)

    process(sys.argv[1])

    print("Done!")