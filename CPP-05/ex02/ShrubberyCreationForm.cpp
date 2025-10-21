

#include "ShrubberyCreationForm.hpp"

// orthodox
ShrubberyCreationForm::ShrubberyCreationForm(std::string _target)
    : AForm(obj)
    , target(_target)
    , grade_2_sign(25)
    , grade_2_exec(5)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
    : AForm(obj)
    , target(obj.target)
    , grade_2_sign(25)
    , grade_2_exec(5)
{
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
    target = obj.getTarget();
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

// getters
std::string     ShrubberyCreationForm::getTarget( void ) const
{
    return target;
}

// logic
void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getIs_signed())
    {
        if (executor.getGrade() <= this->getGrade_2_exec())
            std::cout << executor.getName() << " executed " << this->getName() << std::endl;
        else
            throw Bureaucrat::GradeTooLowException();
    }
}