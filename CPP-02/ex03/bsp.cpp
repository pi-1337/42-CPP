

#include "Point.hpp"

Fixed    shoelace_method(Point const alpha, Point const beta, Point const gamma)
{
    Fixed   x0 = alpha.getX()
            ,y0 = alpha.getY()
            ,x1 = beta.getX()
            ,y1 = beta.getY()
            ,x2 = gamma.getX()
            ,y2 = gamma.getY();

    /*
    * 
    * x0   y0
    * x1   y1
    * x2   y2
    * 
    */

    Fixed   area = (x0*y1 + x1*y2 + x2*y0) - (y0*x1 + y1*x2 + y2*x0);
    if (area.toFloat() < 0)
        area = area * -1;
    area = area / Fixed(2);

    return area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{

    
    Fixed area1 = shoelace_method(a, b, c);
    Fixed area2 = shoelace_method(point, b, c);
    Fixed area3 = shoelace_method(point, a, c);
    Fixed area4 = shoelace_method(point, a, b);

    return (area1 == area2 + area3 + area4);
}


