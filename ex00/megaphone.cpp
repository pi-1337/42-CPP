
#include <iostream>

int main(int ac, char *av[])
{

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; j < av[i][j]; j++)
            std::cout << toupper(av[i][j]);
    }
    std::cout << std::endl;
    return 0;
}



