
// #include <iostream>
// #include "Fixed.hpp"
// #include "Point.hpp"

// bool bsp( Point const a, Point const b, Point const c, Point const point);

// int main(void)
// {
    

//     Point a = Point(0, 0);
//     Point b = Point(0, 1);
//     Point c = Point(1, 0);
//     Point p = Point(0.2, 0);

//     std::cout << bsp(a, b, c, p) << std::endl;


//     return 0;
// }






#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

void run_test(int test_num, Point a, Point b, Point c, Point p, bool expected)
{
    bool result = bsp(a, b, c, p);
    std::cout << "Test #" << test_num << ": "
              << (result == expected ? "PASSED ✅" : "FAILED ❌")
              << " | Expected: " << std::boolalpha << expected
              << ", Got: " << result << std::endl;
}

int main()
{
    int test_num = 1;

    // Simple right triangle
    run_test(test_num++, Point(0,0), Point(0,2), Point(2,0), Point(0.5,0.5), true);     // Inside
    run_test(test_num++, Point(0,0), Point(0,2), Point(2,0), Point(0,0), false);        // Vertex
    run_test(test_num++, Point(0,0), Point(0,2), Point(2,0), Point(0,1), false);        // On edge
    run_test(test_num++, Point(0,0), Point(0,2), Point(2,0), Point(1,0), false);        // On edge
    run_test(test_num++, Point(0,0), Point(0,2), Point(2,0), Point(1,1), false);        // Outside

    // Equilateral-like triangle
    run_test(test_num++, Point(1,1), Point(3,1), Point(2,3), Point(2,2), true);         // Inside
    run_test(test_num++, Point(1,1), Point(3,1), Point(2,3), Point(2,1), false);        // On edge
    run_test(test_num++, Point(1,1), Point(3,1), Point(2,3), Point(2,3), false);        // Vertex

    // Flat base triangle
    run_test(test_num++, Point(0,0), Point(3,0), Point(1.5,2), Point(1.5,1), true);     // Inside
    run_test(test_num++, Point(0,0), Point(3,0), Point(1.5,2), Point(1.5,0), false);    // On edge
    run_test(test_num++, Point(0,0), Point(3,0), Point(1.5,2), Point(0,0), false);      // Vertex
    run_test(test_num++, Point(0,0), Point(3,0), Point(1.5,2), Point(3,0), false);      // Vertex

    return 0;
}
