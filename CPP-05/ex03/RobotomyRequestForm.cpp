

#include "RobotomyRequestForm.hpp"

// Orthodox
RobotomyRequestForm::RobotomyRequestForm(std::string _target)
    : AForm::AForm("RobotomyRequestForm", 72, 45)
    , target(_target)
{
    std::cout << "RobotomyRequestForm: Paramterized Constructor Called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
    : AForm::AForm(obj)
    , target(obj.target)
{
    std::cout << "RobotomyRequestForm: Copy Constructor Called" << std::endl;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
    std::cout << "RobotomyRequestForm: Copy Assignment operator Called" << std::endl;
    AForm::operator=(obj);
    this->target = obj.getTarget();
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm: Destructor operator Called" << std::endl;
}


// getters
std::string RobotomyRequestForm::getTarget( void ) const
{
    return target;
}

// class logic

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    executor.executeForm(*this);
    // concrete class action

    std::cout << "[Making some drilling noises]\n";
    srand (time(NULL));
    if (rand() % 2)
        std::cout << this->getTarget() << " has been successfully robotomized!\n";
    else
        std::cout << "Too bad... Robotomy failed on " << this->getTarget() << "\n";

}



