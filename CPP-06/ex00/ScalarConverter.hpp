
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

class ScalarConverter {
private:
    // Orthodox
    ScalarConverter();
    ScalarConverter(ScalarConverter const &obj);
    ScalarConverter& operator=(ScalarConverter const &obj);
    ~ScalarConverter();

public:
    // class utility
    static void     convert( const std::string& s );
};

#endif