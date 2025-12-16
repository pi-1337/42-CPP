
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
private:

public:
    // orthodox
    MutantStack();
    MutantStack(const MutantStack& other);
    MutantStack& operator=(const MutantStack& other);
    ~MutantStack();


    // iterator stuff
    typedef typename std::stack<T>::container_type Container;
    typedef typename Container::iterator iterator;
    
    iterator begin( void );
    iterator end( void );

};




// orthodox
template <typename T>
MutantStack<T>::MutantStack()
    : std::stack<T>()
{
}
template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other)
    : std::stack<T>(other)
{
}
template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other)
{
   *this = std::stack<T>::operator=(other);
   return *this;
}
template <typename T>
MutantStack<T>::~MutantStack()
{
}


// iterator stuff
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin( void )
{
    return this->c.begin();
}
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end( void )
{
    return this->c.end();
}

#endif
