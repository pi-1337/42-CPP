

#include "RobotomyRequestForm.hpp"

// orthodox
RobotomyRequestForm::RobotomyRequestForm(std::string _target)
    : AForm(obj)
    , target(_target)
    , grade_2_sign(72)
    , grade_2_exec(45)
{
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
    : AForm(obj)
    , target(obj.target)
    , grade_2_sign(72)
    , grade_2_exec(45)
{
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
    target = obj.getTarget();
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}

// getters
std::string     RobotomyRequestForm::getTarget( void ) const
{
    return target;
}

// logic
void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getIs_signed())
    {
        if (executor.getGrade() <= this->getGrade_2_exec())
            std::cout << executor.getName() << " executed " << this->getName() << std::endl;
        else
            throw Bureaucrat::GradeTooLowException();
    }
}