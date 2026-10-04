from dataclasses import dataclass

from PDB.codeview.tpi import *
from .registry import register_parser


@dataclass
class LabelType(Type):
    mode: int


LABEL_SCHEMA = RecordSchema(
    u16("mode"),
)


def convert_label(index, fields, reader):
    return LabelType(
        index=index,
        mode=fields["mode"],
    )


register_parser(
    LF_LABEL,
    RecordParser(
        schema=LABEL_SCHEMA,
        converter=convert_label,
    ),
)