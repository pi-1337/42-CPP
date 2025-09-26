

#include "ClapTrap.hpp"


void    ClapTrap::attack(const std::string& target)
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
    std::cout << "ClapTrap "
                << name << " attacks "
                << target << ", causing "
                << attackDamage << " points of damage!"
                << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
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
    hitPoints += amount;    
    std::cout << "ClapTrap "
                << name << " gets repaired "
                << amount << " hitPoints"
                << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints <= 0)
    {
        std::cout << name << " is Dead!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap "
                << name << " takes "
                << amount << " amount of damage"
                << std::endl;
}

// orthodox
ClapTrap::ClapTrap(std::string _name)
    : name(_name)
    , hitPoints(10)
    , energyPoints(10)
    , attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " is Created by Default Constructor" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &other)
{
    this->name = other.name;
    this->attackDamage = other.attackDamage;
    this->energyPoints = other.energyPoints;
    this->hitPoints = other.hitPoints;
    std::cout << "ClapTrap " << name << " is Created by Copy Constructor" << std::endl;
}
ClapTrap& ClapTrap::operator=(ClapTrap const &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->attackDamage = other.attackDamage;
        this->energyPoints = other.energyPoints;
        this->hitPoints = other.hitPoints;
        std::cout << "ClapTrap " << name << " is Copied by operator" << std::endl;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " is Destructed" << std::endl;
}