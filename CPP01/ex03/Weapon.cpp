#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) :
	_type(type)
{
}

Weapon::~Weapon(void)
{
    std::cout << _type << " deleted." << std::endl;
}

std::string Weapon::getType(void) const
{
	return _type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}