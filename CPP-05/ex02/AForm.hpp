
#ifndef AFORM_HPP
#define AFORM_HPP


#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
    std::string const   name;
    bool                is_signed;
    int const           grade_2_sign;
    int const           grade_2_exec;

public:
    // Orthodox
    AForm();
    AForm(std::string _name, int _grade_2_sign, int _grade_2_exec);
    AForm(AForm const &obj);
    AForm& operator=(AForm const &obj);
    virtual ~AForm();

    // exceptions
    class GradeTooHighException: public std::exception {
        virtual const char* what() const throw()
        {
            return "Form Grade Too High";
        }
    };
    class GradeTooLowException: public std::exception {
        virtual const char* what() const throw()
        {
            return "Form Grade Too Low";
        }
    };
    class FormNotSignedException: public std::exception {
        virtual const char* what() const throw()
        {
            return "Form Is Not Signed !";
        }
    };

    // getters
    std::string         getName( void ) const;
    bool                getIs_signed( void ) const;
    int                 getGrade_2_sign( void ) const;
    int                 getGrade_2_exec( void ) const;

    // class logic
    void            beSigned( Bureaucrat& b );
    virtual void    execute(Bureaucrat const & executor) const = 0;

};

std::ostream&   operator<<(std::ostream& out, const AForm& obj);

#endif