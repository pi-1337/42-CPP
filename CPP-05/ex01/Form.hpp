
#ifndef FORM_HPP
#define FORM_HPP


#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    std::string const   name;
    bool                is_signed;
    int const           grade_2_sign;
    int const           grade_2_exec;

public:
    // Orthodox
    Form();
    Form(std::string _name, int _grade_2_sign, int _grade_2_exec);
    Form(Form const &obj);
    Form& operator=(Form const &obj);
    ~Form();

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

    // getters
    std::string         getName( void ) const;
    bool                getIs_signed( void ) const;
    int                 getGrade_2_sign( void ) const;
    int                 getGrade_2_exec( void ) const;

    // class logic
    void    beSigned( Bureaucrat& b );

};

std::ostream&   operator<<(std::ostream& out, const Form& obj);

#endif