// DataSaveArguments.cpp

#include "DataSaveArguments.h"

namespace common
{
    void ParsedDataSaveArguments::AddArgs(CommandLineParser& parser)
    {
        parser.AddOption(
            outputDataFile,
            "outputDataFile", 
            "odf",
            "Path to the output data file",
            "");
    }

    ParseResult ParsedDataSaveArguments::PostProcess(const CommandLineParser & parser)
    {
        vector<string> parseErrorMessages;

        return parseErrorMessages;
    }
}