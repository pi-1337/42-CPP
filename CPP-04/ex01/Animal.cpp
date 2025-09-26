

#include "Animal.hpp"


Animal::Animal()
{
    type = "";
    std::cout << "Animal Default Constructor Called" << std::endl;
}
Animal::Animal(Animal &other)
{
    this->type = other.type;
    std::cout << "Animal Copy Constructor Called" << std::endl;
}
Animal& Animal::operator=(Animal &other)
{
    if (this == &other)
        this->type = other.type;
    std::cout << "Animal Copy Operator Called" << std::endl;
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


