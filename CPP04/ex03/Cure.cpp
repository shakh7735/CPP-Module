#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(std::string const & type) : AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
    (void)type;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
	std::cout << "Cure Copy constructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &src)
{
	std::cout << "Cure Assignation operator called" << std::endl;
    (void)src;
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}