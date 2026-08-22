#@category PrimordialisSDK
#@description Annotate inlined functions using inline_site_info.json

import json
import os

from ghidra.program.model.listing import CommentType

JSON_FILE = os.path.join(
    os.path.dirname(__file__),
    "inline_site_info.json"
)

LINE_TOLERANCE = 3

def norm_path(path):
    return os.path.normcase(os.path.normpath(path))

def find_function(function_info):
    address = currentProgram.getImageBase().add(function_info["rva"])
    return getFunctionContaining(address)

def find_line_address(function, source_file, source_line):
    manager = currentProgram.getSourceFileManager()
    target_file = norm_path(source_file)

    address_set = function.getBody()
    address = address_set.getMinAddress()

    best_address = None
    best_line = None
    best_distance = None

    while address is not None and address_set.contains(address):
        for entry in manager.getSourceMapEntries(address):
            source = entry.getSourceFile()

            if source is None:
                continue

            if norm_path(str(source.getPath())) != target_file:
                continue

            line = entry.getLineNumber()
            distance = abs(line - source_line)

            if distance > LINE_TOLERANCE:
                continue

            if best_distance is None or distance < best_distance:
                best_address = entry.getBaseAddress()
                best_line = line
                best_distance = distance

                if distance == 0:
                    return best_address, best_line, best_distance

        address = address.add(1)

    return best_address, best_line, best_distance

def annotate():
    with open(JSON_FILE, "r", encoding="utf-8") as f:
        data = json.load(f)

    for function_info in data["functions"]:
        name = function_info["name"]
        function = find_function(function_info)

        if function is None:
            print(
                "Function not found:",
                name,
                "RVA=0x%x" % function_info["rva"]
            )
            continue

        print("\nFUNCTION:", name)

        for site in function_info["inline_sites"]:
            source_file = site.get("source_file")
            source_line = site.get("source_line")

            if not source_file or source_line is None:
                print("  Missing source location:", site["name"])
                continue

            address, matched_line, distance = find_line_address(
                function,
                source_file,
                source_line
            )

            if address is None:
                print(
                    "  Could not find:",
                    site["name"],
                    source_file,
                    source_line
                )
                continue

            code_unit = currentProgram.getListing().getCodeUnitContaining(
                address
            )

            if code_unit is None:
                print(
                    "  No code unit:",
                    site["name"],
                    address
                )
                continue

            if distance == 0:
                comment = "// inlined: %s (line %d)" % (
                    site["name"],
                    matched_line
                )
            else:
                comment = "// inlined: %s (line %d, DIA line %d, distance %+d)" % (
                    site["name"],
                    matched_line,
                    source_line,
                    matched_line - source_line
                )

            code_unit.setComment(
                CommentType.PRE,
                comment
            )

            print(
                "  Annotated:",
                site["name"],
                "at",
                address,
                "(DIA line",
                source_line,
                "-> Ghidra line",
                matched_line,
                "distance",
                matched_line - source_line,
                ")"
            )


annotate()