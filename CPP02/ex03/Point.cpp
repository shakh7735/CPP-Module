#include "Point.hpp"

// constructors
Point::Point (void) : x(0), y(0) {}

Point::Point (Fixed const x, Fixed const y) : x(x), y(y) {}

Point::Point( Point const &other ) { this->operator=(other); }
// destructor
Point::~Point() {}

Point &Point::operator=( Point const &p)
{
    this->x = p.getX();
    this->y = p.getY();
	return *this;
}

Fixed   Point::getX(void) const { return (x); }
Fixed   Point::getY(void) const { return (y); }
void    Point::setX(Fixed x) { this->x = x; }
void    Point::setY(Fixed y) { this->y = y; }



bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed x[4] = { point.getX(), a.getX(), b.getX(), c.getX() };
    Fixed y[4] = { point.getY(), a.getY(), b.getY(), c.getY() };
    
    Fixed at = ((x[1] - x[0]) * (y[2] - y[1]) - (x[2] - x[1]) * (y[1] - y[0]));
    Fixed bt = ((x[2] - x[0]) * (y[3] - y[2]) - (x[3] - x[2]) * (y[2] - y[0]));
    Fixed ct = ((x[3] - x[0]) * (y[1] - y[3]) - (x[1] - x[3]) * (y[3] - y[0]));
    
    return ((at > 0 && bt > 0 && ct > 0) || (at < 0 && bt < 0 && ct < 0));
}