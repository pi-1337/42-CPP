
#include "ScalarConverter.hpp"

void    convertChar( double parsed, bool valid, bool infinite )
{
    int n = static_cast<int>(parsed);
    char c = static_cast<char>(n);

    if (!valid || std::floor(parsed) != parsed || infinite)
        std::cout << "Impossible";
    else if (!std::isprint(c) || c != n)
        std::cout << "Non displayable";
    else
        std::cout << "\'" << c << "\'";
}

void    convertInt( double parsed, bool valid, bool infinite )
{
    if (!valid || std::isnan(parsed) || INT_MAX < parsed || parsed < INT_MIN || infinite)
        std::cout << "Impossible";
    else
        std::cout << static_cast<int>(parsed);
}

void    convertFloat( double parsed, bool valid, bool infinite )
{
    if (infinite)
        return;
    if (!valid)
        std::cout << "Impossible";
    else
        std::cout << parsed << "f";
}

void    convertDouble( double parsed, bool valid, bool infinite )
{
    if (infinite)
        return;
    if (!valid)
        std::cout << "Impossible";
    else
        std::cout << parsed;
}

double  parseInput(std::string input, bool& valid, bool& infinite)
{
    char*   end;

    if (input.size() == 3 && input[0] == '\'' && input[2] == '\'')
        return static_cast<double>(input[1]);

    double result = std::strtod((char *)input.c_str(), &end);
    valid = (*end == '\0');
    infinite = (input == "-inf" || input == "+inf");

    if (!valid && !infinite && input[input.size()-1] == 'f')
    {
        input[input.size()-1] = '\0';
        return (parseInput(input, valid, infinite));
    }
    return result;
}
