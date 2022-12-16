#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &other) 
{
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(other);
}

Fixed::Fixed( const int point)
{
    std::cout << "Int constructor called" << std::endl;
    _fixedPoint = point << fraction;
}

Fixed::Fixed( const float  point) 
{
    std::cout << "Float constructor called" << std::endl;
    _fixedPoint = (roundf(point * pow(2, fraction)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=( Fixed const &fix)
{
    std::cout << "Copy assignment operator called" << std::endl;
	_fixedPoint = fix.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
	return _fixedPoint;
}

void Fixed::setRawBits(const int  raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
	_fixedPoint = raw;
}

float   Fixed::toFloat( void ) const
{
    
    return (_fixedPoint / pow(2, fraction));
}

int     Fixed::toInt( void ) const
{
    return (_fixedPoint / pow(2, fraction));
}

std::ostream &operator<<( std::ostream &put, const Fixed  &fix)
{
    put << fix.toFloat();
	return put;
}