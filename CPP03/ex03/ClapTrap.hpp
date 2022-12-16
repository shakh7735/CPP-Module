#pragma once
#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <string>
#include <iostream>

class ClapTrap
{
    
    public:
        ClapTrap(void);
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap &other);
        virtual ~ClapTrap();
        
        ClapTrap    &operator=(const ClapTrap &other);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void print_info(void);

    protected:
        std::string name;
        int hit;
        int energy;
        int damage;
        
};

#endif