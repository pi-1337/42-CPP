

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default Constructor Called" << std::endl;
    type = "";
}
WrongAnimal::WrongAnimal(WrongAnimal &other)
{
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
    this->type = other.type;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal &other)
{
    std::cout << "WrongAnimal Copy Operator Called" << std::endl;
    if (this == &other)
        this->type = other.type;
    return *this;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}



std::string WrongAnimal::getType( void ) const
{
    return type;
}
void WrongAnimal::makeSound( void ) const
{
    std::cout << "WrongAnimal makes sound" << std::endl;
}


