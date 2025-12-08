
#include "ScalarConverter.hpp"

void    convertChar( double parsed, bool valid )
{
    int n = static_cast<int>(parsed);
    char c = static_cast<char>(n);

    if (!valid || std::floor(parsed) != parsed)
        std::cout << "Impossible";
    else if (!std::isprint(c) || c != n)
        std::cout << "Non displayable";
    else
        std::cout << "\'" << c << "\'";
}

void    convertInt( double parsed, bool valid )
{
    if (!valid || std::isnan(parsed) || INT_MAX < parsed || parsed < INT_MIN)
        std::cout << "Impossible";
    else
        std::cout << static_cast<int>(parsed);
}

void    convertFloat( double parsed, bool valid )
{
    if (!valid)
        std::cout << "Impossible";
    else
        std::cout << parsed << "f";
}

void    convertDouble( double parsed, bool valid )
{
    if (!valid)
        std::cout << "Impossible";
    else
        std::cout << parsed;
}

double  parseInput(char *input, bool& valid)
{
    char*   end;

    if (std::strlen(input) == 3 && input[0] == '\'' && input[2] == '\'')
        return static_cast<double>(input[1]);

    double result = std::strtod(input, &end);
    char *dot_pos = std::strrchr(input, '.');
    valid = (*end == '\0' || (*end == 'f' && *(end+1) == '\0' && dot_pos && dot_pos < end));
    return result;
}
