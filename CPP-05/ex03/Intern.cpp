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
    (void)obj;
}
Intern& Intern::operator=(Intern const &obj)
{
    (void)obj;
    return *this;
}
Intern::~Intern()
{
}

// class logic
AForm*    Intern::makeForm1(std::string formTarget)
{
    return new RobotomyRequestForm(formTarget);
}
AForm*    Intern::makeForm2(std::string formTarget)
{
    return new PresidentialPardonForm(formTarget);
}
AForm*    Intern::makeForm3(std::string formTarget)
{
    return new ShrubberyCreationForm(formTarget);
}

AForm*    Intern::makeForm(std::string formName, std::string formTarget)
{
    std::string formNames[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    AForm* (Intern::*forms[])(std::string) = {
        &Intern::makeForm1,
        &Intern::makeForm2,
        &Intern::makeForm3
    };

    // find form
    int i = -1;
    while (++i < 3)
    {
        if (formNames[i] == formName)
            break ;
    }

    if (i == 3)
    {
        std::cerr << "Intern: Form does\'t exists" << std::endl;
        return NULL;
    }

    // alloc ajmi
    AForm* result;
    try {
        result = (this->*forms[i])(formTarget);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
        return NULL;
    }
    std::cout << "Intern creates the form " << formName << std::endl;
    return result;
}

