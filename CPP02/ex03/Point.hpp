#pragma once

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <string>
# include <iostream>
# include <cmath>

class Point
{
    private:
        Fixed x;
        Fixed y;
    
    public:
        Point ();
        Point (Fixed const x, Fixed const y);
        Point( Point const &other );
        ~Point();
        
        Point &operator=( Point const &p);
        
        Fixed   getX(void) const;
        Fixed   getY(void) const;
        void    setX(Fixed x);
        void    setY(Fixed y);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif