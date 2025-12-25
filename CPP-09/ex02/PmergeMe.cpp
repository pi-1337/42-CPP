
#include "PmergeMe.hpp"

void    parseVector(int ac, char **av, vec& list)
{
    long    parsed;
    str rest;
    
    for (int i = 1; i < ac; i++)
    {
        std::stringstream ss(av[i]);
        ss >> parsed >> rest;

        if (rest != "")
            throw std::logic_error("Invalid Argument !");
        if (parsed < 0)
            throw std::logic_error("Negative Argument !");
        list.push_back(parsed);
    }
}

