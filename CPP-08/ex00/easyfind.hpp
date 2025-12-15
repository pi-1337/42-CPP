
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
int easyfind(T& arr, int elm)
{
    typename T::iterator it;
    for (it = arr.begin(); it != arr.end(); ++it)
    {
        if (*it == elm)
            return elm;
    }
    // tf93 ola dir chihaja
    return -1;
}

#endif
