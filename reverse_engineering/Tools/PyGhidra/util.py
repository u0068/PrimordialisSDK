#@category PrimordialisSDK
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
        or (name[:3] in ["LZ4", "stb", "tag", "vtc", "vts", "pmf", "bad"]) and "stbtt" not in name
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
        # TODO: Exclude based on the header they are defined in
        or name in ["mat_and_color", "work_task", "lfClass", "cParams_t", "tm", "lfTaggedUnion", "cnd_t", "lconv",
                    "code_page_info", "components_type", "process_end_policy_properties", "windowing_model_policy_properties"
                    "tss_global_data_t", "cachedint", "guard", "scoped_get_last_error_reset", "begin_thread_init_policy_properties",
                    "write_result", "scoped_global_state_reset", "scoped_fp_state_reset", "fp_control_word_guard"
                    "developer_information_policy_properties", "big_integer", "floating_point_value", "floating_point_string",
                    "unpack_index", "components_type", "exception", "nothrow_t", "exception_ptr", "nested_exception",
                    "nullopt_t", "strong_ordering", "bad_optional_access", "partial_ordering", "weak_ordering", "type_info"
                    "in_place_t", "dangling", "errentry", "environment_strings_traits", "beginthread_thunk_data",
                    "filwbuf_context", "formatting_buffer", "state_transition_pair", "file_options", "lfClass2", "pow_log_data"]
    ) and not "color" in name

def is_primordialis_type(dt, currentProgram):
    manager = dt.getDataTypeManager()

    if manager is None:
        return False

    return manager == currentProgram.getDataTypeManager() and "primordialis_avx.pbd" in dt.getCategoryPath()

def convert_type(name):
    if name in ["uint", "dword"]:
        return "uint32_t"
    elif name in ["ulong", "ulonglong", "ulong64"]:
        return "uint64_t"
    elif name in ["long", "longlong", "long64", "__uint64"]:
        return "int64_t"
    elif name in ["ushort"]:
        return "uint16_t"
    elif name in ["uchar", "byte"]:
        return "uint8_t"
    elif name in ["pointer"]:
        return "void*"
    elif name in ["_LARGE_INTEGER"]:
        return "union _LARGE_INTEGER"
    else:
        return name

def inspect_type(dt, level=0):
    print(" " * level, dt.getClass().getName())
    print(" " * level, "name:", dt.getName())
    print(" " * level, "display:", dt.getDisplayName())

    if hasattr(dt, "getDataType"):
        base = dt.getDataType()
        if base and base != dt:
            inspect_type(base, level + 2)

def c_name(dt):
    name = dt.getDisplayName()

    if hasattr(dt, "getDataType"):
        base = dt.getDataType()
        print("base:", base.getClass().getName())
        print("base name:", base.getDisplayName())

    if ":" in name:
        name = name.split(":")[0]

    name = name.replace("<", "").replace(">", "").replace("-","_")

    name = convert_type(name)

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