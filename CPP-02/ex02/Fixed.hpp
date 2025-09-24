
#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>
#include <limits>

// const double EPSILON = std::numeric_limits<double>::epsilon();
const double EPSILON = 1;

class Fixed
{

private:
    int                 rawValue;
    static const int    fractionalBitsNum;

public:
    // Orthodox
    Fixed();
    Fixed(Fixed const &obj);
    Fixed(int const n);
    Fixed(float const n);
    ~Fixed();

    // operators
    Fixed&  operator=( Fixed const &obj );
    bool    operator<( Fixed const &obj ) const;
    bool    operator>( Fixed const &obj ) const;
    bool    operator<=( Fixed const &obj ) const;
    bool    operator>=( Fixed const &obj ) const;
    //arithmetic
    Fixed   operator+( Fixed const &obj );
    Fixed   operator-( Fixed const &obj );
    Fixed   operator*( Fixed const &obj );
    Fixed   operator/( Fixed const &obj );
    //++ --
    Fixed&  operator++( void );
    Fixed&  operator--( void );
    Fixed   operator++( int );
    Fixed   operator--( int );
    
    //statuic members ajmi
    static Fixed&       min(Fixed& a, Fixed& b);
    static Fixed&       max(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);

    // methods ajmi
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
    
};

std::ostream&   operator<<(std::ostream& cout, Fixed &obj);
std::ostream&   operator<<(std::ostream& cout, Fixed const &obj);

#endif
