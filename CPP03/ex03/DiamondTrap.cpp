#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap(), name("Unset") 
{
    this->hit = FragTrap::hit;
    this->energy = ScavTrap::energy;
    this->damage = FragTrap::damage;
    ClapTrap::name = this->name + "_clap_name";
    std::cout << "Default constructor DiamondTrap: " << this->name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name), name(name)
{
    this->hit = FragTrap::hit;
    this->energy = ScavTrap::energy;
    this->damage = FragTrap::damage;
    ClapTrap::name = this->name + "_clap_name";
    std::cout << "Called constructor DiamondTrap: " << this->name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    this->operator=(other);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "~Deleted DiamondTrap: " << this->name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) 
{
    
    this->name = other.name;
    this->hit = other.hit;
    this->energy = other.energy;
    this->damage = other.damage;
    std::cout << "DiamondTrap assigment operator '=':" << std::endl;
    return (*this);
}


void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name: " << this->name << " & his ClapTrap name: " << ClapTrap::name << std::endl;
}