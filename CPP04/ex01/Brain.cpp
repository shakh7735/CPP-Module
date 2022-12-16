#include "Brain.hpp"

Brain::Brain( void )
{
    for(int i = 0; i < 100 ; i++)
        ideas[i] = "ideas - " + std::to_string(i);
	std::cout << "Constructor for Brain" << std::endl;
}

Brain::Brain(Brain const &other) 
{ 
    std::cout << "Brain COPY constructor.\n";
    this->operator=(other); 
}

Brain &Brain::operator=(Brain const &p)
{
    std::cout << "Brain operator '='.\n";
    for(int i = 0; i < 100 ; i++)
        this->ideas[i] = p.ideas[i];
	return *this;
}

Brain::~Brain( void )
{
	std::cout << "Destructor for Brain" << std::endl;
	return;
}