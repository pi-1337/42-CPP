
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm {
private:
    std::string  target;

public:
    // Orthodox
    ShrubberyCreationForm(std::string _target);
    ShrubberyCreationForm(ShrubberyCreationForm const &obj);
    ShrubberyCreationForm& operator=(ShrubberyCreationForm const &obj);
    ~ShrubberyCreationForm();

    // getters
    std::string getTarget( void ) const;

    // class logic
    void    execute(Bureaucrat const & executor) const;
};

#endif