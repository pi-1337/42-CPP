

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class Span {
private:
    unsigned int        N;
    std::vector<int>    numbers;

public:
    // Orthodox
    Span();
    Span(unsigned int _N);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    // class logic here
    void    addNumber( int newElm );
    template <typename T>
    void    addNumbers( T start, T end );
    int     shortestSpan( void );
    int     longestSpan( void );
};


template <typename T>
void    Span::addNumbers( T it_start, T it_end )
{
    if (std::distance(it_start, it_end) + this->numbers.size() > this->N)
        throw std::logic_error("not enough space in container !");
    this->numbers.insert(this->numbers.end(), it_start, it_end);
}

#endif
