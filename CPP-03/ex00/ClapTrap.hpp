#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
    std::string     name;
    int             hitPoints;
    int             energyPoints;
    int             attackDamage;

public:
    // orthodox
    ClapTrap(std::string _name);
    ClapTrap(ClapTrap const &other);
    ClapTrap operator=(ClapTrap const &other);


    ~ClapTrap();

    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};


#endif

