from codeview.tpi import TPI, TYPE_NAMES, RECORD_PARSERS
from msf_stream import MSF
from binary_reader import PDBInfo

print("Supported types: ")
print([(TYPE_NAMES[key] if key in TYPE_NAMES else "") for key, value in RECORD_PARSERS.items()])

msf = MSF("C:\Program Files (x86)\Steam\steamapps\common\Primordialis\primordialis_avx.pdb")

pdb_info = PDBInfo(msf.read_stream(1))

tpi = TPI(msf.read_stream(2))
