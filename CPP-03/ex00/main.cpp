

#include "ClapTrap.hpp"

int main()
{
    
    ClapTrap clapTrap = ClapTrap("joey");
    ClapTrap clapTrap1 = ClapTrap(clapTrap);
    clapTrap1 = clapTrap;

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


