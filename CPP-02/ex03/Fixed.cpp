

#include "Fixed.hpp"

Fixed::~Fixed()
{
}

Fixed::Fixed()
: rawValue(0)
{
}

Fixed::Fixed(Fixed const &obj)
{
    rawValue = obj.getRawBits();
}

Fixed::Fixed(int const n)
{
    rawValue = n << fractionalBitsNum;
}

Fixed::Fixed(float const n)
{
    rawValue = roundf(n * (1 << fractionalBitsNum));
}

const int    Fixed::fractionalBitsNum = 8;

int Fixed::getRawBits( void ) const
{
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
    if (this != &obj)
        this->rawValue = obj.getRawBits();
    return *this;
}

bool    Fixed::operator<(Fixed const &obj) const
{
    return (this->rawValue < obj.getRawBits());
}
bool    Fixed::operator>(Fixed const &obj) const
{
    return (this->rawValue > obj.getRawBits());
}
bool    Fixed::operator<=(Fixed const &obj) const
{
    return (this->rawValue <= obj.getRawBits());
}
bool    Fixed::operator>=(Fixed const &obj) const
{
    return (this->rawValue >= obj.getRawBits());
}
bool    Fixed::operator==(Fixed const &obj) const
{
    return (this->rawValue == obj.getRawBits());
}
bool    Fixed::operator!=(Fixed const &obj) const
{
    return (this->rawValue != obj.getRawBits());
}

//arithmetic
Fixed  Fixed::operator+(Fixed const &obj)
{
    return Fixed(this->getRawBits() + obj.getRawBits());
}
Fixed  Fixed::operator-(Fixed const &obj)
{
    return Fixed(this->getRawBits() - obj.getRawBits());
}
Fixed  Fixed::operator*(Fixed const &obj)
{
    return Fixed(this->toFloat() * obj.toFloat());
}
Fixed  Fixed::operator/(Fixed const &obj)
{
    if (obj.getRawBits() == 0)
    {
        std::cerr << "Division by zero detected!" << std::endl;
        return *this;
    }
    return Fixed(this->toFloat() / obj.toFloat());
}
//++ --
Fixed&  Fixed::operator++( void )
{
    rawValue += EPSILON;
    return *this;
}
Fixed&   Fixed::operator--( void )
{
    rawValue -= EPSILON;
    return *this;
}
Fixed  Fixed::operator++( int )
{
    Fixed tmp(*this);
    rawValue += EPSILON;
    return tmp;
}
Fixed   Fixed::operator--( int )
{
    Fixed   tmp = *this;
    rawValue -= EPSILON;
    return tmp;
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
// operators */



// static member functions
Fixed&   Fixed::min(Fixed& a, Fixed& b)
{
    return a>b ? b : a;
}
Fixed&   Fixed::max(Fixed& a, Fixed& b)
{
    return a>b ? a : b;
}
const Fixed&   Fixed::min(const Fixed& a, const Fixed& b)
{
    return a>b ? b : a;
}
const Fixed&   Fixed::max(const Fixed& a, const Fixed& b)
{
    return a>b ? a : b;
}
