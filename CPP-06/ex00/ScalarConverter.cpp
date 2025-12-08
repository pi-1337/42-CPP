

#include "ScalarConverter.hpp"

// ORTHODOX
ScalarConverter::ScalarConverter()
{
}
ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    (void)other;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    return *this;
}
ScalarConverter::~ScalarConverter()
{
}

// class UTILITY
void    ScalarConverter::convert( char* input )
{
    bool valid = true;
    std::cout << std::fixed << std::setprecision(1);
    double parsed = parseInput(input, valid);

    std::cout << "char: ";
    convertChar(parsed, valid);

    std::cout << std::endl << "int: "   ;
    convertInt(parsed, valid);

    std::cout << std::endl << "float: " ;
    convertFloat(parsed, valid);

    std::cout << std::endl << "double: ";
    convertDouble(parsed, valid);
    std::cout << std::endl;
}
