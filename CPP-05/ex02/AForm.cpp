

#include "AForm.hpp"

// Orthodox
AForm::AForm()
    : name("placeholder")
    , is_signed(false)
    , grade_2_sign(100)
    , grade_2_exec(100)
{
}
AForm::AForm(std::string _name, int _grade_2_sign, int _grade_2_exec)
    : name(_name)
    , is_signed(false)
    , grade_2_sign(_grade_2_sign)
    , grade_2_exec(_grade_2_exec)
{
    std::cout << "AForm: Paramterized Constructor Called" << std::endl;
    if (_grade_2_sign > 150)
        throw AForm::GradeTooLowException();
    else if (_grade_2_sign < 1)
        throw AForm::GradeTooHighException();

    if (_grade_2_exec > 150)
        throw AForm::GradeTooLowException();
    else if (_grade_2_exec < 1)
        throw AForm::GradeTooHighException();
}
AForm::AForm(AForm const &obj)
    : name(obj.name)
    , is_signed(obj.is_signed)
    , grade_2_sign(obj.grade_2_sign)
    , grade_2_exec(obj.grade_2_exec)
{
    std::cout << "AForm: Copy Constructor Called" << std::endl;
}
AForm& AForm::operator=(AForm const &obj)
{
    std::cout << "AForm: Copy Assignment operator Called" << std::endl;
    this->is_signed = obj.getIs_signed();
    return *this;
}
AForm::~AForm()
{
    std::cout << "AForm: Destructor operator Called" << std::endl;
}

// getters

std::string         AForm::getName( void ) const
{
    return name;
}
bool                AForm::getIs_signed( void ) const
{
    return is_signed;
}
int                 AForm::getGrade_2_sign( void ) const
{
    return grade_2_sign;
}
int                 AForm::getGrade_2_exec( void ) const
{
    return grade_2_exec;
}

// class logic
void    AForm::beSigned( Bureaucrat& b )
{
    if (b.getGrade() <= this->getGrade_2_sign()) {
        is_signed = true;
        return;
    }
    throw GradeTooLowException();
}



// << 
std::ostream&   operator<<(std::ostream& out, const AForm& obj)
{
    out << "\'" <<  obj.getName() << "\'" << ", AForm " <<
        (obj.getIs_signed() ? "" : "NOT") <<
        " Signed , it requires at least " <<
        obj.getGrade_2_sign() << " grade to sign, or at least " <<
        obj.getGrade_2_exec() << " grade to execute." << std::endl;
    return out;
}
