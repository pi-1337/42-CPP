
#include "easyfind.hpp"

int main( void ) {
    

    std::cout << "========== testing with Vector ==========" << std::endl;
    std::cout << "**** -1 indicates the FAILURE ******" << std::endl;
    
    std::vector<int> vec(3);
    vec[0] = 1;
    vec[1] = 2;
    vec[2] = 3;

    std::cout << easyfind(vec, 2) << std::endl;
    std::cout << easyfind(vec, 10) << std::endl;
    vec[2] = 10;
    std::cout << easyfind(vec, 10) << std::endl;

}

