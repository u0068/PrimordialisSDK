from PDB.c_exporter.util import indent, is_skipped_name, is_generated_name
from PDB.codeview.types.array import ArrayType
from PDB.codeview.types.bitfield import BitFieldType
from PDB.codeview.types.class_types import StructureType
from PDB.codeview.types.pointer import PointerType
from PDB.codeview.types.union import UnionType

class CEmitter:

    def __init__(self, resolver):
        self.lines = []
        self.resolver = resolver
        print("C Emitter Initialised!")

    def emit(self, line="", level=0):
        self.lines.append(indent(level) + line)

    def write(self, path):
        print("Writing to:",path)
        with open(path, "w") as f:
            f.write("\n".join(self.lines))
            print("\n".join(self.lines))


    def emit_field(self, dt, field_name=None, level=0):
        self.emit(
            "%s %s;" % (
                self.resolver.c_name(dt),
                field_name),
            level)

        # print("Emitted %s %s" % (
        #     dt.getDisplayName(),
        #     field_name))

    def emit_function_pointer(self, dt, field_name, level = 0):
        ret = self.resolver.c_name(dt.return_type)

        args = []

        for arg in dt.argument_list:
            args.append(
                self.resolver.c_name(arg)
            )

        # if dt.hasVarArgs():
        #     args.append("...")

        params = ", ".join(args)

        self.emit(
            f"{ret} (*{field_name})({params});",
            level
        )

    def emit_forward_declarations(self, types):

        forward = set()

        for dt in types:
            # if not is_skipped_name(self.resolver.name(dt)):
                forward.update(self.resolver.get_pointer_dependencies(dt))


        for dt in sorted(forward, key=lambda x: self.resolver.name(x)):
            # if not is_skipped_name(resolver.name(dt)):
                dt = self.resolver.resolve(dt)
                if isinstance(dt, StructureType):
                    self.emit(
                        "typedef struct %s %s;" % (self.resolver.c_name(dt), self.resolver.c_name(dt))
                    )

                elif isinstance(dt, UnionType):
                    self.emit(
                        "typedef union %s %s;" % (self.resolver.c_name(dt), self.resolver.c_name(dt))
                    )


        if forward:
            self.emit()


    def emit_definition(self, dt, field_name = None, level=0):

        if not dt:
            return

        if level == 0 and is_skipped_name(self.resolver.c_name(dt)):
            return

        dt = self.resolver.resolve(dt)

        #
        # STRUCT / UNION
        #

        if isinstance(dt, (StructureType, UnionType)):

            anonymous = is_generated_name(self.resolver.name(dt)) and level > 0

            data_type = "struct" if isinstance(dt, StructureType) else "union"

            if anonymous:
                self.emit(data_type, level)
            elif level > 0:
                self.emit_field(dt, field_name, level)
                return
            else:
                self.emit("typedef %s %s" % (data_type, self.resolver.c_name(dt)), level)

            self.emit("{", level)

            for field in self.resolver.fields(dt):
                self.emit_definition(
                    self.resolver.resolve(field.underlying),
                    field.name,
                    level + 1)

            self.emit("} %s" % dt.name, level)

            if field_name and not is_generated_name(field_name):
                self.lines[-1] += " " + field_name

            self.lines[-1] += ";\n"

            # print("Emitted struct %s" % self.resolver.name(dt))

            return

        #
        # ARRAY
        #

        if isinstance(dt, ArrayType):

            element = self.resolver.c_name(dt)
            num_elements = dt.size # TODO: Fix this to use the number of elements instead of size in bytes

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

            # print("Emitted Array %s" % resolver.name(dt))

            return

        if not field_name:
            return

        #
        # POINTER
        #

        if isinstance(dt, PointerType):

            data_type =  dt.underlying
            if data_type:
                target = self.resolver.c_name(data_type)
            else:
                target = "void"

            # if isinstance(data_type, FunctionDefinition):
            #     self.emit_function_pointer(data_type, field_name, level)
            #     return

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

        # if isinstance(dt, TypeDef):
        #     return self.emit_definition(
        #         dt.getBaseDataType(),
        #         field_name,
        #         level)

        #
        # BIT FIELD
        #

        if isinstance(dt, BitFieldType):
            type_name = self.resolver.c_name(dt)

            bit_size = dt.bit_size

            if bit_size > 0:
                self.emit(f"{type_name} {field_name} : {bit_size};", level)
            else:
                self.emit(f"{type_name} {field_name};", level)
            return

        #
        # EVERYTHING ELSE
        #

        self.emit_field(dt, field_name, level)