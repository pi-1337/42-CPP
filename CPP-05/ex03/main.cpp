
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
    
    Intern i;
    Bureaucrat issa("issa", 2);

    std::cout << std::endl << "======== start TESTS ========" << std::endl << std::endl;
    
    AForm* form = i.makeForm("robotomy request", "target1");
    i.makeForm("nothing", "target2");

    try {
        issa.signForm(*form);
        form->execute(issa);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    
    std::cout << std::endl << "======== end TESTS ========" << std::endl << std::endl;

    

}


