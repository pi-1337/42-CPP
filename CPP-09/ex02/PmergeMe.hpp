
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <sstream>
#include <iostream>
#include <exception>

typedef std::string str;
typedef std::vector<long> vec;

// parsing
void        parseVector(int ac, char **av, vec& list);

// Algo
void        Ford_Jhonson(vec& list);

#endif
