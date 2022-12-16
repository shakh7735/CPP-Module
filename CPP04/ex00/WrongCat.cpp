#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor.\n";
}

WrongCat::WrongCat(WrongCat const &other) : WrongAnimal("WrongCat")
{ 
    std::cout << "WrongCat COPY constructor.\n";
    this->operator=(other);
}

WrongCat &WrongCat::operator=(WrongCat const &p)
{
    this->type = p.type;
    std::cout << "WrongCat operator '='.\n";
	return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout << "Destructor WrongCat.\n";
}

void WrongCat::makeSound(void) const
{
    std::cout << "MYAU-MYAU\n";
}
