

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <string>
#include <iostream>

class FragTrap: public ClapTrap
{
public:
    // orthodox
    FragTrap(std::string _name);
    FragTrap(FragTrap const &other);
    FragTrap operator=(FragTrap const &other);

    ~FragTrap();

    void    highFivesGuys(void);
};


#endif


