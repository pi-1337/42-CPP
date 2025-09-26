

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default Constructor Called" << std::endl;
    type = "WrongCat";
}
WrongCat::WrongCat(WrongCat &other): Animal::Animal(other)
{
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
    this->type = other.type;
}
WrongCat& WrongCat::operator=(WrongCat &other)
{
    std::cout << "WrongCat Copy Operator Called" << std::endl;
    if (this == &other)
        this->type = other.type;
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called" << std::endl;
}



void    WrongCat::makeSound( void ) const
{
    std::cout << "moew moew" << std::endl;
}

