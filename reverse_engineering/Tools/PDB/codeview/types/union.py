from dataclasses import dataclass
from PDB.codeview.tpi import *
from PDB.codeview.types.numeric_leaf import numeric_leaf
from .class_types import CLASS_HAS_UNIQUE_NAME
from .member_records.base import read_cstring
from .registry import register_parser

@dataclass
class UnionType(Type):
    member_count: int
    properties: int
    field_list: TypeRef
    size: int
    name: str
    unique_name: str | None

UNION_SCHEMA = RecordSchema(
    u16("member_count"),
    u16("properties"),
    type_index("field_list"),
)
def convert_union(index, fields, reader):
    properties = fields["properties"]

    size = numeric_leaf(reader)
    name = read_cstring(reader)

    unique_name = None
    if properties & CLASS_HAS_UNIQUE_NAME:
        unique_name = read_cstring(reader)

    return UnionType(
        index=index,
        member_count=fields["member_count"],
        properties=properties,
        field_list=fields["field_list"],
        size=size,
        name=name,
        unique_name=unique_name,
    )
register_parser(
    LF_UNION,
    RecordParser(
        schema=UNION_SCHEMA,
        converter=convert_union,
    ),
)