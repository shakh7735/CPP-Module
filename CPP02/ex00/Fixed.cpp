#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(other);
}

Fixed &Fixed::operator=(Fixed const &fix)
{
    std::cout << "Copy assignment operator called" << std::endl;
	_fixedPoint = fix.getRawBits();
	return *this;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = raw;
}