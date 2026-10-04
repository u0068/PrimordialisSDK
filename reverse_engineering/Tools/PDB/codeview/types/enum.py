from dataclasses import dataclass

from PDB.codeview.tpi import *
from PDB.codeview.types.member_records.base import read_cstring
from .class_types import CLASS_HAS_UNIQUE_NAME
from .registry import register_parser


@dataclass
class EnumType(Type):
    member_count: int
    properties: int
    underlying: TypeRef
    field_list: TypeRef
    name: str
    unique_name: str | None


ENUM_SCHEMA = RecordSchema(
    u16("member_count"),
    u16("properties"),
    type_index("underlying"),
    type_index("field_list"),
)


def convert_enum(index, fields, reader):
    properties = fields["properties"]

    name = read_cstring(reader)

    unique_name = None
    if properties & CLASS_HAS_UNIQUE_NAME:
        unique_name = read_cstring(reader)

    return EnumType(
        index=index,
        member_count=fields["member_count"],
        properties=properties,
        underlying=fields["underlying"],
        field_list=fields["field_list"],
        name=name,
        unique_name=unique_name,
    )


register_parser(
    LF_ENUM,
    RecordParser(
        schema=ENUM_SCHEMA,
        converter=convert_enum,
    ),
)