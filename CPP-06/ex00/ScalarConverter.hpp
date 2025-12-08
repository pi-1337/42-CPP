
#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <limits>
#include <iomanip>
#include <cstring>
#include <climits>

class ScalarConverter {
private:
    // ORTHODOX
    ScalarConverter();
    ScalarConverter(const ScalarConverter& other);
    ScalarConverter& operator=(const ScalarConverter& other);
    ~ScalarConverter();

public:
    static void convert( char * input );
};

// display
void    convertChar( double parsed, bool valid );
void    convertInt( double parsed, bool valid );
void    convertFloat( double parsed, bool valid );
void    convertDouble( double parsed, bool valid );

// parsing
double  parseInput(char *input, bool& valid);

#endif

