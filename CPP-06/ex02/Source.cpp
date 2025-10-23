
#include "Header.hpp"

Base::~Base() {}
A::~A() {}
B::~B() {}
C::~C() {}

Base*   generate( void )
{
    std::string strs[] = { "A", "B", "C" };

    srand(time(NULL));
    int r = rand();
    std::cout << strs[r%3] << std::endl;
    if (r%3 == 0)
        return (new A());
    if (r%3 == 1)
        return (new B());
    if (r%3 == 2)
        return (new C());
    return (NULL);
}

void    identify( Base* p )
{
    std::string strs[] = { "A", "B", "C" };
    int idx = 0;

    if (dynamic_cast<A*>(p))
        idx = 0;
    else if (dynamic_cast<B*>(p))
        idx = 1;
    else if (dynamic_cast<C*>(p))
        idx = 2;
    else
    {
        std::cerr << "dynamic_cast Failure !!" << std::endl;
        return ;
    }

    std::cout << strs[idx] << std::endl;
}

void    identify( Base& p )
{
    std::string strs[] = { "A", "B", "C" };
    int idx = 0;

    try {
        dynamic_cast<A&>(p); idx = 0;
    } catch ( std::exception& e ) {}
    try {
        dynamic_cast<B&>(p); idx = 1;
    } catch ( std::exception& e ) {}
    try {
        dynamic_cast<C&>(p); idx = 2;
    } catch ( std::exception& e ) {}

    std::cout << strs[idx] << std::endl;
}
