#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    this->brain = new Brain();
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
    this->brain = new Brain();
    for(int i = 0; i < 100 ; i++)
        this->brain->ideas[i] = p.brain->ideas[i];
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