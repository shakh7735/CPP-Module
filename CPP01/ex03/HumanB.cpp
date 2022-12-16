#include "HumanB.hpp"
#include <iostream>

HumanB:: HumanB(std::string name) :_name(name)
{
     _wp = nullptr;
}

HumanB:: HumanB(std::string name, Weapon &wp)
{
    this->_name = name;
    setWeapon(wp);
}

HumanB:: ~HumanB()
{
    std::cout << _name << " deleted." << std::endl;
}

void    HumanB::attack( void )
{
    std::cout << _name << " attacks with their ";
    if (_wp)
        std::cout << _wp->getType() << std::endl;
    else
        std::cout << "not weapon !!!" << std::endl;
}

void    HumanB::setWeapon( Weapon &wp)
{
    _wp = &wp;
}