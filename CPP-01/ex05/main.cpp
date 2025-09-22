
#include "Harl.hpp"

int main()
{
    
    Harl harl;

    std::cout << std::endl;
    harl.complain("error");
    harl.complain("info");
    harl.complain("infohhhhhhhhhhh");
    harl.complain("warning");
    harl.complain("debug");
    harl.complain("debuging");
    std::cout << std::endl;


    return 0;
}


