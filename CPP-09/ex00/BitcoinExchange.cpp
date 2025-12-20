
#include "BitcoinExchange.hpp"

void    processData(std::ifstream& inpFile)
{
    std::string line;
    std::string header;
    std::map<int, float> inpTable;

    // date | value
    getline(inpFile, header);

    while (getline(inpFile, line))
    {
        // 2011-01-03 | 3

    }
}
