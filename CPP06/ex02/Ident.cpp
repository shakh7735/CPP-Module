#include "Ident.hpp"

Ident::~Ident(void) {};

Ident::Ident (void) {};

Ident::Ident(const Ident &other)
{
    this->operator=(other);
}

Ident &Ident::operator=(const Ident &other)
{
    (void)other;
	return (*this);
}

Base * Ident::generate(void)
{
    int i = rand() % 3;
    Base *abc;
    switch (i)
    {
        case 0 :
            abc = new A();
            std::cout << "A" << std::endl;
            break;
        case 1 :
            abc = new B();
            std::cout << "B" << std::endl;
            break;
        default :
            abc = new C();
            std::cout << "C" << std::endl;
    }
    return (abc);
}

void Ident::identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "unknown" << std::endl;
}

void Ident::identify(Base& p)
{
    Base a;

    try {
        a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return ;
    } catch(...) {}

    try {
        a = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return ;
    } catch(...) {}
    
    try {
        a = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return ;
    } catch(...) {}
    std::cout << "unknown" << std::endl;
    return ;
}