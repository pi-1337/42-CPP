
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    iter(T* arr, const int len, void (*func)(T&))
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
