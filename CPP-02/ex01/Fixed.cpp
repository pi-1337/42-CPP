

#include "Fixed.hpp"

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
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

Fixed::Fixed(int const n)
{
    std::cout << "Int constructor called" << std::endl;
    rawValue = n << fractionalBitsNum;
}

Fixed::Fixed(float const n)
{
    std::cout << "Float constructor called" << std::endl;
    rawValue = roundf(n * (1 << fractionalBitsNum));
}

const int    Fixed::fractionalBitsNum = 8;

int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return rawValue;
}

void Fixed::setRawBits( int const raw )
{
    rawValue = raw;
}

float   Fixed::toFloat( void ) const
{
    return (static_cast<float>(getRawBits()) / (1 << fractionalBitsNum));
}

int Fixed::toInt( void ) const
{
    return (getRawBits() / (1 << fractionalBitsNum));
}



// operators
Fixed& Fixed::operator=(Fixed const &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->rawValue = obj.getRawBits();
    return *this;
}

std::ostream&   operator<<(std::ostream& cout, Fixed &obj)
{
    cout << obj.toFloat();
    return cout;
}

std::ostream&   operator<<(std::ostream& cout, Fixed const &obj)
{
    cout << obj.toFloat();
    return cout;
}
