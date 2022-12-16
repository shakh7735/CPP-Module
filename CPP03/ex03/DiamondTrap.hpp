#pragma once

#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
    public:
        DiamondTrap(void);
        DiamondTrap(const std::string name);
        DiamondTrap(const DiamondTrap &other);
        ~DiamondTrap(void);
        
        DiamondTrap    &operator=(const DiamondTrap &other);
        
        virtual void attack(const std::string& target);
        void whoAmI(void);
    
    private:
        std::string name;
};

#endif