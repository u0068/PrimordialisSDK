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


def iter_type_records(reader: BinaryReader, first_index: int):
    index = first_index

    while reader.remaining() > 0:
        record_start = reader.offset

        length = reader.u16()

        if length == 0:
            break

        kind = reader.u16()
        payload_len = length - 2
        payload = reader.read(payload_len)

        padding_amount = 0
        try:
            if reader.offset % 4 and is_padding_start(reader):
                padding_amount = consume_padding(reader)
        except Exception as e:
            print(f"Failed to parse padding: {e}")
            reader.offset = record_start
            print(f"Payload: " + reader.read(length+2).hex(' ') + " || " + reader.read(16).hex(' '))
            raise

        yield RawTypeRecord(
            index=index,
            position=record_start,
            kind=kind,
            data=payload[:payload_len - padding_amount],
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
    if remaining != 0 and is_padding_start(reader):
        consume_padding(reader, True)
        remaining = reader.remaining()
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
        reader.offset = header.header_size

        for record in iter_type_records(
                reader,
                header.minimum_type_index
        ):
            print(
                f"index={record.index:#x}: "
                f"pos={record.position:#x}, "
                f"kind={record.kind:#x}, "
                f"name={kind_name(record.kind)}, "
                f"({len(record.data):#x} bytes)"
            )
            try:
                parsed_record = parse_type_record(record)
                self.types[record.index] = parsed_record
            except Exception as e:
                print(f"Failed to parse {kind_name(record.kind)}: {e}\n"
                      f"Data: {data[record.position : record.position+len(record.data)+4].hex(' ')}"
                      f" || {data[record.position+len(record.data)+4 : record.position+len(record.data)+16].hex(' ')}\n"
                      "Pos:  " + " ".join([("0" if i < 0x10 else "") + f"{i:x}" for i in range(0, reader.offset-record.position)]) + " ^READER\n"
                      f"READER POS: {reader.offset:#x}")
                raise
