

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
    bool infinite = false;
    std::cout << std::fixed << std::setprecision(1);
    double parsed = parseInput(input, valid, infinite);

    std::cout << "char: ";
    convertChar(parsed, valid, infinite);

    std::cout << std::endl << "int: "   ;
    convertInt(parsed, valid, infinite);

    std::cout << std::endl << "float: " ;
    infinite ? (std::cout << input[0] << "inf") : std::cout << "";
    convertFloat(parsed, valid, infinite);

    std::cout << std::endl << "double: ";
    infinite ? (std::cout << input[0] << "inff") : std::cout << "";
    convertDouble(parsed, valid, infinite);
    std::cout << std::endl;
}
