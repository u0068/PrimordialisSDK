from dataclasses import dataclass

from PDB.codeview.tpi import *
from .registry import register_parser


METHOD_KIND_SHIFT = 2
METHOD_KIND_MASK = 0x1C

METHOD_KIND_INTRODUCING_VIRTUAL = 0x04
METHOD_KIND_PURE_INTRODUCING_VIRTUAL = 0x06


@dataclass
class MethodListEntry:
    attributes: int
    type: TypeRef
    vtable_offset: int | None


@dataclass
class MethodListType(Type):
    methods: list[MethodListEntry]


METHODLIST_SCHEMA = RecordSchema()


def is_introducing_virtual(attributes: int) -> bool:
    kind = (attributes & METHOD_KIND_MASK) >> METHOD_KIND_SHIFT

    return kind in (
        METHOD_KIND_INTRODUCING_VIRTUAL,
        METHOD_KIND_PURE_INTRODUCING_VIRTUAL,
    )


def convert_methodlist(index, fields, reader):
    methods = []

    while reader.remaining():
        attributes = reader.u16()

        # LF_METHODLIST contains a reserved/padding u16 between
        # the attributes and the type index.
        reader.u16()

        type_ref = TypeRef(reader.u32())

        vtable_offset = None

        if is_introducing_virtual(attributes):
            vtable_offset = reader.i32()

        methods.append(
            MethodListEntry(
                attributes=attributes,
                type=type_ref,
                vtable_offset=vtable_offset,
            )
        )

    return MethodListType(
        index=index,
        methods=methods,
    )


register_parser(
    LF_METHODLIST,
    RecordParser(
        schema=METHODLIST_SCHEMA,
        converter=convert_methodlist,
    ),
)