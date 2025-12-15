
#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

class Span {
private:
    unsigned int        size;
    std::vector<int>    numbers;

public:
    // ORTHODOX
    Span();
    Span(unsigned int N);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    // class logic
    void    addNumber( int newElm );
    void    addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int     shortestSpan( void );
    int     longestSpan( void );
};

#endif
