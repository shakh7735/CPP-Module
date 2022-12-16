#include "FileCopyAndRep.hpp"
#include <iostream>

int main(int argc, char **argv)
{
   if (argc < 4) {
      return (1);
   }
   FileCopyAndRep f(std::string(argv[1]), std::string(argv[2]), std::string(argv[3]), "replace");
   f.copyAndRep();
   
   return (0);
}
