
#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

const double EPSILON = std::numeric_limits<double>::epsilon();

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
    bool    operator<( Fixed const &obj );
    bool    operator>( Fixed const &obj );
    bool    operator<=( Fixed const &obj );
    bool    operator>=( Fixed const &obj );
    //arithmetic
    Fixed   operator+( Fixed const &obj );
    Fixed   operator-( Fixed const &obj );
    Fixed   operator*( Fixed const &obj );
    Fixed   operator/( Fixed const &obj );
    //++ --
    Fixed&  operator++( void );
    Fixed   operator--( int prev );
    Fixed&  operator++( void );
    Fixed   operator--( int prev );
    
    //statuic members ajmi
    static Fixed&  min(Fixed& a, Fixed& b);
    static Fixed&  max(Fixed& a, Fixed& b);
    static Fixed&  min(Fixed& const a, Fixed& const b);
    static Fixed&  max(Fixed& const a, Fixed& const b);

    // methods ajmi
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
    
};

std::ostream&   operator<<(std::ostream& cout, Fixed &obj);
std::ostream&   operator<<(std::ostream& cout, Fixed const &obj);

#endif
