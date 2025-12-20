
#include "RPN.hpp"


int main ( int ac, char **av )
{
    bool valid;

    std::stack<int> stacky;

    if (ac != 2)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    int result = RPN(av[1], valid);
    if (valid)
        std::cout << result << std::endl;
    else
        std::cerr << "Error" << std::endl;
    return 0;
}


