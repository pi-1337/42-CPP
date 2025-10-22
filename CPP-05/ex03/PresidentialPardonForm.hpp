
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm {
private:
    std::string  target;

public:
    // Orthodox
    PresidentialPardonForm(std::string _target);
    PresidentialPardonForm(PresidentialPardonForm const &obj);
    PresidentialPardonForm& operator=(PresidentialPardonForm const &obj);
    ~PresidentialPardonForm();

    // getters
    std::string getTarget( void ) const;

    // class logic
    void    execute(Bureaucrat const & executor) const;
};

#endif