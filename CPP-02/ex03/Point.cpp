

#include "Point.hpp"

Point::Point()
    : x(Fixed(0)), y(Fixed(0))
{
}

Point::~Point()
{
    // std::cout << "Destructor called" << std::endl;
}

Point::Point(const float _x, const float _y)
    : x(Fixed(_x)), y(Fixed(_y))
{
}

Point::Point(const Point &other)
    : x(Fixed(other.x)), y(Fixed(other.y))
{
}

// operators
Point &Point::operator=(const Point &other)
{
    (void)other;
    return *this;
}

Point Point::operator+(const Point &other)
{
    return Point(this->x.toFloat() + other.x.toFloat(), this->y.toFloat() + other.x.toFloat());
}
Point Point::operator-(const Point &other)
{
    return Point(this->x.toFloat() - other.x.toFloat(), this->y.toFloat() - other.x.toFloat());
}

Fixed Point::getX() const
{
    return x;
}
Fixed Point::getY() const
{
    return y;
}
