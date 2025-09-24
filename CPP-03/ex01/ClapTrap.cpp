

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name)
    : name(_name)
    , hitPoints(10)
    , energyPoints(10)
    , attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " is Created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " is Destructed" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "Out of Resources !" << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "ClapTrap "
                << name << " attacks "
                << target << ", causing "
                << attackDamage << " points of damage!"
                << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "Out of Resources !" << std::endl;
        return ;
    }
    energyPoints--;
    hitPoints += amount;    
    std::cout << "ClapTrap "
                << name << " gets repaired "
                << amount << " hitPoints"
                << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap "
                << name << " takes "
                << amount << " amount of damage"
                << std::endl;
}

