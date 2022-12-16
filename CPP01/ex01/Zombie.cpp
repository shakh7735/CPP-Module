#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name) : _name ( name )
{
}

Zombie::~Zombie()
{
    std::cout << _name << " :~ destroyed."<< std::endl;
}

void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    _name = name;
}