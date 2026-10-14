#@category PrimordialisSDK
#@description Annotate inlined functions using inline_site_info.json

import json
import os
from ghidra.program.model.listing import CommentType

JSON_FILE = os.path.join(
    os.path.dirname(__file__),
    "inline_site_info.json"
)

def norm_path(path):
    return os.path.normcase(os.path.normpath(path))

def find_function(rva):
    address = currentProgram.getImageBase().add(rva)
    return getFunctionContaining(address)

def collect_source_lines(function):
    manager = currentProgram.getSourceFileManager()
    address_set = function.getBody()

    # (file, line) -> first address
    lines = {}

    # Keep addresses ordered so we can find the next source line.
    ordered = []

    address = address_set.getMinAddress()

    while address is not None and address_set.contains(address):
        for entry in manager.getSourceMapEntries(address):
            source = entry.getSourceFile()

            if source is None:
                continue

            key = (
                norm_path(str(source.getPath())),
                entry.getLineNumber()
            )

            if key not in lines:
                lines[key] = entry.getBaseAddress()
                ordered.append((entry.getBaseAddress(), key))

        address = address.add(1)

    ordered.sort(key=lambda x: x[0].getOffset())

    return lines, ordered

def find_next_line(ordered, address, source_file, source_line):
    target_file = norm_path(source_file)

    for i, (line_address, key) in enumerate(ordered):
        if line_address != address:
            continue

        # Find the next source-map entry belonging to this file
        # with a different line number.
        for next_address, (path, line) in ordered[i + 1:]:
            if path == target_file and line != source_line:
                return next_address

        return None

    return None

def add_region(regions, start, end, name):
    for region in regions:
        if region["start"] == start and region["end"] == end:
            if name not in region["names"]:
                region["names"].append(name)
            return

    regions.append({
        "start": start,
        "end": end,
        "names": [name]
    })

def annotate():
    with open(JSON_FILE, "r", encoding="utf-8") as f:
        data = json.load(f)

    listing = currentProgram.getListing()

    for function_info in data["functions"]:
        function = find_function(function_info["rva"])

        if function is None:
            print(
                "Function not found at RVA:",
                hex(function_info["rva"]),
                function_info["name"]
            )
            continue

        print("\nFUNCTION:", function.getName())

        lines, ordered = collect_source_lines(function)

        regions = []

        for site in function_info["inline_sites"]:
            source_file = site.get("source_file")
            source_line = site.get("source_line")

            if not source_file or source_line is None:
                print("  Missing source location:", site["name"])
                continue

            key = (
                norm_path(source_file),
                source_line
            )

            start = lines.get(key)

            if start is None:
                print(
                    "  Could not find:",
                    site["name"],
                    source_file,
                    source_line
                )
                continue

            end = find_next_line(
                ordered,
                start,
                source_file,
                source_line
            )

            add_region(
                regions,
                start,
                end,
                site["name"]
            )

            print(
                "  Annotated:",
                site["name"],
                "at",
                start,
                "line",
                source_line
            )

        for region in regions:
            if region["end"]:
                code_unit = listing.getCodeUnitContaining(region["end"])

                if code_unit is None:
                    print("  No code unit:", region["end"])
                    continue

                comment = "INLINE_REGION_END"

                existing = code_unit.getComment(CommentType.PRE)

                if existing:
                    comment = existing + "\n" + comment

                code_unit.setComment(
                    CommentType.PRE,
                    comment
                )

            code_unit = listing.getCodeUnitContaining(region["start"])

            if code_unit is None:
                print("  No code unit:", region["start"])
                continue

            names = ", ".join(region["names"])

            comment = "INLINE_REGION_START: " + names

            existing = code_unit.getComment(CommentType.PRE)

            if existing:
                comment = existing + "\n" + comment

            code_unit.setComment(
                CommentType.PRE,
                comment
            )



annotate()