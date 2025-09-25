
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name): ClapTrap::ClapTrap(_name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << _name << " is Created" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " is Destructed" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "Out of Resources !" << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "ScavTrap " << name << " attacks " << target << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}

