import re
from ghidra.program.model.data import *

def indent(level):
    return "    " * level


def is_generated_name(name):
    return (
            re.match(r".*_u_\d+$", name)
            or re.match(r".*_s_\d+$", name)
            or re.match(r"field\d+_0x[0-9a-fA-F]+$", name)
    )


def is_generated_field(name):
    return re.match(r"field\d+_0x[0-9a-fA-F]+$", name)

def is_skipped_name(name):
    return (
        not name[0].isalpha()
        or name[0].isupper()
        or (name[:3] in ["LZ4", "stb", "tag", "vtc", "vts"]) and "stbtt" not in name
        or "undefined" in name
        or "lambda" in name
        or "unnamed" in name
        or "steam_callbacks" in name
        or "WAVEFORMAT" in name
        or name == "parameter_data"
        or name == "iterator"
        or name == "ansi_string"
        or not name.replace("_","").isalnum()
        or is_generated_name(name)
    ) and not "color" in name

def is_primordialis_type(dt, currentProgram):
    manager = dt.getDataTypeManager()

    if manager is None:
        return False

    return manager == currentProgram.getDataTypeManager() and "primordialis_avx.pbd" in dt.getCategoryPath()

def cpp_name(dt):
    name = dt.getDisplayName()

    if ":" in name:
        name = name.split(":")[0]

    name = name.replace("<", "").replace(">", "").replace("-","_")

    return name

def get_dependencies(dt):

    dependencies = set()

    if not isinstance(dt, (Structure, Union)):
        return dependencies

    for component in dt.getComponents():

        dep = component.getDataType()

        # Pointers do not require definitions
        if isinstance(dep, Pointer):
            continue


        # Arrays contain their element type
        while isinstance(dep, Array):
            dep = dep.getDataType()


        if isinstance(dep, (Structure, Union)):
            if dep.getName() != dt.getName():
                dependencies.add(dep)


    return dependencies

def get_pointer_dependencies(dt):

    pointers = set()

    if not isinstance(dt, (Structure, Union)):
        return pointers


    for component in dt.getComponents():

        dep = component.getDataType()

        if isinstance(dep, Pointer):

            pointed = dep.getDataType()

            if isinstance(pointed, (Structure, Union)):
                pointers.add(pointed)


        elif isinstance(dep, Array):

            while isinstance(dep, Array):
                dep = dep.getDataType()

            if isinstance(dep, Pointer):
                pointed = dep.getDataType()

                if isinstance(pointed, (Structure, Union)):
                    pointers.add(pointed)

        elif isinstance(dep, (Structure, Union)):
            pointers.update(get_pointer_dependencies(dep))


    return pointers

def sort_types(types):

    result = []
    visited = set()

    def visit(dt):

        if dt in visited:
            return

        visited.add(dt)

        for dep in get_dependencies(dt):
            visit(dep)

        if not is_generated_name(dt.getName()):
            result.append(dt)

    for dt in types:
        if not is_skipped_name(dt.getDisplayName()):
            visit(dt)

    return result
