
#include "Bureaucrat.hpp"

int main()
{

    Bureaucrat a;
    Bureaucrat b("adam", 100);

    try {
        Bureaucrat c("adam", 1000);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    for (int i = 0; i < 60; i++)
    {
        try {
            std::cout << b;
            b.decrement();
        } catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    for (int i = 0; i < 160; i++)
    {
        try {
            std::cout << b;
            b.increment();
        } catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

}


