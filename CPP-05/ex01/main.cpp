
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    
    
    Form f;
    Bureaucrat b("zakaria", 150);


    std::cerr << std::endl << "======== TESTS ========" << std::endl << std::endl;

    try {
        b.signForm(f);

        

    } catch(std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cerr << std::endl << "======== after TESTS ========" << std::endl << std::endl;


}


