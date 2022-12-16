#include <iostream>
#include "Ident.hpp"

int main()
{
    Base *rnd_class;
    Ident ident;
    srand(time(0));
    for (int i = 0; i < 6; i++)
    {
        std::cout << "------test" << i << "------" << std::endl;
        std::cout << "Generate class : ";
        rnd_class = ident.generate();
        std::cout << "Identify point : ";
        ident.identify(rnd_class);
        std::cout << "Identify refer : ";
        ident.identify(*rnd_class);
        delete rnd_class;
    }
    return 0;
}