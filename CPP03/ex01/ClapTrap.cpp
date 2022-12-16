#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :  name("Unset"), hit(10), energy(10), damage(0) 
{
    std::cout << "Default constructor ClapTrap: " << std::endl;
}

ClapTrap::ClapTrap( std::string name) : name(name), hit(10), energy(10), damage(0)
{
    std::cout << "Called constructor ClapTrap: " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    this->operator=(other);
}

ClapTrap::~ClapTrap()
{
    std::cout << "~Deleted ClapTrap: " << this->name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) 
{
    this->name = other.name;
    this->hit = other.hit;
    this->energy = other.energy;
    this->damage = other.damage;
    std::cout << "ClapTrap assigment operator '=':" << std::endl;
    return (*this);
}


void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->name;
    if (this->energy <= 0)
    {
        std::cout << " cannot attack because there are no energy points" << std::endl;
        return ;
    }
    std::cout  << " attacks -> " << target;
    std::cout << ", causing " << this->damage << " points of damage!" << std::endl;
    this->energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hit -= amount;
    std::cout << this->name;
    std::cout << " takeDamage: points Hit=" << this->hit << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << this->name;
    if (this->energy > 0)
    {
        this->energy--;
        this->hit += amount;
        std::cout << " by Repaired: point ENERGY=" << this->energy << std::endl;
    }
    else
       std::cout << " not Repaired: is not point ENERGY:" << std::endl;
}

void ClapTrap::print_info(void)
{
    std::cout << this->name << " : ENERGY=" << this->energy << " HIT_POINT=" << this->hit 
    << " DAMAGE=" << this->damage << "%" << std::endl;
}
