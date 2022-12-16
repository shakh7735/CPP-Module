#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(void){};
        ~MutantStack(void){};
        MutantStack(MutantStack const &src);
       
        MutantStack &operator=(MutantStack const &src)
        {
            if (this != &src)
                this->c = src->c;
            return *this;
        };

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() {return this->c.begin();};
        iterator end() {return this->c.end();};

};

#endif