

#include "Point.hpp"

float    shoelace_method(Point const alpha, Point const beta, Point const gamma)
{
    float   x0 = alpha.getX().toFloat()
            ,y0 = alpha.getY().toFloat()
            ,x1 = beta.getX().toFloat()
            ,y1 = beta.getY().toFloat()
            ,x2 = gamma.getX().toFloat()
            ,y2 = gamma.getY().toFloat();

    /*
    * 
    * x0   y0
    * x1   y1
    * x2   y2
    * 
    */

    float   area = (x0*y1 + x1*y2 + x2*y0) - (y0*x1 + y1*x2 + y2*x0);
    if (area < 0)
        area = area * -1;
    area = area / float(2);

    return area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{

    float area1 = shoelace_method(a, b, c);
    float area2 = shoelace_method(point, b, c);
    float area3 = shoelace_method(point, a, c);
    float area4 = shoelace_method(point, a, b);

    if (!area1 || !area2 || !area3 || !area4)
        return false;
    return (area1 == area2 + area3 + area4);
}


