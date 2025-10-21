

#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP


#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm {
private:
    std::string target;

public:
    // Orthodox
    ShrubberyCreationForm(std::string _target);
    ShrubberyCreationForm(ShrubberyCreationForm const &obj);
    ShrubberyCreationForm& operator=(ShrubberyCreationForm const &obj);
    ~ShrubberyCreationForm();

    // logic
    void    execute(Bureaucrat const & executor) const;

    //getters
    std::string     getTarget( void ) const;
    
};

#endif
