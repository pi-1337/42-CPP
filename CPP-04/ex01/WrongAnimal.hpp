

#ifndef WrongAnimal_H
#define WrongAnimal_H

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    // orthodox
    WrongAnimal();
    WrongAnimal(WrongAnimal &other);
    WrongAnimal& operator=(WrongAnimal &other);
    virtual ~WrongAnimal();

    // members
    std::string     getType( void ) const;
    void            makeSound( void ) const;
};


#endif

