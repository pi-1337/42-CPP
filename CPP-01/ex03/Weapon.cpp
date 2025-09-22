
#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
    type = _type;
}

std::string& Weapon::getType()
{
    std::string& ref = type;
    return ref;
}

void         Weapon::setType(std::string newType)
{
    type = newType;
}

