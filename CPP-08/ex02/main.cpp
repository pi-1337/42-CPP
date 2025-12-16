
#include "MutantStack.hpp"


int main()
{
    std::cout << "========== subject TESTS ==========" << std::endl;


    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;

    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);


    std::cout << "\n========== my own TESTS ==========\n" << std::endl;


    MutantStack<char> stack_mli7;

    stack_mli7.push(67);
    stack_mli7.push(80);
    stack_mli7.push(95);
    stack_mli7.push(90);
    stack_mli7.push(51);
    stack_mli7.push(82);
    stack_mli7.push(48);
    stack_mli7.push(123);
    stack_mli7.push(112);
    stack_mli7.push(87);
    stack_mli7.push(52);
    stack_mli7.push(110);
    stack_mli7.push(116);
    stack_mli7.push(48);
    stack_mli7.push(111);
    stack_mli7.push(111);
    stack_mli7.push(79);
    stack_mli7.push(48);
    stack_mli7.push(114);
    stack_mli7.push(125);

    for (
        MutantStack<char>::iterator it = stack_mli7.begin();
        it != stack_mli7.end();
        it++
    )
    {
        std::cout << static_cast<char>(*it);
    }

    std::cout << "\n\n========== end TESTS ==========\n" << std::endl;

    return 0;
}

