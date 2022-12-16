#include <iostream>
#include "Bureaucrat.hpp"

int main() 
{
    Bureaucrat      boss("Gago", 150);
    
    try 
    {
        Bureaucrat emp("Jirik", 1);
        std::cout << emp;
    }
    catch (std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    try 
    {
      boss.decrementGrade();
    }
    catch (std::exception& e) 
    {
      std::cout << "Exception: " << e.what() << ": " << boss;
    }
    return (0);
}