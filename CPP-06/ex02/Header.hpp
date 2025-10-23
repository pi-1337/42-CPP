#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

class Base {
public:
    virtual ~Base();
};

class A: public Base { ~A(); };
class B: public Base { ~B(); };
class C: public Base { ~C(); };

Base*   generate( void );
void    identify( Base* p );
void    identify( Base& p );

#endif