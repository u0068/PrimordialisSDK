from PDB.codeview.types.numeric_leaf import *

MEMBER_ACCESS_MASK = 0x0003
MEMBER_KIND_MASK = 0x001C
MEMBER_KIND_SHIFT = 2

MEMBER_PARSERS = {}

MEMBER_KIND = {
	0: "vanilla",
	1: "virtual",
	2: "static",
	3: "friend",
	4: "intro",
	5: "pure_virtual",
	6: "pure_intro",
}


def member_kind(attributes: int) -> int:
	return (
			(attributes & MEMBER_KIND_MASK)
			>> MEMBER_KIND_SHIFT
	)


def read_cstring(reader: BinaryReader) -> str:
	start = reader.offset

	while reader.remaining() > 0:
		if reader.data[reader.offset] == 0:
			result = reader.data[start:reader.offset]
			reader.offset += 1
			return result.decode("utf-8", errors="replace")

		reader.offset += 1

	raise EOFError("Unterminated CodeView string")


METHOD_KIND_SHIFT = 2
METHOD_KIND_MASK = 0x001C

METHOD_VANILLA = 0
METHOD_VIRTUAL = 1
METHOD_STATIC = 2
METHOD_FRIEND = 3
METHOD_INTRODUCING_VIRTUAL = 4
METHOD_PURE_VIRTUAL = 5
METHOD_PURE_INTRODUCING_VIRTUAL = 6


def get_method_kind(attributes: int) -> int:
	return (
			(attributes & METHOD_KIND_MASK)
			>> METHOD_KIND_SHIFT
	)
