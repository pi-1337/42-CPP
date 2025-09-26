
#include "Brain.hpp"



// orthodox
Brain::Brain()
{
    std::cout << "Brain Default Constructor Called" << std::endl;
}
Brain::Brain(Brain &other)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "Brain Copy Constructor Called" << std::endl;
}
Brain& Brain::operator=(Brain &other)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return *this;
    std::cout << "Brain Copy Operator Called" << std::endl;
}
Brain::~Brain()
{
    std::cout << "Brain Destructor Called" << std::endl;
}

