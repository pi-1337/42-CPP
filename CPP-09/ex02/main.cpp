
#include "PmergeMe.hpp"

int main ( int ac, char **av )
{
    if (ac == 1)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    std::vector<long> list;

    try {
        //parsing 
        parseVector(ac, av, list);
        
        //merge insertion
        

    } catch (std::exception& e) {
        std::cerr << "Error : " << e.what() << std::endl;
    }
    

    
}


