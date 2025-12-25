
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <sstream>
#include <iostream>
#include <exception>

typedef std::string str;
typedef std::vector<long> vec;
typedef std::vector<long>::iterator iterator;

void        parseVector(int ac, char **av, vec& list);
iterator    binarySearch(vec& list, long elm);

#endif
