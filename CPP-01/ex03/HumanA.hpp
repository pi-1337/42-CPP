
#ifndef HUMAN_A_H
#define HUMAN_A_H

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
private:
    std::string name;
    Weapon&     weapon;

public:
    HumanA(std::string _name, Weapon& _weapon);
    void    attack(void);

};


#endif

