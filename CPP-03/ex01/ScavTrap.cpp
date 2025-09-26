

#include "ScavTrap.hpp"


void    ScavTrap::attack(const std::string& target)
{
    if (hitPoints <= 0)
    {
        std::cout << name << " is Dead!" << std::endl;
        return ;
    }
    if (energyPoints <= 0)
    {
        std::cout << "Out of Energy Points !" << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "ScavTrap "
                << name << " attacks "
                << target << ", causing "
                << attackDamage << " points of damage!"
                << std::endl;
}
void    ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}

// orthodox
ScavTrap::ScavTrap(std::string _name)
    : ClapTrap::ClapTrap(_name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << _name << " is Created by Default Constructor" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const &other)
    : ClapTrap::ClapTrap(other)
{
    std::cout << "ScavTrap " << name << " is Created by Copy Constructor" << std::endl;
}
ScavTrap& ScavTrap::operator=(ScavTrap const &other)
{
    ClapTrap::operator=(other);
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " is Destructed" << std::endl;
}
