
#include "RPN.hpp"

int operate(std::stack<int> my_stack, char op)
{
    (void) my_stack;
    int a = my_stack.top();
    my_stack.pop();
    int b = my_stack.top();
    my_stack.pop();

    if (op == '+')
        return b+a;
    else if (op == '-')
        return b-a;
    else if (op == '*')
        return b*a;
    else if (op == '/')
    {
        if (a == 0)
            throw std::logic_error("division by zero !");
        return b/a;
    }
    else
        throw std::logic_error("Error");
}

int RPN(std::string arg, bool& valid)
{
    std::stack<int> my_stack;
    int result;

    valid = true;
    unsigned int len = arg.size();
    try {
        for (unsigned int i = 0; i < len; i += 2)
        {
            if (std::isdigit(arg[i]))
                my_stack.push(arg[i] - '0');
            else
                my_stack.push(operate(my_stack, arg[i]));
        }
        result = my_stack.top();
        my_stack.pop();
    } catch (...) {
        valid = false;
    }
    return result;
}
