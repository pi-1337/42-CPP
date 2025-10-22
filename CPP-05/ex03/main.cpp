
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main()
{
    
    ShrubberyCreationForm x("my_target");
    Bureaucrat b("3azziz", 1);

    std::cerr << std::endl << "======== start TESTS ========" << std::endl << std::endl;
    b.signForm(x);
    x.execute(b);

    
    std::cerr << std::endl << "======== end TESTS ========" << std::endl << std::endl;

    

}


