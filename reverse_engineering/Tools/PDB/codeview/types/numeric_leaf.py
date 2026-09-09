from PDB.codeview.tpi import *

LF_NUMERIC = 0x8000

LF_CHAR = 0x8000
LF_SHORT = 0x8001
LF_USHORT = 0x8002
LF_LONG = 0x8003
LF_ULONG = 0x8004
LF_REAL32 = 0x8005
LF_REAL64 = 0x8006
LF_REAL80 = 0x8007
LF_REAL128 = 0x8008
LF_QUADWORD = 0x8009
LF_UQUADWORD = 0x800A


def numeric_leaf(reader: BinaryReader) -> int:
	kind = reader.u16()

	if kind < LF_NUMERIC:
		return kind

	if kind == LF_CHAR:
		return int.from_bytes(reader.read(1), "little", signed=True)

	if kind == LF_SHORT:
		return int.from_bytes(reader.read(2), "little", signed=True)

	if kind == LF_USHORT:
		return reader.u16()

	if kind == LF_LONG:
		return reader.i32()

	if kind == LF_ULONG:
		return reader.u32()

	if kind == LF_QUADWORD:
		return int.from_bytes(
			reader.read(8),
			"little",
			signed=True,
		)

	if kind == LF_UQUADWORD:
		return int.from_bytes(
			reader.read(8),
			"little",
			signed=False,
		)

	raise NotImplementedError(
		f"Unsupported numeric leaf {kind_name(kind)}"
	)


def numeric(name):
	return FieldParser(name, numeric_leaf)
