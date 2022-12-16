#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() 
{
    this->hit = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << "Default constructor ScavTrap: " << this->name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
    this->hit = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << "Called constructor ScavTrap: " << this->name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    this->operator=(other);
}

ScavTrap::~ScavTrap()
{
    std::cout << "~Deleted ScavTrap: " << this->name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) 
{
    
    this->name = other.name;
    this->hit = other.hit;
    this->energy = other.energy;
    this->damage = other.damage;
    std::cout << "ScavTrap assigment operator '=':" << std::endl;
    return (*this);
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap: " << this->name;
    std::cout << " is now in Gate keeper mode!!!" << std::endl;
}

void ScavTrap::print_info(void)
{
    std::cout << this->name << " : ENERGY=" << this->energy << " HIT_POINT=" << this->hit
    << " DAMAGE=" <<  this->damage << "%" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << this->name;
    if (this->energy <= 0)
    {
        std::cout << " cannot attack because there are no energy points" << std::endl;
        return ;
    }
    std::cout  << " attacks -> " << target;
    std::cout << ", causing " <<  this->damage << " points of damage!" << std::endl;
    this->energy -= 1;
}

// void ScavTrap::takeDamage(unsigned int amount)
// {
//     this->hit -= amount;
//     std::cout << "ScavTrap " << this->name;
//     std::cout << " takeDamage: points Hit=" << this->hit << std::endl;
// }

// void ScavTrap::beRepaired(unsigned int amount)
// {
//     int en = this->energy;
//     std::cout << "ScavTrap " << this->name;
//     if (en > 0)
//     {
//         this->energy = (en - 1);
//         this->hit += amount;
//         std::cout << " by Repaired: point ENERGY=" << this->energy << std::endl;
//     }
//     else
//       std::cout << " not Repaired: is not point ENERGY:" << std::endl;
// }
