
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main()
// {
//     const Animal *meta = new Animal();
//     const Animal *j = (Animal *)(new Dog());
//     const Animal *i = (Animal *)new Cat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); // will output the cat sound!
//     j->makeSound();
//     meta->makeSound();


//     std::cout << " --------- " << std::endl;

//     delete meta;
//     delete i;
//     delete j;

//     return 0;
// }


int main()
{
    const WrongAnimal *meta = new WrongAnimal();
    const WrongAnimal *i = (WrongAnimal *)new WrongCat();
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    meta->makeSound();


    std::cout << " --------- " << std::endl;

    delete meta;
    delete i;

    return 0;
}