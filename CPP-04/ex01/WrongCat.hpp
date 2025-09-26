
#ifndef WrongCat_H
#define WrongCat_H

#include <string>
#include <iostream>

#include "Animal.hpp"

class WrongCat: public Animal
{
protected:
    std::string type;

public:
    // orthodox
    WrongCat();
    WrongCat(WrongCat &other);
    WrongCat& operator=(WrongCat &other);
    ~WrongCat();

    // members
    void    makeSound() const;
};



#endif
