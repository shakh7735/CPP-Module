#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
    std::cout << "--Animal constructor.\n";
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal constructor.";
    if (this->type != "Animal")
        std::cout << " - base-class for " << this->type;
    std::cout << "\n";
}

Animal::Animal(Animal const &other) 
{ 
    std::cout << "Animal COPY constructor.\n";
    this->operator=(other); 
}

Animal &Animal::operator=( Animal const &p)
{
    this->type = p.type;
    std::cout << "Animal operator '='.\n";
	return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor.";
    if (this->type != "Animal")
        std::cout << " - base-class for " << this->type;
    std::cout << "\n";
}

void Animal::makeSound(void) const
{
    std::cout << "fun: makeSound - not sound.\n";
}

std::string Animal::getType() const { return (this->type); }
