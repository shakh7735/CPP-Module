#ifndef IDENT_HPP
# define IDENT_HPP

#include <iostream>
#include <ctime>
#include <random>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class Ident {
    
    public:
        ~Ident(void);
        Ident ();
        Ident(const Ident &other);
        Ident &operator=(const Ident &other);
        
        Base * generate(void);
        void identify(Base* p);
        void identify(Base& p);
};

#endif