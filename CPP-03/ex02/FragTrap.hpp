#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class FragTrap: public ClapTrap
{
private:
    

public:
    FragTrap(std::string _name);
    ~FragTrap();

    void    highFivesGuys( void );
};

#endif

