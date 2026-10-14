from PDB.binary_reader import TypeRef
from PDB.c_exporter.util import convert_type
from PDB.codeview.types.array import ArrayType
from PDB.codeview.types.class_types import StructureType
from PDB.codeview.types.fieldlist import FieldListIndex
from PDB.codeview.types.member_records.member import DataMember
from PDB.codeview.types.modifier import ModifierType
from PDB.codeview.types.pointer import PointerType
from PDB.codeview.types.union import UnionType
from PDB.codeview.types.primitives import *

class TypeResolver:
    def __init__(self, types):
        self.types = types

    def resolve(self, ref):
        if isinstance(ref, TypeRef):
            index = ref.index
            if index < 0x1000:
                return self.resolve_primitive(index)
            elif index not in self.types:
                return None
            return self.types[index]
        elif isinstance(ref, int):
            if ref < 0x1000:
                return self.resolve_primitive(ref)
            return self.types[ref]
        return ref

    def resolve_primitive(self, index):
        name = PRIMITIVE_TYPES.get(index % 0x100)

        if name is None:
            return PrimitiveType(index, f"primitive_{index:#x}")

        if index >= 0x100:
            name += "*"

        return PrimitiveType(index, name)

    def unwrap(self, type):
        type = self.resolve(type)

        while isinstance(type, ModifierType):
            type = self.resolve(type.underlying)

        return type

    def fields(self, type):
        type = self.resolve(type)

        if not isinstance(type, (StructureType, UnionType)):
            return []

        return self._field_list(self.resolve(type.field_list))

    def _field_list(self, field_list):
        fields = []

        if not field_list or not hasattr(field_list, "members"):
            return fields

        for member in field_list.members:
            if isinstance(member, FieldListIndex):
                fields.extend(self._field_list(self.resolve(member.type)))
            elif self.is_data_member(member):
                fields.append(member)

        return fields

    def is_data_member(self, member):
        return isinstance(member, DataMember)

    def get_dependencies(self, dt):

        dependencies = set()

        if not isinstance(dt, (StructureType, UnionType)):
            return dependencies

        for field in self.fields(dt):

            # Pointers do not require definitions
            if isinstance(field, PointerType):
                continue

            # Arrays contain their element type
            # while isinstance(field, ArrayType):
            #     field = field.getDataType()

            if isinstance(field, (StructureType, UnionType)):
                if self.name(field) != self.name(dt):
                    dependencies.add(field)

        return dependencies

    def get_pointer_dependencies(self, dt):

        dt = self.resolve(dt)

        pointers = set()

        if not isinstance(dt, (StructureType, UnionType)):
            return pointers

        for field in self.fields(dt):

            field = self.resolve(field.underlying)

            if isinstance(field, PointerType):

                pointed = self.resolve(field.underlying)

                if isinstance(pointed, (StructureType, UnionType)):
                    pointers.add(pointed.index)


            elif isinstance(field, ArrayType):

                while isinstance(field, ArrayType):
                    field = self.resolve(field.element_type)

                if isinstance(field, PointerType):
                    pointed = self.resolve(field.underlying)

                    if isinstance(pointed, (StructureType, UnionType)):
                        pointers.add(pointed.index)

            elif isinstance(field, (StructureType, UnionType)):
                pointers.update(self.get_pointer_dependencies(field))

            print(field)
        return pointers

    def name(self, type):
        if not type:
            return "none"
        type_resolved = self.resolve(type)
        if not type_resolved:
            return str(type.index)
        if hasattr(type_resolved, "name"):
            if not type_resolved.name:
                return "unnamed_" + str(type_resolved.index)
            return type_resolved.name
        else:
            return "unnamed_" + str(type_resolved.index)

    def c_name(self, dt):
        name = ""

        if isinstance(dt, ModifierType):
            name += "const " if dt.const else ""
            name += "volatile " if dt.volatile else ""
            name += "unaligned " if dt.unaligned else ""
            dt = self.resolve(dt.underlying)
        elif hasattr(dt, "underlying"):
            name += "type_" + str(dt.index) + "_with_"
            dt = dt.underlying

        name += self.name(dt)

        if ":" in name:
            name = name.split(":")[0]

        name = name.replace("<", "").replace(">", "").replace("-", "_")

        name = convert_type(name)

        return name

    def is_forward_reference(self, type):
        type = self.resolve(type)

        return (
                isinstance(type, (StructureType, UnionType))
                and bool(type.properties & CV_PROP_FWDREF)
        )

CV_PROP_FWDREF = 0x80