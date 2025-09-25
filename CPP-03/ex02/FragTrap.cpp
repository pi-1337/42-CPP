

#include "FragTrap.hpp"


// orthodox
FragTrap::FragTrap(std::string _name)
    : ClapTrap::ClapTrap(_name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << _name << " is Created by Default Constructor" << std::endl;
}
FragTrap::FragTrap(FragTrap const &other)
    : ClapTrap::ClapTrap(other)
{
    std::cout << "FragTrap " << name << " is Created by Copy Constructor" << std::endl;
}
FragTrap FragTrap::operator=(FragTrap const &other)
{
    ClapTrap::operator=(other);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " is Destructed" << std::endl;
}

// mothods
void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << ":High five! 🙌" << std::endl;
}