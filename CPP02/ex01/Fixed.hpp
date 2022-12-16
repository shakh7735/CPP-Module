#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>

class Fixed
{
    
   public:
	Fixed();
	Fixed( Fixed const &other ) ;
	Fixed(const int point);
	Fixed(const float point);
    ~Fixed();
    
	Fixed &operator=( Fixed const &fix);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;

private:
	static int const fraction = 8;
	int _fixedPoint;   
};

	std::ostream &operator<<( std::ostream &put, const Fixed &fix);
	
#endif