from dataclasses import dataclass

from PDB.codeview.tpi import *
from .registry import register_parser

CV_FLDATTR_ACCESS_MASK = 0x0003
CV_FLDATTR_STOCK = 0x0004
CV_FLDATTR_VIRTUAL = 0x0008
CV_FLDATTR_STATIC = 0x0010
CV_FLDATTR_FRIEND = 0x0020
CV_FLDATTR_INTRO = 0x0040
CV_FLDATTR_PURE = 0x0080
CV_FLDATTR_PUREINTRO = 0x0100

@dataclass
class MethodListEntry:
    attributes: int
    type: TypeRef
    vbaseoff: int | None


@dataclass
class MethodListType(Type):
    methods: list[MethodListEntry]


def convert_methodlist(index, fields, reader):
    methods = []

    while reader.remaining():
        attributes = reader.u16()
        type_ref = TypeRef(reader.u32())

        vbaseoff = None

        # Intro/virtual/unknown flags determine whether vbaseoff exists.
        # CV_fldattr_intro = 0x02
        # CV_fldattr_virt = 0x04
        # CV_fldattr_pure = 0x10
        # CV_fldattr_pureintro = 0x20
        if attributes & 0x08:
            vbaseoff = reader.i32()

        methods.append(MethodListEntry(
            attributes=attributes,
            type=type_ref,
            vbaseoff=vbaseoff,
        ))

    return MethodListType(
        index=index,
        methods=methods,
    )


METHODLIST_PARSER = RecordParser(
    schema=RecordSchema(),
    converter=convert_methodlist,
)


register_parser(
    LF_METHODLIST,
    METHODLIST_PARSER,
)