
#include "PmergeMe.hpp"

void    parseVector(int ac, char **av, vec& list)
{
    long    parsed;
    str rest;
    
    for (int i = 1; i < ac; i++)
    {
        std::stringstream ss(av[i]);
        ss >> parsed >> rest;

        if (rest != "")
            throw std::logic_error("Invalid Argument !");
        if (parsed < 0)
            throw std::logic_error("Negative Argument !");
        list.push_back(parsed);
    }
}

void    printVec(vec& list)
{
    std::cout << "================" << std::endl;
    for (unsigned long i = 0; i < list.size(); i++)
    {
        std::cout << "afteA    - > " << list[i] << std::endl;
    }
    std::cout << "================" << std::endl;
}


static void sortPairs(vec& list)
{
    unsigned long len = list.size();

    for (unsigned long i = 0; i < (len-(len&1)); i+=2)
    {
        if (list[i] < list[i+1])
            continue ;
        unsigned long tmp = list[i];
        list[i] = list[i+1];
        list[i+1] = tmp;
    }
}

static vec* getMainChain(vec& list)
{
    unsigned long   len = list.size();
    vec *mainChain = new vec(len >> 1);
    
    for (unsigned long i = 0; i < len >> 1; i++)
        (*mainChain)[i] = list[(i << 1) | 1];
    return mainChain;
}

static vec* getPend(vec& list)
{
    unsigned long   len = list.size();
    vec *mainChain = new vec(len >> 1);
    
    for (unsigned long i = 0; i < len >> 1; i++)
        (*mainChain)[i] = list[i << 1];
    return mainChain;
}

static int *jacobsthalSequence(unsigned long k)
{
    int *sequence = new int[2*k]();
   
    if (k == 0)
        return sequence;
    sequence[0] = 1;
    sequence[1] = 1;
    for (unsigned long i = 2; i < k; i++)
        sequence[i] = sequence[i-1] + 2*sequence[i-2];
    for (unsigned long i = 0; i < k; i++)
        sequence[k+i] = k-i;
        
    return sequence;
}

static void insert(vec& pend, vec& mainChain)
{
    unsigned long k = pend.size();
    int *J = jacobsthalSequence(k);

    for (unsigned int i = 0; i < 2*k; i++)
    {
        unsigned long Ji = J[i] - 1;
        // insert to main chain
        if (Ji >= k || pend[Ji] == -1)
            continue ;
        mainChain.insert(mainChain.begin(), pend[Ji]);
        pend[Ji] = -1;
    }
    delete[] J;
    J = NULL;
}

void        Ford_Jhonson(vec& list)
{
    unsigned long   len = list.size();
    long            struggler = list[len-1];

    if (len == 1)
        return ;
    sortPairs(list);
    vec *mainChain = getMainChain(list);
    vec *pend = getPend(list);
    Ford_Jhonson(*mainChain);
    // insert
    insert(*pend, *mainChain);
    if (len&1)
        mainChain->insert(mainChain->begin(), struggler);
    printVec(*pend);
    printVec(*mainChain);
    list = *mainChain;

    delete mainChain;
    delete pend;
    mainChain = NULL;
    pend = NULL;
}


