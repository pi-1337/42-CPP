
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



int main()
{
    
    

    Animal* ptr = new Dog();

    ptr->makeSound();

    delete ptr;

}