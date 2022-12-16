#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>

class Fixed;

class Fixed
{
    
   public:
	Fixed();
	Fixed( Fixed const &other ) ;
	Fixed(const int point);
	Fixed(const float point);
    ~Fixed();
    
	Fixed &operator=( Fixed const &fix);
	Fixed operator+( Fixed const &fix) const;
    Fixed operator-( Fixed const &fix) const;
    Fixed operator*( Fixed const &fix) const;
    Fixed operator/( Fixed const &fix) const;
    Fixed &operator++(void);            //pre increment
    Fixed operator++(int);              //post increment
    Fixed &operator--(void);            //pre decrement
    Fixed operator--(int);              //post decrement

    bool operator> ( Fixed const &fix) const;    
    bool operator< ( Fixed const &fix) const;    
    bool operator>=( Fixed const &fix) const;    
    bool operator<=( Fixed const &fix) const;    
    bool operator==( Fixed const &fix) const;    
    bool operator!=( Fixed const &fix) const;

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
	
	static Fixed &min(Fixed&, Fixed&);
    const static Fixed &min(const Fixed &f1, const Fixed &f2);
    static Fixed &max(Fixed &f1, Fixed &f2);
    const static Fixed &max(const Fixed &f1, const Fixed &f2);

private:
	static int const fraction = 8;
	int _fixedPoint;   
};

    Fixed &min(Fixed &f1, Fixed &f2);
    Fixed &max(Fixed &f1, Fixed &f2);
	std::ostream &operator<<( std::ostream &put, const Fixed &fix);
	
#endif