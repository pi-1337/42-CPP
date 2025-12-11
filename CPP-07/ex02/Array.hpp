
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#include <string>

template <typename T>
class Array {
private:
    unsigned int    len;
    T*              list;

public:
    // ORTHODOX
    Array();
    Array(unsigned int n);
    Array(const Array& other);
    Array& operator=(const Array& other);
    ~Array();

    // LOGIC
    unsigned int    size( void ) const ;

    // []
    T& operator[](unsigned int index);

    // exceptions
    class index_is_out_of_bounds: public std::exception {
        const char* what( void ) const throw();
    };

};





// ORTHODOX
template <typename T>
Array<T>::Array()
{
    len = 0;
    list = new T[len];
}
template <typename T>
Array<T>::Array(unsigned int n)
{
    len = n;
    list = new T[len];
}
template <typename T>
Array<T>::Array(const Array& other)
{
    list = new T[other.len];
    for (unsigned int i = 0; i < len; i++)
        this->list[i] = other.list[i];
}
template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
    this->len = other.len;
    delete[] list;
    list = new T[other.len];
    for (unsigned int i = 0; i < len; i++)
        this->list[i] = other.list[i];
    return *this;
}
template <typename T>
Array<T>::~Array()
{
    delete[] list;
}



// LOGIC
template <typename T>
unsigned int    Array<T>::size( void ) const
{
    return len;
}


template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= len)
        throw Array<T>::index_is_out_of_bounds();
    return list[index];
}

// exceptions
template <typename T>
const char* Array<T>::index_is_out_of_bounds::what( void ) const throw()
{
    return "Index is out of rounds !!";
}


#endif
