from PDB.binary_reader import BinaryReader


def is_padding_start(reader: BinaryReader) -> bool:
    if reader.remaining() == 0:
        return False

    value = reader.data[reader.offset]

    if 0xF0 <= value <= 0xFF:
        print(f"Found padding start: {value:#x}")
        return True
    return False


def consume_padding(reader, terminal=False):
    remaining = reader.remaining()

    if remaining == 0:
        return

    first = reader.data[reader.offset]

    if not 0xF1 <= first <= 0xF3:
        raise ValueError(
            f"Invalid padding start: {first:#x}"
        )

    count = first - 0xF0

    if terminal and reader.remaining() != count:
        raise ValueError(
            f"Padding marker {first:#x} claims {count} bytes, "
            f"but {reader.remaining()} bytes remain"
        )

    for i in range(count, 0, -1):
        value = reader.u8()
        expected = 0xF0 + i

        if value != expected:
            raise ValueError(
                f"Invalid padding: expected {expected:#x}, "
                f"got {value:#x}"
            )
    return count