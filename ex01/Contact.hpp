
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Contact
{
private:
    std::string  firstName;
    std::string  lastName;
    std::string  nickname;
    std::string  phoneNumber;
    std::string  secret;

    void    display_col(std::string str);

public:
    void    setContact(std::string _firstName, std::string _lastName, std::string _nickname, std::string _phoneNumber, std::string _secret);
    void    printAsRow(int idx);
    void    printSpecifically(void);
};

#endif
