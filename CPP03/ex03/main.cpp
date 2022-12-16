#include "DiamondTrap.hpp"


int main()
{
     {
        ClapTrap *p = new ClapTrap("Artak");
        p->attack("Jirik");
        p->takeDamage(14);
        p->beRepaired(10);
        p->print_info();
        delete p;
        ScavTrap N("Gevorg");
        N.attack("Jirik");
        N.takeDamage(14);
        N.ClapTrap::print_info();
        N.beRepaired(10);
        N.guardGate();
        N.ClapTrap::print_info();
    }
    
    {
        FragTrap N("Artak");
        N.attack("Jirik");
        N.takeDamage(14);
        N.ClapTrap::print_info();
        N.beRepaired(10);
        N.highFivesGuys();
        N.ClapTrap::print_info();
    }
    
    {
        DiamondTrap N("Artak");
        N.attack("Jirik");
        N.takeDamage(14);
        N.ClapTrap::print_info();
        N.beRepaired(10);
        N.highFivesGuys();
        N.ClapTrap::print_info();
        N.whoAmI();
    }
    
    std::cout << "End!!!" << std::endl;
	return (0);
}