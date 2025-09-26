

#include "Animal.hpp"


Animal::Animal()
{
    std::cout << "Animal Default Constructor Called" << std::endl;
    type = "";
}
Animal::Animal(Animal &other)
{
    std::cout << "Animal Copy Constructor Called" << std::endl;
    this->type = other.type;
}
Animal& Animal::operator=(Animal &other)
{
    std::cout << "Animal Copy Operator Called" << std::endl;
    if (this == &other)
        this->type = other.type;
    return *this;
}
Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}



std::string Animal::getType( void ) const
{
    return type;
}
void Animal::makeSound( void ) const
{
    std::cout << "Animal makes sound" << std::endl;
}


