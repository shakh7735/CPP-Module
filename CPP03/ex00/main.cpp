#include "ClapTrap.hpp"

int main()
{
    {
        ClapTrap *p = new ClapTrap("Artak");
        p->attack("Jirik");
        p->takeDamage(14);
        p->beRepaired(10);
        p->print_info();
        ClapTrap s = *p;
        s.print_info();
        delete p;
    }
    
    std::cout << "End!!!" << std::endl;
	return (0);
}
