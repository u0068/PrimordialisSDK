from PDB.binary_reader import TypeRef
from PDB.c_exporter.util import convert_type
from PDB.codeview.types.array import ArrayType
from PDB.codeview.types.class_types import StructureType
from PDB.codeview.types.fieldlist import FieldListIndex
from PDB.codeview.types.modifier import ModifierType
from PDB.codeview.types.pointer import PointerType
from PDB.codeview.types.union import UnionType


class TypeResolver:
    def __init__(self, types):
        self.types = types

    def resolve(self, ref):
        if isinstance(ref, TypeRef):
            if ref.index not in self.types:
                return None
            return self.types[ref.index]
        elif isinstance(ref, int):
            return self.types[ref]
        return ref

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

        if not field_list:
            return fields

        for member in field_list.members:
            if isinstance(member, FieldListIndex):
                fields.extend(
                    self._field_list(self.resolve(member.type))
                )
            else:
                fields.append(member)

        return fields

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
        type = self.resolve(type)
        if hasattr(type, "name"):
            if not type.name:
                return "unnamed"
            return type.name
        else:
            return "unnamed"

    def c_name(self, dt):
        name = self.name(dt)

        if ":" in name:
            name = name.split(":")[0]

        name = name.replace("<", "").replace(">", "").replace("-", "_")

        name = convert_type(name)

        return name