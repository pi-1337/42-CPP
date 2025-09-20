
#include "Zombie.h"

int main()
{
    

    Zombie *zom1 = newZombie("zom1");
    randomChump("zom2");

    zom1->announce();
    delete zom1;

    return 0;
}


