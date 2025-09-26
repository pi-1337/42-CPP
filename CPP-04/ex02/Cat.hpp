
#ifndef CAT_H
#define CAT_H

#include <string>
#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
protected:
    std::string type;
    Brain       *brain;

public:
    // orthodox
    Cat();
    Cat(Cat &other);
    Cat& operator=(Cat &other);
    ~Cat();

    // members
    void    makeSound() const;
};



#endif
