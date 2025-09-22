

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string     name;

public:

    Zombie();
    ~Zombie();

    void    announce(void);
    void    setName( std::string _name );

};

Zombie* zombieHorde( int N, std::string name );

#endif
