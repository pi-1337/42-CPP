

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor Called" << std::endl;
    type = "Dog";
}
Dog::Dog(Dog &other): Animal::Animal(other)
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
}
Dog& Dog::operator=(Dog &other)
{
    std::cout << "Dog Copy Operator Called" << std::endl;
    if (this == &other)
        this->type = other.type;
    return *this;
}
Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
}

void    Dog::makeSound( void ) const
{
    std::cout << "woof woof" << std::endl;
}
