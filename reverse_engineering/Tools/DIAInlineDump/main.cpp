#include <windows.h>
#include <dia2.h>
#include <comdef.h>
#include <nlohmann_json/json.hpp>

#include <fstream>
#include <iostream>
#include <unordered_map>

#pragma comment(lib, "diaguids.lib")

using json = nlohmann::ordered_json;

static std::string getName(IDiaSymbol* symbol)
{
    BSTR name = nullptr;

    if (SUCCEEDED(symbol->get_undecoratedName(&name)) && name)
    {
        std::string result = (const char*)_bstr_t(name);
        SysFreeString(name);
        return result;
    }

    if (SUCCEEDED(symbol->get_name(&name)) && name)
    {
        std::string result = (const char*)_bstr_t(name);
        SysFreeString(name);
        return result;
    }

    return "<unknown>";
}

static DWORD getRva(IDiaSymbol* symbol)
{
    DWORD rva = 0;
    symbol->get_relativeVirtualAddress(&rva);
    return rva;
}

static ULONGLONG getLength(IDiaSymbol* symbol)
{
    ULONGLONG length = 0;
    symbol->get_length(&length);
    return length;
}

static bool getSourceLine(
    IDiaSession* session,
    DWORD rva,
    std::string& file,
    DWORD& line)
{
    IDiaEnumLineNumbers* lines = nullptr;

    if (FAILED(session->findLinesByRVA(rva, 1, &lines)))
        return false;

    IDiaLineNumber* lineNumber = nullptr;
    ULONG count = 0;

    if (lines->Next(1, &lineNumber, &count) != S_OK || count != 1)
    {
        lines->Release();
        return false;
    }

    IDiaSourceFile* sourceFile = nullptr;

    lineNumber->get_lineNumber(&line);
    lineNumber->get_sourceFile(&sourceFile);

    if (!sourceFile)
    {
        lineNumber->Release();
        lines->Release();
        return false;
    }

    BSTR name = nullptr;
    sourceFile->get_fileName(&name);

    if (name)
    {
        file = (const char*)_bstr_t(name);
        SysFreeString(name);
    }

    sourceFile->Release();
    lineNumber->Release();
    lines->Release();

    return !file.empty();
}

static void findInlineSites(
    IDiaSession* session,
    IDiaSymbol* parent,
    json& output)
{
    IDiaEnumSymbols* symbols = nullptr;

    if (FAILED(parent->findChildren(
            SymTagInlineSite,
            nullptr,
            nsNone,
            &symbols)))
        return;

    IDiaSymbol* symbol = nullptr;
    ULONG count = 0;

    while (symbols->Next(1, &symbol, &count) == S_OK)
    {
        IDiaSymbol3* site3 = nullptr;

        if (SUCCEEDED(symbol->QueryInterface(
                __uuidof(IDiaSymbol3),
                reinterpret_cast<void**>(&site3))))
        {
            DWORD inlineeId = 0;
            DWORD rva = 0;

            site3->get_inlineeId(&inlineeId);
            symbol->get_relativeVirtualAddress(&rva);

            BSTR name = nullptr;
            symbol->get_name(&name);

            json site;
            site["name"] = name ? (const char*)_bstr_t(name) : "<unknown>";
            site["inlinee_id"] = inlineeId;

            if (name)
                SysFreeString(name);

            std::string file;
            DWORD line = 0;

            if (getSourceLine(session, rva, file, line))
            {
                site["source_file"] = file;
                site["source_line"] = line;
            }

            output.push_back(std::move(site));

            site3->Release();
        }

        symbol->Release();
    }

    symbols->Release();
}

int wmain(int argc, wchar_t** argv)
{
    if (argc < 2)
    {
        std::wcerr << L"Usage: dia_inline_dump.exe <pdb> [output.json]\n";
        return 1;
    }

    const char* outputPath =
        argc >= 3 ? (const char*)_bstr_t(argv[2]) : "inline_site_info.json";

    if (FAILED(CoInitializeEx(nullptr, COINIT_MULTITHREADED)))
        return 1;

    IDiaDataSource* source = nullptr;

    HRESULT hr = CoCreateInstance(
        __uuidof(DiaSource),
        nullptr,
        CLSCTX_INPROC_SERVER,
        __uuidof(IDiaDataSource),
        reinterpret_cast<void**>(&source));

    if (FAILED(hr))
    {
        CoUninitialize();
        return 1;
    }

    hr = source->loadDataFromPdb(argv[1]);

    if (FAILED(hr))
    {
        std::wcerr << L"Failed to load PDB\n";
        source->Release();
        CoUninitialize();
        return 1;
    }

    IDiaSession* session = nullptr;

    if (FAILED(source->openSession(&session)))
    {
        source->Release();
        CoUninitialize();
        return 1;
    }

    IDiaSymbol* global = nullptr;
    session->get_globalScope(&global);

    IDiaEnumSymbols* functions = nullptr;

    functions = nullptr;

    hr = global->findChildren(
        SymTagFunction,
        nullptr,
        nsNone,
        &functions);

    json output;
    output["functions"] = json::array();

    if (SUCCEEDED(hr))
    {
        IDiaSymbol* function = nullptr;
        ULONG count = 0;

        while (functions->Next(1, &function, &count) == S_OK)
        {
            json sites = json::array();

            findInlineSites(session, function, sites);

            if (!sites.empty())
            {
                DWORD id = 0;
                function->get_symIndexId(&id);

                json f;
                f["name"] = getName(function);
                f["sym_index_id"] = id;
                f["rva"] = getRva(function);
                f["length"] = getLength(function);
                f["inline_sites"] = std::move(sites);

                output["functions"].push_back(std::move(f));
            }

            function->Release();
        }

        functions->Release();
    }

    std::ofstream file(outputPath);
    file << output.dump(2) << '\n';

    std::cout
        << "Wrote "
        << output["functions"].size()
        << " functions to "
        << outputPath
        << '\n';

    global->Release();
    session->Release();
    source->Release();
    CoUninitialize();

    return 0;
}