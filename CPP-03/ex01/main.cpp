

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap first("first");
    ScavTrap second("second");
    ScavTrap third(first);
    
    std::cout << std::endl << "-----" << std::endl << std::endl;


    first.attack("second");
    second.attack("first");

    second = first;

    second.attack("first");
    third.attack("second");



    std::cout << std::endl << "-----" << std::endl << std::endl;

    third = second;
    third.guardGate();



    std::cout << std::endl << "-----" << std::endl << std::endl;

    return 0;
}


