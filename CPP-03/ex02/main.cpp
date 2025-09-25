

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    
    ScavTrap scavTrap = ScavTrap("joey");

    scavTrap.attack("my_target");
    scavTrap.beRepaired(100);
    scavTrap.attack("my_target");
    scavTrap.takeDamage(20);
    std::cout << std::endl;
    scavTrap.attack("my_target");
    scavTrap.attack("my_target");
    scavTrap.attack("my_target");
    scavTrap.attack("my_target");
    scavTrap.attack("my_target");
    scavTrap.attack("my_target");
    scavTrap.attack("my_target");
    scavTrap.attack("my_target");
    scavTrap.attack("my_target");
    std::cout << std::endl;
    scavTrap.attack("my_target");
    scavTrap.attack("my_target");
    scavTrap.attack("my_target");
    scavTrap.attack("my_target");
    std::cout << std::endl;
    scavTrap.beRepaired(100);

    scavTrap.guardGate();


    FragTrap fragTrap = FragTrap("joey");

    fragTrap.attack("robot1337");
    fragTrap.beRepaired(1);
    fragTrap.highFivesGuys();
    fragTrap.takeDamage(100);
    fragTrap.takeDamage(100);
    fragTrap.takeDamage(100);
    fragTrap.takeDamage(100);
    fragTrap.takeDamage(100);
    fragTrap.takeDamage(100);
    fragTrap.takeDamage(100);
    fragTrap.takeDamage(100);


    return 0;
}


