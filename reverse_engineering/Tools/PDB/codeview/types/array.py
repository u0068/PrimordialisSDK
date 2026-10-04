from dataclasses import dataclass

from PDB.codeview.tpi import *
from PDB.codeview.types.numeric_leaf import numeric_leaf
from PDB.codeview.types.member_records.base import read_cstring
from .registry import register_parser


@dataclass
class ArrayType(Type):
    element_type: TypeRef
    index_type: TypeRef
    size: int
    name: str


ARRAY_SCHEMA = RecordSchema(
    type_index("element_type"),
    type_index("index_type"),
)


def convert_array(index, fields, reader):
    size = numeric_leaf(reader)
    name = read_cstring(reader)

    return ArrayType(
        index=index,
        element_type=fields["element_type"],
        index_type=fields["index_type"],
        size=size,
        name=name,
    )


register_parser(
    LF_ARRAY,
    RecordParser(
        schema=ARRAY_SCHEMA,
        converter=convert_array,
    ),
)