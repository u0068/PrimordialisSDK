from PDB.codeview.tpi import *
from .registry import register_parser
from dataclasses import dataclass


@dataclass
class BitFieldType(Type):
    underlying: TypeRef
    bit_size: int
    bit_offset: int
def convert_bitfield(index, fields, reader):
    return BitFieldType(
        index=index,
        underlying=fields["underlying"],
        bit_size=fields["bit_size"],
        bit_offset=fields["bit_offset"],
    )
BITFIELD_SCHEMA = RecordSchema(
    type_index("underlying"),
    u8("bit_size"),
    u8("bit_offset"),
)
register_parser(
    LF_BITFIELD,
    RecordParser(
        schema=BITFIELD_SCHEMA,
        converter=convert_bitfield,
    ),
)