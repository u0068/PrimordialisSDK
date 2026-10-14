from dataclasses import dataclass

from PDB.codeview.tpi import *
from .registry import register_parser


@dataclass
class VFTableType(Type):
    complete_class: TypeRef
    overridden_vftable: TypeRef
    vfptr_offset: int
    name: str
    method_names: list[str]


VFTABLE_SCHEMA = RecordSchema(
    type_index("complete_class"),
    type_index("overridden_vftable"),
    u32("vfptr_offset"),
    u32("names_len"),
)


def convert_vftable(index, fields, reader):
    names_len = fields["names_len"]

    if reader.remaining() < names_len:
        raise ValueError(
            f"LF_VFTABLE NamesLen is {names_len}, "
            f"but only {reader.remaining()} bytes remain"
        )

    names_data = reader.read(names_len)

    names = names_data.split(b"\0")

    # The names area should consist entirely of null-terminated strings.
    if names[-1] != b"":
        raise ValueError(
            "LF_VFTABLE names data is not null-terminated"
        )

    names = names[:-1]

    if not names:
        raise ValueError(
            "LF_VFTABLE contains no vtable name"
        )

    decoded_names = [
        name.decode("utf-8")
        for name in names
    ]

    return VFTableType(
        index=index,
        complete_class=fields["complete_class"],
        overridden_vftable=fields["overridden_vftable"],
        vfptr_offset=fields["vfptr_offset"],
        name=decoded_names[0],
        method_names=decoded_names[1:],
    )


register_parser(
    LF_VFTABLE,
    RecordParser(
        schema=VFTABLE_SCHEMA,
        converter=convert_vftable,
    ),
)