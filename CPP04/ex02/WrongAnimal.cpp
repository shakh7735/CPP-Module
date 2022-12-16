#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal") 
{
    std::cout << "WrongAnimal constructor.\n";
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "WrongAnimal constructor.";
    if (this->type != "WrongAnimal")
        std::cout << " - base-class for " << this->type;
    std::cout << "\n";
}

WrongAnimal::WrongAnimal( WrongAnimal const &other ) 
{ 
    this->operator=(other); 
    std::cout << "WrongAnimal COPY constructor.\n";
}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &p)
{
    this->type = p.type;
    std::cout << "WrongAnimal operator '='.\n";
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor.";
    if (this->type != "WrongAnimal")
        std::cout << " - base-class for " << this->type;
    std::cout << "\n";
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "fun: makeSound - not sound.\n";
}

std::string WrongAnimal::getType() const { return (this->type); }