
#include "Span.hpp"

int main()
{
    std::cout << "========== subject TESTS ==========" << std::endl;

    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;


    std::cout << "========== addNumbers TESTS ==========" << std::endl;

    Span sp1 = Span(5);

    std::vector<int> buffer;
    buffer.push_back(6);
    buffer.push_back(3);
    buffer.push_back(17);
    buffer.push_back(9);
    buffer.push_back(11);
    sp1.addNumbers(buffer.begin(), buffer.end());
    std::cout << sp1.shortestSpan() << std::endl;
    std::cout << sp1.longestSpan() << std::endl;


    std::cout << "========== randomized TESTS ==========" << std::endl;

    int N = 100000;
    Span sp2(N);
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        sp2.addNumber(rand());
    }

    std::cout << "Shortest Span ---> " << sp2.shortestSpan() << std::endl;
    std::cout << "Longest Span  ---> " << sp2.longestSpan() << std::endl;

    return 0;
}
