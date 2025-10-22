

#include "ShrubberyCreationForm.hpp"

// Orthodox
ShrubberyCreationForm::ShrubberyCreationForm(std::string _target)
    : AForm::AForm("ShrubberyCreationForm", 145, 137)
    , target(_target)
{
    std::cout << "ShrubberyCreationForm: Paramterized Constructor Called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
    : AForm::AForm(obj)
    , target(obj.target)
{
    std::cout << "ShrubberyCreationForm: Copy Constructor Called" << std::endl;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
    std::cout << "ShrubberyCreationForm: Copy Assignment operator Called" << std::endl;
    AForm::operator=(obj);
    this->target = obj.getTarget();
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm: Destructor operator Called" << std::endl;
}


// getters
std::string ShrubberyCreationForm::getTarget( void ) const
{
    return target;
}

// class logic

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    executor.executeForm(*this);
    // concrete class action
    std::ofstream outfile((this->getTarget() + "_shrubbery").c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Error opening file" << std::endl;
        return;
    }
    outfile << "  ^       ^\n ^^^     ^^^\n^^^^^   ^^^^^\n |||     |||\n";
    outfile << "  ^       ^\n ^^^     ^^^\n^^^^^   ^^^^^\n |||     |||\n";
    outfile << "  ^       ^\n ^^^     ^^^\n^^^^^   ^^^^^\n |||     |||\n";
    outfile.close();
}



