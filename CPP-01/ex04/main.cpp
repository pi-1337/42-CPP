
#include <string>
#include <iostream>
#include <fstream>

std::string ft_replace(std::string content, std::string s1, std::string s2)
{
    size_t      pos;

    pos = content.find(s1, 0);
    while (pos != std::string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos = content.find(s1, 0);
    }
    return content;
}

int main(int ac, char *av[])
{
    if (ac != 4)
        return 1;    

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (filename.empty() || s1.empty())
        return 1;
    
    // create i/o files
    std::ifstream infile(filename.c_str());
    std::ofstream outfile((filename + ".replace").c_str());

    std::string content;
    if (getline(infile, content, '\0'))
        outfile << ft_replace(content, s1, s2);
    else
        std::cerr << "failed reading file" << std::endl;
    
    infile.close();
    outfile.close();

    return 0;
}


