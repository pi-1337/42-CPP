
#include "FragTrap.hpp"


FragTrap::FragTrap(std::string _name): ClapTrap::ClapTrap(_name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "ScavTrap " << _name << " is Created" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " is Destructed" << std::endl;
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << "FragTrap " << name << ": Hey! High five! ✋😊" << std::endl;
}
