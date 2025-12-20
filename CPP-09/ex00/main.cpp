
#include "BitcoinExchange.hpp"

int main( int ac, char **av ) {
    
    if (ac != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return -1;
    }

    std::ifstream inpFile(av[1]);

    if (inpFile)
        processData(inpFile);
    else
    {
        std::cerr << "Error: could not open file." << std::endl;
        return -1;
    }
    inpFile.close();
    return 0;
}

