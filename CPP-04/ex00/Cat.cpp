

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    type = "Cat";
}
Cat::Cat(Cat &other): Animal::Animal(other)
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    this->type = other.type;
}
Cat& Cat::operator=(Cat &other)
{
    std::cout << "Cat Copy Operator Called" << std::endl;
    if (this == &other)
        this->type = other.type;
    return *this;
}
Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}



void    Cat::makeSound( void ) const
{
    std::cout << "moew moew" << std::endl;
}

