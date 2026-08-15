from util import *


class CppEmitter:

    def __init__(self):
        self.lines = []
        print("CppEmitter Initialised!")

    def emit(self, line="", level=0):
        self.lines.append(indent(level) + line)

    def write(self, path):
        print("Writing to:",path)
        with open(path, "w") as f:
            f.write("\n".join(self.lines))


    def emit_field(self, dt, field_name=None, level=0):
        self.emit(
            "%s %s;" % (
                cpp_name(dt),
                field_name),
            level)

        # print("Emitted %s %s" % (
        #     dt.getDisplayName(),
        #     field_name))

    def emit_function_pointer(self, dt, field_name, level = 0):
        ret = cpp_name(dt.getReturnType())

        args = []

        for arg in dt.getArguments():
            args.append(
                cpp_name(arg.getDataType())
            )

        if dt.hasVarArgs():
            args.append("...")

        params = ", ".join(args)

        self.emit(
            f"{ret} (*{field_name})({params});",
            level
        )

    def emit_forward_declarations(self, types):

        forward = set()

        for dt in types:
            if not is_skipped_name(dt.getName()):
                forward.update(get_pointer_dependencies(dt))


        for dt in sorted(forward, key=lambda x: x.getName()):
            # if not is_skipped_name(dt.getName()):
                if isinstance(dt, Structure):
                    self.emit(
                        "struct %s;" % cpp_name(dt)
                    )

                elif isinstance(dt, Union):
                    self.emit(
                        "union %s;" % cpp_name(dt)
                    )


        if forward:
            self.emit()


    def emit_definition(self, dt, field_name=None, level=0):

        if not dt:
            return

        if level == 0 and is_skipped_name(cpp_name(dt)):
            return

        #
        # STRUCT / UNION
        #

        if isinstance(dt, (Structure, Union)):

            anonymous = is_generated_name(dt.getName()) and level > 0

            type = "struct" if isinstance(dt, Structure) else "union"

            if anonymous:
                self.emit(type, level)
            elif level > 0:
                self.emit_field(dt, field_name, level)
                return
            else:
                self.emit("%s %s" % (type, cpp_name(dt)), level)

            self.emit("{", level)

            for c in dt.getComponents():
                self.emit_definition(
                    c.getDataType(),
                    c.getFieldName(),
                    level + 1)

            self.emit("}", level)

            if field_name and not is_generated_name(field_name):
                self.lines[-1] += " " + field_name

            self.lines[-1] += ";"

            # print("Emitted struct %s" % dt.getName())

            return

        #
        # ARRAY
        #

        if isinstance(dt, Array):

            element = cpp_name(dt.getDataType())
            num_elements = dt.getNumElements()

            if num_elements == 0:
                self.emit(
                    "%s %s;" % (
                        element,
                        field_name),
                    level)
                return

            self.emit(
                "%s %s[%d];" % (
                    element,
                    field_name,
                    num_elements),
                level)

            # print("Emitted Array %s" % dt.getName())

            return

        if not field_name:
            return

        #
        # POINTER
        #

        if isinstance(dt, Pointer):

            data_type =  dt.getDataType()
            if data_type:
                target = cpp_name(data_type)
            else:
                target = "void"

            if isinstance(data_type, FunctionDefinition):
                self.emit_function_pointer(data_type, field_name, level)
                return

            self.emit(
                "%s* %s;" % (
                    target,
                    field_name),
                level)

            # print("Emitted pointer %s" % target)

            return

        #
        # TYPE DEF
        #

        if isinstance(dt, TypeDef):
            return self.emit_definition(
                dt.getBaseDataType(),
                field_name,
                level)

        #
        # BIT FIELD
        #

        if isinstance(dt, BitFieldDataType):
            type_name = cpp_name(dt)

            bit_size = dt.getBitSize()

            if bit_size > 0:
                self.emit(f"{type_name} {field_name} : {bit_size};", level)
            else:
                self.emit(f"{type_name} {field_name};", level)
            return

        #
        # EVERYTHING ELSE
        #

        self.emit_field(dt, field_name, level)

    def emit_printer(self, dt):
        # This is pretty scuffed, output requires alterations to use
        # That was acceptable because the printer was a single-use script
        # If you plan on using this again in the future, consider fixing it first

        if isinstance(dt, (Structure, Union)):
            for component in dt.getComponents():
                self.emit_printer(component)
            return

        data_type = dt.getDataType()

        if isinstance(data_type, (Structure, Union)):
            for component in data_type.getComponents():
                self.emit_printer(component)
            return

        type_format = ""
        if data_type.getName == "float":
            type_format = ":.2g"

        self.emit("""outFile << std::format("%s: {%s}\\n", material.%s);""" % (dt.getFieldName(), type_format, dt.getFieldName()), 0)