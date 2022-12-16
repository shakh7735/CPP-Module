#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    this->brain = new Brain();
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
    this->brain = new Brain();
    for(int i = 0; i < 100 ; i++)
        this->brain->ideas[i] = p.brain->ideas[i];
    std::cout << "Dog operator '='.\n";
	return *this;
}

Dog::~Dog(void)
{
    delete brain;
    std::cout << "Destructor Dog.\n";
}

void Dog::makeSound(void) const
{
    std::cout << "GAV-GAV\n";
}

Brain *Dog::getBrain(void) const
{
    return (this->brain);
}