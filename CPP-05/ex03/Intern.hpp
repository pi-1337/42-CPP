



#ifndef INTERN_HPP
#define INTERN_HPP

class Intern {
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
