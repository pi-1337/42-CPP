
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
    
    Intern i;

    std::cerr << std::endl << "======== start TESTS ========" << std::endl << std::endl;
    
    i.makeForm("robotomy request", "target1");
    i.makeForm("nothing", "target2");



    
    std::cerr << std::endl << "======== end TESTS ========" << std::endl << std::endl;

    

}


