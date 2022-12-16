#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :  name("Unset"), hit(10), energy(10), damage(0) 
{
    std::cout << "Default constructor ClapTrap: " << std::endl;
}

ClapTrap::ClapTrap( const std::string name ) : name(name), hit(10), energy(10), damage(0)
{
    std::cout << "Called constructor ClapTrap: " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
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
    return (*this);
}


void ClapTrap::attack(const std::string& target)
{
    if (this->energy <= 0)
    {
        std::cout << "ClapTrap " << this->name << " cannot attack because there are no energy points" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks -> " << target;
    std::cout << ", causing " << this->damage << " points of damage!" << std::endl;
    this->energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hit -= amount;
    std::cout << "ClapTrap " << this->name << " takeDamage: points Hit=" << this->hit << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy > 0)
    {
        this->energy--;
        this->hit += amount;
        std::cout << "ClapTrap " << this->name << " by Repaired: point ENERGY=" << this->energy << std::endl;
    }
    else
       std::cout << "ClapTrap " << this->name << " not Repaired: is not point ENERGY:" << std::endl;
}

void ClapTrap::print_info(void)
{
    std::cout << this->name << " : ENERGY=" << this->energy << " HIT_POINT=" << this->hit 
    << " DAMAGE=" << this->damage << "%" << std::endl;
}
