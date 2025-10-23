
#include "Header.hpp"

Base::~Base() {}
A::~A() {
}
B::~B() {
}
C::~C() {
}

Base*   generate( void )
{
    srand(time(NULL));
    int r = rand();
    if (r % 3 == 0)
        return (new A());
    if (r % 3 == 1)
        return (new B());
    if (r % 3 == 2)
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
        return ;

    std::cout << strs[idx] << std::endl;
}

void    identify( Base& p )
{
    (void)p;
}



