#include "HumanA.hpp"
#include <iostream>

HumanA:: HumanA(std::string name, Weapon &wp) : wp(wp)
{
    this->name = name;
}

HumanA:: ~HumanA()
{
    std::cout << name << " deleted." << std::endl;
}

void HumanA::attack( void )
{
    std::cout << name << " attacks with their " << wp.getType() << std::endl;
}