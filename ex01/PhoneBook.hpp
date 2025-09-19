
#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int     contactsLength;

    void    displayTable();
    bool    valid_phone_number(std::string str);
    
public:

    PhoneBook();

    void    addContract();
    void    search();
};

#endif
