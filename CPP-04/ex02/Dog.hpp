
#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
protected:
    std::string type;
    Brain       *brain;

public:
    // orthodox
    Dog();
    Dog(Dog &other);
    Dog& operator=(Dog &other);
    ~Dog();

    // members
    void    makeSound() const;
};



#endif
