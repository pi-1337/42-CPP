
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



int main()
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();


    std::cout << " --------- " << std::endl;


    Dog h;
    Dog g;

    g = h;

    std::cout << " --------- " << std::endl;


    delete j;
    delete i;
    return 0;
}