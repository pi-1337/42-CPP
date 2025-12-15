
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename FUNC>
void    iter(T* arr, const int len, FUNC func)
{
    for (int i = 0; i < len; i++)
        func(arr[i]);
}

template <typename T>
void    inc_func(T& elem)
{
    elem++;
}

#endif
