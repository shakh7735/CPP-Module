#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Dog constructor.\n";
}

Dog::Dog(Dog const &other) : Animal("Dog")
{ 
    std::cout << "Dog COPY constructor.\n";
    this->operator=(other);
}

Dog &Dog::operator=(Dog const &p)
{
    this->type = p.type;
    std::cout << "Dog operator '='.\n";
	return *this;
}

Dog::~Dog(void)
{
    std::cout << "Destructor Dog.\n";
}

void Dog::makeSound(void) const
{
    std::cout << "GAV-GAV\n";
}
