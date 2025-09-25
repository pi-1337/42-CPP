#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap: public ClapTrap
{
private:
    

public:
    ScavTrap(std::string _name);
    ~ScavTrap();

    void    attack(const std::string& target);
    void    guardGate();
};

#endif

