

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap first("first");
    FragTrap second("second");
    FragTrap third(first);
    
    std::cout << std::endl << "-----" << std::endl << std::endl;


    first.attack("second");
    second.attack("first");

    second = first;

    second.attack("first");
    third.attack("second");



    std::cout << std::endl << "-----" << std::endl << std::endl;

    third = second;
    third.highFivesGuys();



    std::cout << std::endl << "-----" << std::endl << std::endl;

    return 0;
}


