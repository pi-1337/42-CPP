
#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

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

    // methods ajmi
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
    
};

std::ostream&   operator<<(std::ostream& cout, Fixed &obj);
std::ostream&   operator<<(std::ostream& cout, Fixed const &obj);

#endif
