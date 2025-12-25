
#include "PmergeMe.hpp"

int main ( int ac, char **av )
{
    if (ac == 1)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    vec list;

    try {
        //parsing 
        parseVector(ac, av, list);
        
        //merge insertion

        // Divide
        // Conquer
        // Merge

        // try catch
        Ford_Jhonson(list);


        for (unsigned long i = 0; i < list.size(); i++)
        {
            std::cout << "afteA    - > " << list[i] << std::endl;
        }

        // Before: 3 5 9 7 4
        // After: 3 4 5 7 9
        // Time to process a range of 5 elements with std::[..] : 0.00031 us
        // Time to process a range of 5 elements with std::[..] : 0.00014 us

    } catch (std::exception& e) {
        std::cerr << "Error : " << e.what() << std::endl;
    }
    

    
}


