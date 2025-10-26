

#include "ScalarConverter.hpp"
#include <stdlib.h>
#include <cctype>

// Orthodox
ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(ScalarConverter const &obj) { (void)obj; }
ScalarConverter& ScalarConverter::operator=(ScalarConverter const &obj) { (void)obj; return *this; }
ScalarConverter::~ScalarConverter() {}

// helpers
static bool    isCharLiteral( const std::string& s )
{
    return (s.length() == 3 && s[0] == '\'' && s[2] == '\'');
}

bool isInt(const std::string &s) {
    if (s.empty())
        return false;
    for (size_t i = (s[0] == '+' || s[0] == '-'); i < s.length(); i++) {
        if (!std::isdigit(static_cast<char>(s[i])))
            return false;
    }
    return true;
}

bool isDouble(const std::string &s) {
    int count_dots = 0;
    size_t len = s.length();

    if (len == 0)
        return false;
    for (size_t i = (s[0] == '+' || s[0] == '-'); i < len; i++) {
        count_dots += s[i] == '.';
        if (!std::isdigit(static_cast<char>(s[i])) && s[i] != '.')
            return false;
    }
    return count_dots <= 1 && s[len-1] != '.';
}

// class utility
void     ScalarConverter::convert( const std::string& s )
{
    // ghir wa7d ajmi
    std::cout << std::fixed << std::setprecision(1);

    // char
    if (isCharLiteral(s))
    {
        char c = s[1];
        std::cout << "char: '" << c << "'\n";
        std::cout << "int: " << static_cast<int>(c) << "\n";
        std::cout << "float: " << static_cast<float>(c) << "f\n";
        std::cout << "double: " << static_cast<double>(c) << "\n";
        return;
    }

    // invalid float
    if (s == "nanf" || s == "+inff" || s == "-inff")
    {
        std::string d = s.substr(0, s.size() - 1);
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: " << s << "\n";
        std::cout << "double: " << d << "\n";
        return;
    }

    // invalid double
    if (s == "nan" || s == "+inf" || s == "-inf")
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: " << s << "f\n";
        std::cout << "double: " << s << "\n";
        return;
    }

    // integers
    if (isInt(s))
    {
        int n = atoi(s.c_str());
        if (((n&((1<<8)-1)) == n) && std::isprint(n))
            std::cout << "char: " << static_cast<char>(n) << "\n";
        else
            std::cout << "char: <not printable>\n";
        std::cout << "int: " << n << "\n";
        std::cout << "float: " << static_cast<float>(n) << "f\n";
        std::cout << "double: " << static_cast<double>(n) << "\n";
        return;
    }

    // double
    if (isDouble(s))
    {
        double d = std::atof(s.c_str());
        int n = static_cast<int>(d);
        if (((n&((1<<8)-1)) == n) && std::isprint(n) && d-n == 0.0)
            std::cout << "char: " << static_cast<char>(d) << "\n";
        else if (d-n == 0.0)
            std::cout << "char: <not printable>\n";
        else
            std::cout << "char: impossible\n";
        std::cout << "int: " << n << "\n";
        std::cout << "float: " << static_cast<float>(d) << "f\n";
        std::cout << "double: " << d << "\n";
    }

    // float
    int len = s.length();
    if (len && isDouble(s.substr(0, len-1)) && s[len-1] == 'f')
    {
        double d = std::atof(s.c_str());
        int n = static_cast<int>(d);
        if (((n&((1<<8)-1)) == n) && std::isprint(n) && d-n == 0.0)
            std::cout << "char: " << static_cast<char>(d) << "\n";
        else if (d-n == 0.0)
            std::cout << "char: <not printable>\n";
        else
            std::cout << "char: impossible\n";
        std::cout << "int: " << n << "\n";
        std::cout << "float: " << static_cast<float>(d) << "f\n";
        std::cout << "double: " << d << "\n";
    }
}
