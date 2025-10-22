



#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern {
private:
    AForm*    makeForm1(std::string formTarget);
    AForm*    makeForm2(std::string formTarget);
    AForm*    makeForm3(std::string formTarget);

public:
    // Orthodox
    Intern();
    Intern(Intern const &obj);
    Intern& operator=(Intern const &obj);
    ~Intern();

    // class logic
    AForm*    makeForm(std::string formName, std::string formTarget);
};

#endif
