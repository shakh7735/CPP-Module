#include "Cat.hpp"

Cat::Cat(void)
{
    this->brain = new Brain();
    std::cout << "Cat constructor.\n";
}

Cat::Cat(Cat const &other)
{ 
    std::cout << "Cat COPY constructor.\n";
    this->operator=(other); 
    
}

Cat &Cat::operator=(Cat const &p)
{
    this->type = p.type;
    this->brain = new Brain();
    *(this->brain) = *(p.getBrain());
    std::cout << "Cat operator '='.\n";
	return *this;
}

Cat::~Cat(void)
{
    delete brain;
    std::cout << "Destructor Cat.\n";
}

void Cat::makeSound(void) const
{
    std::cout << "MYAU-MYAU\n";
}

Brain *Cat::getBrain(void) const
{
    return (this->brain);
}