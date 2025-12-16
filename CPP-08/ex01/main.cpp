
#include "Span.hpp"

int main()
{
    std::cout << "========== subject TESTS ==========\n" << std::endl;

    try {

        Span sp = Span(5);
        
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        sp.addNumber(0x10001);
        
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n========== addNumbers TESTS ==========\n" << std::endl;
    try {

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
        sp1.addNumbers(buffer.begin(), buffer.end());
        sp1.addNumbers(buffer.begin(), buffer.end());

    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n========== randomized TESTS ==========\n" << std::endl;
    
    try {

        int N = 100000;
        Span sp2(N);
        srand(time(NULL));
        for (int i = 0; i < N; i++)
        {
            sp2.addNumber(rand());
        }

        std::cout << "Shortest Span ---> " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest Span  ---> " << sp2.longestSpan() << std::endl;

    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n========== end TESTS ==========\n" << std::endl;
    
    return 0;
}
