from dataclasses import dataclass
from PDB.codeview.tpi import *
from .member_records.base import MEMBER_PARSERS
from .registry import register_parser

@dataclass
class EnumType(Type):
    member_count: int
    properties: int
    underlying_type: TypeRef
    field_list: TypeRef
    name: str
    unique_name: str | None