from PDB.binary_reader import BinaryReader


def is_padding_start(reader: BinaryReader) -> bool:
	if reader.remaining() == 0:
		return False

	value = reader.data[reader.offset]

	if 0xF0 <= value <= 0xFF:
		print(f"Found padding start: {value:#x}")
		return True
	return False


def consume_padding(reader: BinaryReader):
	expected = reader.u8()

	if not 0xF0 <= expected <= 0xFF:
		raise ValueError(
			f"Expected LF_PADn, got {expected:#x}"
		)

	# LF_PADn means n padding bytes remain,
	# including this byte.
	count = expected - 0xF0

	for i in range(1, count):
		value = reader.u8()

		print(f"Consumed padding: {value:#x}")

		expected -= 1

		if value != expected:
			raise ValueError(
				f"Invalid LF_PADn sequence: "
				f"expected {expected:#x}, got {value:#x}"
			)