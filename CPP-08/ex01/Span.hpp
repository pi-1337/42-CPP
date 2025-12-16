

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
    void    addNumbers( std::vector<int>::iterator start, std::vector<int>::iterator end );
    int     shortestSpan( void );
    int     longestSpan( void );
};

#endif
