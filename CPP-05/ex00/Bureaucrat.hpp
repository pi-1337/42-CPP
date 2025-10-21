
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat {
private:
    std::string const   name;
    int                 grade;

public:
    // Orthodox
    Bureaucrat();
    Bureaucrat(std::string _name, int _grade);
    Bureaucrat(Bureaucrat const &obj);
    Bureaucrat& operator=(Bureaucrat const &obj);
    ~Bureaucrat();

    // getters
    std::string     getName() const;
    int             getGrade() const;

    // exceptions
    class GradeTooHighException: public std::exception {
        virtual const char* what() const throw()
        {
            return "Grade Too High";
        }
    };
    class GradeTooLowException: public std::exception {
        virtual const char* what() const throw()
        {
            return "Grade Too Low";
        }
    };

    // + -
    void        increment( void );
    void        decrement( void );

};

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& obj);

#endif