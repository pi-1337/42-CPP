
#include <iostream>

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int     contactsLength;

    void    displayTable()
    {
        std::cout << "___________________________________________ " << std::endl;
        std::cout << "     index|first name| last name|  nickname|" << std::endl;
        std::cout << "----------|----------|----------|----------|" << std::endl;
        for (int i = 0; i < contactsLength; i++)
            contacts[i].printAsRow(i);
    }

    bool    valid_phone_number(std::string str)
    {
        for (int i = 0; str[i]; i++)
        {
            if (!std::isdigit(str[i]))
                return false;
        }
        return true;
    }
    
public:

    void    addContract()
    {
        std::string  firstName;
        std::string  lastName;
        std::string  nickname;
        std::string  phoneNumber;
        std::string  secret;

        std::cout << "first name : ";
        if (!getline(std::cin, firstName) || firstName.empty())
        {
            std::cout << "param not valid" << std::endl;
            return ;
        }

        std::cout << "last name : ";
        if (!getline(std::cin, lastName) || lastName.empty())
        {
            std::cout << "param not valid" << std::endl;
            return ;
        }

        std::cout << "nickname : ";
        if (!getline(std::cin, nickname) || nickname.empty())
        {
            std::cout << "param not valid" << std::endl;
            return ;
        }

        std::cout << "phone number : ";
        if (!getline(std::cin, phoneNumber) || phoneNumber.empty() || !valid_phone_number(phoneNumber))
        {
            std::cout << "param not valid" << std::endl;
            return ;
        }

        std::cout << "secret : ";
        if (!getline(std::cin, secret) || secret.empty())
        {
            std::cout << "param not valid" << std::endl;
            return ;
        }

        contacts[contactsLength].setContact(firstName, lastName, nickname, phoneNumber, secret);

        contactsLength++;
        contactsLength %= 8;
    }

    void    search()
    {
        displayTable();

        std::string index;
        std::cout << "enter an index : ";
        
        if (!getline(std::cin, index))
            return ;

        if (index.size() != 1 || !std::isdigit(index[0]))
            std::cout << "index not valid" << std::endl;
        else
        {
            int i = index[0] - '0';
            if (i < 0 || i > contactsLength - 1)
                std::cout << "index out of range" << std::endl;
            else
                contacts[i].printSpecifically();
        }
    }
};
