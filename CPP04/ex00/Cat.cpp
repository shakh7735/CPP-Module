#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat constructor.\n";
}

Cat::Cat(Cat const &other) : Animal("Cat")
{ 
    std::cout << "Cat COPY constructor.\n";
    this->operator=(other); 
    
}

Cat &Cat::operator=(Cat const &p)
{
    this->type = p.type;
    std::cout << "Cat operator '='.\n";
	return *this;
}

Cat::~Cat(void)
{
    std::cout << "Destructor Cat.\n";
}

void Cat::makeSound(void) const
{
    std::cout << "MYAU-MYAU\n";
}
