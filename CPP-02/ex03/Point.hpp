

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"
#include <iostream>

class Point
{
private:
    Fixed const x;
    Fixed const y;

public:
    // Orthodox
    Point();
    Point(const float _x, const float _y);
    Point(const Point &other);
    Point&  operator=(const Point &other);
    Point   operator+(const Point &other);
    Point   operator-(const Point &other);
    ~Point();

    Fixed getX() const;
    Fixed getY() const;

};


#endif
