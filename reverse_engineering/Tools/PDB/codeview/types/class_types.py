from dataclasses import dataclass
from PDB.codeview.tpi import *
from PDB.codeview.types.numeric_leaf import numeric_leaf
from .member_records.base import read_cstring
from .padding import is_padding_start, consume_padding
from .registry import register_parser

# Class, Structure and Interface use the same schema

@dataclass
class ClassType(Type):
    member_count: int
    properties: int
    field_list: TypeRef
    derivation_list: TypeRef
    vtable_shape: TypeRef
    size: int
    name: str
    unique_name: str | None
class StructureType(ClassType):
    pass
class InterfaceType(ClassType):
    pass

CLASS_HAS_UNIQUE_NAME = 0x0200

CLASS_SCHEMA = RecordSchema(
    u16("member_count"),
    u16("properties"),
    type_index("field_list"),
    type_index("derivation_list"),
    type_index("vtable_shape"),
)

def make_class_type(kind: int):
    if kind == LF_CLASS:
        return ClassType
    elif kind == LF_STRUCTURE:
        return StructureType
    elif kind == LF_INTERFACE:
        return InterfaceType
    else:
        raise ValueError(f"Unknown class kind: {kind_name(kind)}")

def make_class_type_converter(kind: int):
    def convert_class(index, fields, reader):
        properties = fields["properties"]

        size = numeric_leaf(reader)
        name = read_cstring(reader)

        unique_name = None
        if properties & CLASS_HAS_UNIQUE_NAME:
            unique_name = read_cstring(reader)

        return make_class_type(kind)(
            index=index,
            member_count=fields["member_count"],
            properties=properties,
            field_list=fields["field_list"],
            derivation_list=fields["derivation_list"],
            vtable_shape=fields["vtable_shape"],
            size=size,
            name=name,
            unique_name=unique_name,
        )
    return convert_class

for kind in (LF_CLASS, LF_STRUCTURE, LF_INTERFACE):
    register_parser(kind, RecordParser(
        schema=CLASS_SCHEMA,
        converter=make_class_type_converter(kind),
    ))