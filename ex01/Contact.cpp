
#include "Contact.hpp"

void Contact::display_col(std::string str)
{
    std::string pnts = str.length() > 10 ? "." : "";
    std::string printed = str.length() > 10 ? str.substr(0, 9) : str.substr(0, 10);
    for (size_t i = 0; i < 10 - (printed+pnts).length(); i++) std::cout << " ";
    std::cout << printed << pnts;
    std::cout << "|";
}

void Contact::setContact(std::string _firstName, std::string _lastName, std::string _nickname, std::string _phoneNumber, std::string _secret)
{
    firstName = _firstName;
    lastName = _lastName;
    nickname = _nickname;
    phoneNumber = _phoneNumber;
    secret = _secret;
}

void Contact::printAsRow(int idx)
{
    display_col(std::string(1, '0' + idx));
    display_col(firstName);
    display_col(lastName);
    display_col(nickname);
    std::cout << std::endl << "__________|__________|__________|__________|" << std::endl;
}

void Contact::printSpecifically(void)
{
    std::cout << std::endl;
    std::cout << "first name : " << firstName << std::endl;
    std::cout << "last name : " << lastName << std::endl;
    std::cout << "nickname : " << nickname << std::endl;
    std::cout << "phone number : " << phoneNumber << std::endl;
    std::cout << std::endl;
}
