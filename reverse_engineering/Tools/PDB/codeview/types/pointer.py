from PDB.codeview.tpi import *
from .registry import register_parser

POINTER_KIND_MASK = 0x1F
POINTER_MODE_MASK = 0x07
POINTER_MODIFIER_MASK = 0x1F
POINTER_SIZE_MASK = 0xFF
POINTER_FLAGS_MASK = 0x07

POINTER_KIND_SHIFT = 0
POINTER_MODE_SHIFT = 5
POINTER_MODIFIER_SHIFT = 8
POINTER_SIZE_SHIFT = 13
POINTER_FLAGS_SHIFT = 16

POINTER_TO_DATA_MEMBER = 2
POINTER_TO_MEMBER_FUNCTION = 3


@dataclass
class PointerAttributes:
	kind: int
	mode: int
	modifiers: int
	size: int
	flags: int


def parse_pointer_attributes(value: int) -> PointerAttributes:
	return PointerAttributes(
		kind=(value >> POINTER_KIND_SHIFT) & POINTER_KIND_MASK,
		mode=(value >> POINTER_MODE_SHIFT) & POINTER_MODE_MASK,
		modifiers=(value >> POINTER_MODIFIER_SHIFT) & POINTER_MODIFIER_MASK,
		size=(value >> POINTER_SIZE_SHIFT) & POINTER_SIZE_MASK,
		flags=(value >> POINTER_FLAGS_SHIFT) & POINTER_FLAGS_MASK,
	)


@dataclass
class MemberPointerInfo:
	containing_type: TypeRef
	representation: int


@dataclass
class PointerType(Type):
	pointee: TypeRef
	attributes: PointerAttributes
	member_info: MemberPointerInfo | None


def convert_pointer(index, fields, reader):
	attributes = parse_pointer_attributes(
		fields["attributes"]
	)

	member_info = None

	if attributes.mode in (
			POINTER_TO_DATA_MEMBER,
			POINTER_TO_MEMBER_FUNCTION,
	):
		member_info = MemberPointerInfo(
			containing_type=TypeRef(reader.u32()),
			representation=reader.u32(),
		)

	return PointerType(
		index=index,
		pointee=fields["pointee"],
		attributes=attributes,
		member_info=member_info,
	)


def parse_pointer_remaining(reader, fields):
	attributes = fields["attributes"]
	if attributes.mode in (
			POINTER_TO_DATA_MEMBER,
			POINTER_TO_MEMBER_FUNCTION,
	):
		if reader.remaining() < 8:
			raise ValueError(
				"Member pointer has incomplete Member Ptr Info"
			)

		member_info = MemberPointerInfo(
			containing_type=TypeRef(reader.u32()),
			representation=reader.u32(),
		)
		return member_info
	elif reader.remaining() != 0:
		remaining = reader.read(reader.remaining())
		raise ValueError(
			f"Unexpected {reader.remaining()} bytes "
			f"after LF_POINTER "
			f"{attributes.mode=:#x} "
			f"{len(remaining)} bytes: {remaining.hex(' ')}"
		)
	return {}


POINTER_PARSER = RecordParser(
	schema=RecordSchema(
		type_index("pointee"),
		u32("attributes")
	),
	converter=convert_pointer,
	parse_remaining=parse_pointer_remaining
)
register_parser(LF_POINTER, POINTER_PARSER)
