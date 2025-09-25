

#include "ClapTrap.hpp"

int main()
{
    
    ClapTrap robot1("tester");
    ClapTrap clapTrap = ClapTrap("joey");

    ClapTrap robot2(clapTrap);
    robot1 = clapTrap;

    std::cout << std::endl << "-----" << std::endl << std::endl;


    robot1.attack("tester");

    std::cout << std::endl << "-----" << std::endl << std::endl;

    return 0;
}


