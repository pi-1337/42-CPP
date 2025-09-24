

#include "ClapTrap.hpp"

int main()
{
    
    ClapTrap clapTrap = ClapTrap("joey");

    clapTrap.attack("my_target");
    clapTrap.beRepaired(100);
    clapTrap.attack("my_target");
    clapTrap.takeDamage(20);
    clapTrap.attack("my_target");
    clapTrap.attack("my_target");
    clapTrap.attack("my_target");
    clapTrap.attack("my_target");
    clapTrap.attack("my_target");
    clapTrap.attack("my_target");
    clapTrap.attack("my_target");
    clapTrap.attack("my_target");
    clapTrap.attack("my_target");
    clapTrap.beRepaired(100);

    return 0;
}


