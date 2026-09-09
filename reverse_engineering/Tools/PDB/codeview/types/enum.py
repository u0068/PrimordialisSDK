from dataclasses import dataclass

from .member import *


@dataclass
class EnumType(Type):
	name: str
	underlying_type: TypeRef
	field_list: TypeRef
	attributes: int
