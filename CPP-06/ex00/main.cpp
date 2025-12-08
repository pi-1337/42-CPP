
#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cerr << "Usage: \n\t./convert <number_2_parse>\n\nExamples:"
                  << "\n\t./convert 0"
                  << "\n\t./convert nan"
                  << "\n\t./convert 42.0f"
                  << "\n\n5afi_h@dxi_l1kyn"
                  << std::endl;
        return EXIT_FAILURE;
    }
    ScalarConverter::convert(av[1]);
    return EXIT_SUCCESS;
}
