
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm {
private:
    std::string  target;

public:
    // Orthodox
    RobotomyRequestForm(std::string _target);
    RobotomyRequestForm(RobotomyRequestForm const &obj);
    RobotomyRequestForm& operator=(RobotomyRequestForm const &obj);
    ~RobotomyRequestForm();

    // getters
    std::string getTarget( void ) const;

    // class logic
    void    execute(Bureaucrat const & executor) const;
};

#endif