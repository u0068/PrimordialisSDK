#@category PrimordialisSDK
import ghidra.program.model.data.DataType
import ghidra.program.model.data.SourceArchive
def inspect_source_metadata(dt):
    print("\nDatatype:", dt.getName())
    print("\nSource:", dt.getPathName())

class TypeExporter:

    def __init__(self, currentProgram):
        self.manager = currentProgram.getDataTypeManager()

    def get_types(self, currentProgram):

        root = self.manager.getRootCategory()

        primordialis_root = root
        for cat in root.getCategories():
            if "primordialis" in cat.getName():
                primordialis_root = cat
                print("Found primordialis root at %s" % cat)
                break

        result = []

        def recurse(cat):

            for dt in cat.getDataTypes():
                inspect_source_metadata(dt)
                result.append(dt)

            for sub in cat.getCategories():
                recurse(sub)

        recurse(primordialis_root)

        return result