
#include "Span.hpp"

// orthodox
Span::Span()
    : N(0)
    , numbers(0)
{
}
Span::Span(unsigned int _N)
    : N(_N)
    , numbers(0)
{
}
Span::Span(const Span& other)
{
    *this = other;
}
Span& Span::operator=(const Span& other)
{
    if (this == &other)
        return *this;
    this->N = other.N;
    this->numbers = other.numbers;
    return *this;
}
Span::~Span()
{
}


// class logic here
void    Span::addNumber( int newElm )
{
    if (this->numbers.size() + 1 > this->N)
        throw std::logic_error("not enough space in container !");
    this->numbers.push_back(newElm);
}
void    Span::addNumbers( std::vector<int>::iterator it_start, std::vector<int>::iterator it_end )
{
    if (std::distance(it_start, it_end) + this->numbers.size() > this->N)
        throw std::logic_error("not enough space in container !");
    this->numbers.insert(this->numbers.end(), it_start, it_end);
}

int     Span::shortestSpan( void )
{
    if (this->numbers.size() < 2)
        throw std::logic_error("not enough elements in container !");

    std::sort(this->numbers.begin(), this->numbers.end());
    int shortest = numbers[1] - numbers[0];
    int diff;

    for (unsigned int i = 1; i < numbers.size(); i++)
    {
        diff = numbers[i] - numbers[i-1];
        if (shortest > diff)
            shortest = diff;
    }

    return (shortest);
}
int     Span::longestSpan( void )
{
    if (this->numbers.size() < 2)
        throw std::logic_error("not enough elements in container !");
    
    std::sort(this->numbers.begin(), this->numbers.end());
    return (*this->numbers.rbegin() - *this->numbers.begin());
}
