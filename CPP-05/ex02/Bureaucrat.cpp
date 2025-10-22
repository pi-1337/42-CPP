
#include "Bureaucrat.hpp"

// Ortodox
Bureaucrat::Bureaucrat()
    : name("3aziz")
    , grade(150)
{
    std::cout << "Default Constructor Called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string _name, int _grade)
    : name(_name)
{
    std::cout << "Paramterized Constructor Called" << std::endl;
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        grade = _grade;
}
Bureaucrat::Bureaucrat(Bureaucrat const &obj)
    : name(obj.name)
    , grade(obj.grade)
{
    std::cout << "Copy Constructor Called" << std::endl;
}
Bureaucrat& Bureaucrat::operator=(Bureaucrat const &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->grade = obj.getGrade();
    return *this;
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "Desctructor called" << std::endl;
}

// getters
std::string Bureaucrat::getName() const
{
    return name;
}
int Bureaucrat::getGrade() const
{
    return grade;
}

// + -
void        Bureaucrat::increment( void )
{
    if (grade - 1 < 1)
        throw GradeTooHighException();
    grade--;
}
void        Bureaucrat::decrement( void )
{
    if (grade + 1 > 150)
        throw GradeTooLowException();
    grade++;
}


// <<

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& obj)
{
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
    return out;
}


// class logic
void        Bureaucrat::signForm( AForm& form )
{
    try {
        form.beSigned(*this);
        std::cout << this->getName() << " signed the form " << form.getName() << std::endl;
    } catch (std::exception& e) {
        std::cerr << this->getName()
                    << " couldn't sign the form "
                    << form.getName()
                    << ", reason: "
                    << e.what()
                    << std::endl;
    }
}

void        Bureaucrat::executeForm(AForm const & form) const
{
    if (!form.getIs_signed())
        throw AForm::FormNotSignedException();
    if (this->getGrade() > form.getGrade_2_exec())
        throw AForm::GradeTooLowException();
    std::cout << this->getName()
                << " executed the form "
                << form.getName()
                << std::endl;
}
