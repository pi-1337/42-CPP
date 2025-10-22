

#include "PresidentialPardonForm.hpp"

// Orthodox
PresidentialPardonForm::PresidentialPardonForm(std::string _target)
    : AForm::AForm("PresidentialPardonForm", 25, 5)
    , target(_target)
{
    std::cout << "PresidentialPardonForm: Paramterized Constructor Called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
    : AForm::AForm(obj)
    , target(obj.target)
{
    std::cout << "PresidentialPardonForm: Copy Constructor Called" << std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
    std::cout << "PresidentialPardonForm: Copy Assignment operator Called" << std::endl;
    AForm::operator=(obj);
    this->target = obj.getTarget();
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm: Destructor operator Called" << std::endl;
}


// getters
std::string PresidentialPardonForm::getTarget( void ) const
{
    return target;
}

// class logic

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    executor.executeForm(*this);
    // concrete class action
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}



