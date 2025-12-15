#include <iostream>
#include "Array.hpp"


int main()
{


    std::cout << "============= default Constructor =============" << std::endl;

    try {
        Array<int> arr1;
        
        for (unsigned int i= 0; i < arr1.size(); i++)
            std::cout << static_cast<int>(arr1[i]) << std::endl;
    
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "============= param Constructor =============" << std::endl;

    try {
        Array<int> arr2(3);
        
        for (unsigned int i= 0; i < arr2.size(); i++)
        {
            arr2[i] = i+1;
            std::cout << static_cast<int>(arr2[i]) << std::endl;
        }

        std::cout << "============= copy Constructor =============" << std::endl;
        Array<int> arr3(arr2);
        
        for (unsigned int i= 0; i < arr3.size(); i++)
            std::cout << static_cast<int>(arr3[i]) << std::endl;


        std::cout << "============= copy assignment Operator =============" << std::endl;
        Array<int> arr4 = arr3;
        
        for (unsigned int i= 0; i < arr4.size()+1; i++)
            std::cout << static_cast<int>(arr4[i]) << std::endl;
    
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }


}
