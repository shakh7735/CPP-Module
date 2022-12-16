#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(std::string const & type)
{
	std::cout << "Ice constructor called" << std::endl;
    (void)type;
}

Ice::Ice(Ice const &src): AMateria(src)
{
	std::cout << "Ice Copy constructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &src)
{
	std::cout << "Ice Assignation operator called" << std::endl;
    (void)src;
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;	
}