
#include <iostream>

int main(int ac, char *av[])
{

    if (ac == 1)
        std::std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; j < av[i][j]; j++)
        {
            char c = toupper(av[i][j]);
            std::std::cout << c;
        }
    }
    std::std::cout << std::std::endl;
    return 0;
}



