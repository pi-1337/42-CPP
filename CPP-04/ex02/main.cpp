
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



int main()
{
    
    

    // Animal obj;
    
    Animal* ptr = new Dog();
    Dog* dogptr = new Dog();

    ptr->makeSound();


    delete ptr;
    delete dogptr;

}