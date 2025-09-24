
#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{

private:
    int                 rawValue;
    static const int    fractionalBitsNum;

public:
    // Orthodox
    Fixed();
    Fixed(Fixed const &obj);
    Fixed& operator=(Fixed const &obj);
    ~Fixed();

    // methods ajmi
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

};

#endif
