

#include "Fixed.hpp"

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->rawValue = obj.getRawBits();
    return *this;
}


Fixed::Fixed()
: rawValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    rawValue = obj.getRawBits();
}

const int    Fixed::fractionalBitsNum = 8;

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return rawValue;
}

void Fixed::setRawBits( int const raw )
{
    rawValue = raw;
}
