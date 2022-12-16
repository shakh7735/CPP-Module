#include "FileCopyAndRep.hpp"
#include <iostream>
#include <fstream>

FileCopyAndRep::FileCopyAndRep(std::string filename, std::string s1, std::string s2, std::string ras):
    _filename(filename), _s1(s1), _s2(s2), _ras(ras) { ch = new char[100]; }

FileCopyAndRep::~FileCopyAndRep(){ delete ch; }

void    FileCopyAndRep::copyAndRep()
{
    
    std::string line;
    unsigned pos;
    // char *ch = new char[100];
    
    std::ifstream in(_filename);
    if (!in.is_open())
    {
        std::cerr << "file not found!" << std::endl;
        // delete ch;
        return;
    }
    // std::ofstream out(_filename.substr(0,_filename.rfind(".") + 1).append(_ras));
    std::ofstream out(_filename.append("." + _ras));
    if (!out.is_open())
    {
        std::cerr << "failed to create file!" << std::endl;
        in.close();
        // delete ch;
        return;
    }
    while (!in.eof())
    {
        in.read(ch, 100);
        line += ch;
    }
    while(line.find(_s1) != (unsigned long)-1)
    {
        pos = line.find(_s1);
        line.erase(pos, _s1.size());
        line.insert(pos, _s2);
    }
    // std::cout << line << std::endl;
    out << line;
    // delete ch;
    in.close();
    out.close();
}
