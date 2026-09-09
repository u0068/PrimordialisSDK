from dataclasses import dataclass
from typing import Callable, Any
from PDB.codeview.types.type_names import *

from PDB.binary_reader import BinaryReader
from .types.padding import consume_padding, is_padding_start


class TPIHeader:
    def __init__(self, reader):
        self.version = reader.u32()
        self.header_size = reader.u32()
        self.minimum_type_index = reader.u32()
        self.maximum_type_index = reader.u32()
        self.type_record_bytes = reader.u32()


@dataclass(frozen=True)
class TypeRef:
    index: int


@dataclass
class Type:
    index: int


@dataclass
class RawTypeRecord:
    index: int
    position: int
    kind: int
    data: bytes


def iter_type_records(data: bytes, first_index: int, start_position: int):
    reader = BinaryReader(data)
    index = first_index

    while reader.remaining() > 0:
        length = reader.u16()

        if length == 0:
            break

        kind = reader.u16()
        payload = reader.read(length - 2)

        yield RawTypeRecord(
            index=index,
            position=start_position + reader.offset - len(payload),
            kind=kind,
            data=payload,
        )

        index += 1


@dataclass(frozen=True)
class FieldParser:
    name: str
    parser: Callable[[BinaryReader], Any]


def u8(name):
    return FieldParser(name, lambda r: r.u8())


def u16(name):
    return FieldParser(name, lambda r: r.u16())


def u32(name):
    return FieldParser(name, lambda r: r.u32())


def u64(name):
    return FieldParser(name, lambda r: r.u64())


def i32(name):
    return FieldParser(name, lambda r: r.i32())


def type_index(name):
    return FieldParser(
        name,
        lambda r: TypeRef(r.u32())
    )


class RecordSchema:
    def __init__(self, *fields: FieldParser):
        self.fields = fields

    def parse(self, reader: BinaryReader):
        result = {}

        for field in self.fields:
            result[field.name] = field.parser(reader)

        return result


@dataclass(frozen=True)
class RecordParser:
    schema: RecordSchema
    converter: Callable
    parse_remaining: Callable | None = None


from .types.registry import RECORD_PARSERS


def parse_type_record(record):
    parser = RECORD_PARSERS.get(record.kind)

    if parser is None:
        return record

    reader = BinaryReader(record.data)

    fields = parser.schema.parse(reader)

    result = parser.converter(
        record.index,
        fields,
        reader,
    )

    remaining = reader.remaining()
    # print(f"Remaining: {remaining}")
    if remaining > 0 and is_padding_start(reader):
        consume_padding(reader)
        remaining = reader.remaining()
        # print(f"Remaining: {remaining}")
    if remaining != 0:
        raise ValueError(
            f"Parser for {kind_name(record.kind)} left "
            f"{remaining} bytes: {reader.data[-remaining:].hex(' ')}"
        )

    return result


class TPI:
    def __init__(self, data):
        self.types = {}

        reader = BinaryReader(data)
        header = TPIHeader(reader)

        for record in iter_type_records(
                data[header.header_size:],
                header.minimum_type_index,
                header.header_size
        ):
            print(
                f"{record.index:#x}: "
                f"pos={record.position:#x}, "
                f"kind={record.kind:#x}, "
                f"name={kind_name(record.kind)}"
            )
            try:
                parsed_record = parse_type_record(record)
                self.types[record.index] = parsed_record
            except Exception as e:
                print(f"Failed to parse {kind_name(record.kind)}: {e}\n"
                      f"Data: {data[record.position: record.position + len(record.data)].hex(' ')}"
                      f" | {data[record.position + len(record.data): record.position + 2 * len(record.data)].hex(' ')}")
                raise
