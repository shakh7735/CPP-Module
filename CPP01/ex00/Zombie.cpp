#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    Zombie::set_name(name);
    Zombie::announce();
}

Zombie::~Zombie()
{
    std::cout << Zombie::_name << "~ destroyed."<< std::endl;
}

void    Zombie::announce(void)
{
    std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    Zombie::_name = name;
}