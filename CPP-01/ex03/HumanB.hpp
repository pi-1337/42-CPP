
#ifndef HUMAN_B_H
#define HUMAN_B_H


#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
private:
    std::string name;
    Weapon      *weapon;

public:

    HumanB(std::string _name);
    void    attack(void);
    void    setWeapon(Weapon& _weapon);

};


#endif

