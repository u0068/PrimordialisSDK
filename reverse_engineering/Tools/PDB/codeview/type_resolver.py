from PDB.binary_reader import TypeRef
from PDB.codeview.types.class_types import StructureType
from PDB.codeview.types.fieldlist import FieldListIndex
from PDB.codeview.types.modifier import ModifierType
from PDB.codeview.types.union import UnionType


class TypeResolver:
    def __init__(self, types):
        self.types = types

    def resolve(self, ref):
        if isinstance(ref, TypeRef):
            return self.types[ref.index]
        return ref

    def unwrap(self, type):
        type = self.resolve(type)

        while isinstance(type, ModifierType):
            type = self.resolve(type.modified_type)

        return type

    def fields(self, type):
        type = self.resolve(type)

        if not isinstance(type, (StructureType, UnionType)):
            return []

        return self._field_list(self.resolve(type.field_list))

    def _field_list(self, field_list):
        fields = []

        for member in field_list.members:
            if isinstance(member, FieldListIndex):
                fields.extend(
                    self._field_list(self.resolve(member.type))
                )
            else:
                fields.append(member)

        return fields