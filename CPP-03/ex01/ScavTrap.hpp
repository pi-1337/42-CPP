

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <string>
#include <iostream>

class ScavTrap: public ClapTrap
{
public:
    // orthodox
    ScavTrap(std::string _name);
    ScavTrap(ScavTrap const &other);
    ScavTrap& operator=(ScavTrap const &other);

    ~ScavTrap();

    void    attack(const std::string& target);
    void    guardGate( void );
};


#endif



