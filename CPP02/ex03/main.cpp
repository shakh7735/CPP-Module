#include "Point.hpp"

int main( void ) 
{
    Point const a(1,1);
    Point const b(2, 3);
    Point const c(3 ,1);
    Point const p(3, 2);
    
   
    std::cout << bsp (a, b, c, p) << std::endl;
    
    return 0;
}