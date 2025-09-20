
#include "PhoneBook.hpp"

#include <iostream>
#include <string>

int main()
{
    PhoneBook   phoneBook;
    std::string      cmd;

    std::cout << "Prompts: ADD, SEARCH and EXIT\n";
    while (1)
    {
        std::cout << "Prompt > ";
        if (!getline(std::cin, cmd))
            exit(1);
        if (cmd == "ADD")
            phoneBook.addContract();
        if (cmd == "SEARCH")
            phoneBook.search();
        else if (cmd == "EXIT")
            break;
    }

    return 0;
}


