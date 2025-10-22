#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// Orthodox
Intern::Intern()
{
}
Intern::Intern(Intern const &obj)
{
}
Intern& Intern::operator=(Intern const &obj)
{
    return *this;
}
Intern::~Intern()
{
}

// class logic
AForm*    Intern::makeForm(std::string formName, std::string formTarget)
{
    std::cout << "Intern creates the form " << formName << std::endl;
    std::string formNames[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    }
    AForm forms[] = {
        RobotomyRequestForm, 
        PresidentialPardonForm, 
        ShrubberyCreationForm,
    }

    // find form
    i = 0;

    // alloc ajmi
    AForm* result;
    try {
        result = new (forms[i])(formTarget);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
        return NULL;
    }
    return result;
}

