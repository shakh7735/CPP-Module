#pragma once

#ifndef _FIXED_HPP_
# define _FIXED_HPP_

# include <string>
# include <iostream>

class Fixed
{
    
   public:
	Fixed();
	Fixed(Fixed const &other);

	Fixed &operator=(Fixed const &fix);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	static int const fraction = 8;
	int _fixedPoint;   
};

#endif