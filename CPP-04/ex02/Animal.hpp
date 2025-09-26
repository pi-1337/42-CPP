

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

// now its become abstract, min one pure vi func

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
    virtual void    makeSound( void ) const = 0;
};


#endif

