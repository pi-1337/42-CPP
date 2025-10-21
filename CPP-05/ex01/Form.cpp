

#include "Form.hpp"

// Orthodox
Form::Form()
    : name("placeholder")
    , is_signed(false)
    , grade_2_sign(100)
    , grade_2_exec(100)
{
}
Form::Form(std::string _name, int _grade_2_sign, int _grade_2_exec)
    : name(_name)
    , is_signed(false)
    , grade_2_sign(_grade_2_sign)
    , grade_2_exec(_grade_2_exec)
{
    std::cout << "Form: Paramterized Constructor Called" << std::endl;
    if (_grade_2_sign > 150)
        throw Form::GradeTooLowException();
    else if (_grade_2_sign < 1)
        throw Form::GradeTooHighException();

    if (_grade_2_exec > 150)
        throw Form::GradeTooLowException();
    else if (_grade_2_exec < 1)
        throw Form::GradeTooHighException();
}
Form::Form(Form const &obj)
    : name(obj.name)
    , is_signed(obj.is_signed)
    , grade_2_sign(obj.grade_2_sign)
    , grade_2_exec(obj.grade_2_exec)
{
    std::cout << "Form: Copy Constructor Called" << std::endl;
}
Form& Form::operator=(Form const &obj)
{
    std::cout << "Form: Copy Assignment operator Called" << std::endl;
    this->is_signed = obj.getIs_signed();
    return *this;
}
Form::~Form()
{
    std::cout << "Form: Destructor operator Called" << std::endl;
}

// getters

std::string         Form::getName( void ) const
{
    return name;
}
bool                Form::getIs_signed( void ) const
{
    return is_signed;
}
int                 Form::getGrade_2_sign( void ) const
{
    return grade_2_sign;
}
int                 Form::getGrade_2_exec( void ) const
{
    return grade_2_exec;
}

// class logic
void    Form::beSigned( Bureaucrat& b )
{
    if (b.getGrade() <= this->getGrade_2_sign()) {
        is_signed = true;
        return;
    }
    throw GradeTooLowException();
}



// << 
std::ostream&   operator<<(std::ostream& out, const Form& obj)
{
    out << "\'" <<  obj.getName() << "\'" << ", Form " <<
        (obj.getIs_signed() ? "" : "NOT") <<
        " Signed , it requires at least " <<
        obj.getGrade_2_sign() << " grade to sign, or at least " <<
        obj.getGrade_2_exec() << " grade to execute." << std::endl;
    return out;
}
