#pragma once

#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap &other);
        ~ScavTrap(void);
        
        ScavTrap    &operator=(const ScavTrap &other);
        
        void attack(const std::string& target);
        // void takeDamage(unsigned int amount);
        // void beRepaired(unsigned int amount);
        void print_info(void);
        void guardGate(void);
};

#endif