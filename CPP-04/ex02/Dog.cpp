

#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    type = "Dog";
    std::cout << "Dog Default Constructor Called" << std::endl;
}
Dog::Dog(Dog &other): Animal::Animal(other)
{
    this->type = other.type;
    this->brain = new Brain(*other.brain);
    std::cout << "Dog Copy Constructor Called" << std::endl;
}
Dog& Dog::operator=(Dog &other)
{
    this->type = other.type;
    this->brain = new Brain(*other.brain);
    std::cout << "Dog Copy Operator Called" << std::endl;
    return *this;
}
Dog::~Dog()
{
    delete brain;
    brain = NULL;
    std::cout << "Dog Destructor Called" << std::endl;
}

void    Dog::makeSound( void ) const
{
    std::cout << "woof woof" << std::endl;
}
