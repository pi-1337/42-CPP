
#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{
private:
    std::string type;

public:

    Weapon(std::string _type);
    std::string& getType();
    void         setType(std::string newType);

};

#endif
