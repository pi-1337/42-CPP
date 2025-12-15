

#include "Span.hpp"

// ORTHODOX
Span::Span()
    : size(0)
{
}
Span::Span(unsigned int N)
    : size(N)
{
}
Span::Span(const Span& other)
{
    *this = other;
}
Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        this->size = other.size;
        this->numbers = other.numbers;
    }
    return *this;
}
Span::~Span()
{
}

// class logic
void    Span::addNumber( int newElm )
{
    if (numbers.size() + 1 > size)
        throw std::logic_error("Container is full !!");
    numbers.push_back(newElm);
}
void    Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    std::vector<int> tmp(begin, end);
    if (numbers.size() + tmp.size() > size)
        throw std::logic_error("Container is full !!");
    numbers.insert(numbers.end(), begin, end);
}

int     Span::shortestSpan( void )
{
    if (size < 2)
        throw std::logic_error("Invalid size of Container !!");

    std::sort(numbers.begin(), numbers.end());

    int diff = numbers[1] - numbers[0];
    int shortest = diff;

    for (unsigned int i = 1; i < size; i++)
    {
        diff = numbers[i] - numbers[i - 1];
        if (shortest > diff)
            shortest = diff;
    }
    return shortest;
}
int     Span::longestSpan( void )
{
    if (size < 2)
        throw std::logic_error("Invalid size of Container !!");

    int min = *std::min_element(this->numbers.begin(), this->numbers.end());
    int max = *std::max_element(this->numbers.begin(), this->numbers.end());

    return (max - min);
}




