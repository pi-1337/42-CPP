
#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    

    Point a = Point(0, 0);
    Point b = Point(0, 1);
    Point c = Point(1, 0);
    Point p = Point(0.2, 0.2);

    std::cout << bsp(a, b, c, p) << std::endl;


    return 0;
}