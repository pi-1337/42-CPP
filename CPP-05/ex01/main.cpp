
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    
    
    Form f("formy", 100, 100);
    Bureaucrat zakaria("zakaria", 99);
    Bureaucrat issa("3issa", 101);


    std::cout << std::endl << "======== START TESTS ========" << std::endl << std::endl;

    try {
        zakaria.signForm(f);
        issa.signForm(f);

        issa.increment();
        
        issa.signForm(f);

    } catch(std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "======== END TESTS ========" << std::endl << std::endl;


}


