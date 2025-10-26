


#include "Header.hpp"
#include <exception>

int main()
{

    std::cout << "=========== CREATION ===========" << std::endl;

    Base* ptr = NULL;

    try {
        ptr = generate();
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "=========== using PTR ===========" << std::endl;

    identify(ptr);

    std::cout << "=========== using REF ===========" << std::endl;

    identify(*ptr);

    delete ptr;

    return 0;
}
