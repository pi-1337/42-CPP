

#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain();
    type = "Cat";
    std::cout << "Cat Default Constructor Called" << std::endl;
}
Cat::Cat(Cat &other): Animal::Animal(other)
{
    this->type = other.type;
    this->brain = new Brain(*other.brain);
    std::cout << "Cat Copy Constructor Called" << std::endl;
}
Cat& Cat::operator=(Cat &other)
{
    if (this == &other)
        this->type = other.type;
    std::cout << "Cat Copy Operator Called" << std::endl;
    return *this;
}
Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Destructor Called" << std::endl;
}



void    Cat::makeSound( void ) const
{
    std::cout << "moew moew" << std::endl;
}

