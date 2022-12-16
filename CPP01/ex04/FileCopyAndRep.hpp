#pragma once
#include <string>


class FileCopyAndRep
{
    
    public:
        FileCopyAndRep(std::string filename, std::string s1, std::string s2, std::string ras);
         ~FileCopyAndRep();
        void    copyAndRep();
        
    private:
        std::string _filename;
        std::string _s1;
        std::string _s2;
        std::string _ras;
        char   *ch;
};
