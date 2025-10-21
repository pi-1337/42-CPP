

#include "PresidentialPardonForm.hpp"

// orthodox
PresidentialPardonForm::PresidentialPardonForm(std::string _target)
    : AForm(obj)
    , target(_target)
    , grade_2_sign(145)
    , grade_2_exec(137)
{
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
    : AForm(obj)
    , target(obj.target)
    , grade_2_sign(145)
    , grade_2_exec(137)
{
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
    target = obj.getTarget();
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}

// getters
std::string     PresidentialPardonForm::getTarget( void ) const
{
    return target;
}

// logic
void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getIs_signed())
    {
        if (executor.getGrade() <= this->getGrade_2_exec())
            std::cout << executor.getName() << " executed " << this->getName() << std::endl;
        else
            throw Bureaucrat::GradeTooLowException();
    }
}