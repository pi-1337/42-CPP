
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main()
{
    
    ShrubberyCreationForm form1("target1");
    RobotomyRequestForm form2("target2");
    PresidentialPardonForm form3("target3");
    
    Bureaucrat issa("issa", 100);
    Bureaucrat zakaria("zakaria", 1);


    std::cout << std::endl << "======== start LOGS ========" << std::endl << std::endl;

    std::cout << form1;
    std::cout << form2;
    std::cout << form3;
    std::cout << issa;

    
    std::cout << std::endl << "======== end LOGS ========" << std::endl << std::endl;


    std::cout << std::endl << "======== start TESTS ========" << std::endl << std::endl;

    try {
        form1.execute(issa);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        form2.execute(issa);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        form3.execute(issa);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    
    try {
        issa.signForm(form1);
        form1.execute(issa);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        issa.signForm(form2);
        form2.execute(issa);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        issa.signForm(form3);
        form3.execute(issa);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "======== end TESTS ========" << std::endl << std::endl;

    
    std::cout << std::endl << "======== start TESTS ========" << std::endl << std::endl;

    try {
        form1.execute(zakaria);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        form2.execute(zakaria);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        form3.execute(zakaria);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    
    try {
        zakaria.signForm(form1);
        form1.execute(zakaria);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        zakaria.signForm(form2);
        form2.execute(zakaria);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        zakaria.signForm(form3);
        form3.execute(zakaria);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "======== end TESTS ========" << std::endl << std::endl;


}


