
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
int easyfind(T& container, int elm)
{
    typename T::iterator it;
    for (
            it = container.begin();
            it != container.end();
            ++it
        )
    {
        if (*it == elm)
            return *it;
    }
    // tfr93_0l4_d1r_ch17@j@
    return -1;
}

#endif
