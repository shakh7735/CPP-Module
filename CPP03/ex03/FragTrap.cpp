#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() 
{
    this->hit = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout << "Default constructor FragTrap: " << this->name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
    this->hit = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << "Called constructor FragTrap: " << this->name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    this->operator=(other);
}

FragTrap::~FragTrap()
{
    std::cout << "~Deleted FragTrap: " << this->name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) 
{
    
    this->name = other.name;
    this->hit = other.hit;
    this->energy = other.energy;
    this->damage = other.damage;
    std::cout << "FragTrap assigment operator '=':" << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap: " << this->name;
    std::cout << " high fives request!!!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap " << this->name;
    if (this->energy <= 0)
    {
        std::cout << " cannot attack because there are no energy points" << std::endl;
        return ;
    }
    std::cout  << " attacks -> " << target;
    std::cout << ", causing " << this->damage << " points of damage!" << std::endl;
    this->energy -= 1;
}
