from dataclasses import dataclass

from PDB.codeview.tpi import *
from .registry import register_parser


@dataclass
class VTableShapeType(Type):
    slots: list[int]


def convert_vtshape(index, fields, reader):
    count = fields["count"]

    slots = []
    for i in range((count + 1) // 2):
        value = reader.u8()

        slots.append(value & 0x0F)

        if len(slots) < count:
            slots.append((value >> 4) & 0x0F)

    return VTableShapeType(
        index=index,
        slots=slots,
    )


VTSHAPE_SCHEMA = RecordSchema(
    u16("count"),
)


register_parser(
    LF_VTSHAPE,
    RecordParser(
        schema=VTSHAPE_SCHEMA,
        converter=convert_vtshape,
    ),
)