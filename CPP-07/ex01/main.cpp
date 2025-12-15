
#include "iter.hpp"

int main( void )
{
    int arr1[10] = {1, 2, 5, 2, 5};

    std::cout << "\n====== TESTING with Integers =======" << std::endl;

    std::cout << "before iter --> " << arr1[0] << std::endl;
    iter(arr1, 5, inc_func<int>);
    std::cout << "after iter  --> " << arr1[0] << std::endl;


    char arr2[] = "this is a string";

    std::cout << "\n====== TESTING with Chars =======" << std::endl;

    std::cout << "before iter --> " << arr2 << std::endl;
    iter(arr2, 16, inc_func<char>);
    std::cout << "after iter  --> " << arr2 << std::endl;

    return 0;
}

