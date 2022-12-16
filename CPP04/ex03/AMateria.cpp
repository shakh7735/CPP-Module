#include "AMateria.hpp"
#include <string>
#include <iostream>

AMateria::AMateria() : m_type("AMateria") {}

AMateria::AMateria(std::string const & type) : m_type(type) {}

AMateria::AMateria(const AMateria& other){
	this->operator=(other);
}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria& other) 
{
	if (this != &other) 
	    this->m_type = other.m_type;
	return *this;
}

std::string const&	AMateria::getType() const 
{
	return this->m_type;
}

void					AMateria::use(ICharacter& target) {
	std::cout << "amateria function instead of cure/ice" << std::endl;
	(void)target;
}