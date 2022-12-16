#include <iostream>
# include "Converter.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Converter test(av[1]);
    }
    else
        std::cout << "Wrong argument" << std::endl;
    // std::string s[17] = {"c", "A", "0", "-42", "42",
    //                     "0.0f", "-4.2f", "4.2f", "-inff", "+inff", "nanf", \
    //                     "0.0", "-42.2", "42.2", "-inf", "+inf", "nan"};
    // for (int i = 0; i < 17 ; i++)
    // {
    //     std::cout << "----test N " << i << "----" << std::endl << std::endl; 
    //     Converter test(s[i]);
    //     std::cout << std::endl;
    // }
    return 0;
}