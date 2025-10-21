

#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm {
private:
    std::string target;

public:
    // Orthodox
    RobotomyRequestForm(std::string _target);
    RobotomyRequestForm(RobotomyRequestForm const &obj);
    RobotomyRequestForm& operator=(RobotomyRequestForm const &obj);
    ~RobotomyRequestForm();

    // logic
    void    execute(Bureaucrat const & executor) const;

    //getters
    std::string     getTarget( void ) const;
    
};

#endif
