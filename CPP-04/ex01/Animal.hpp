

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    // orthodox
    Animal();
    Animal(Animal &other);
    Animal& operator=(Animal &other);
    virtual ~Animal();

    // members
    std::string     getType( void ) const;
    virtual void    makeSound( void ) const;
};


#endif

