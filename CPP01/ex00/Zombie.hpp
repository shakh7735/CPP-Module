#pragma once
#include <string>

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

// ************************************************************************** //
//                               Zombie Class                                 //
// ************************************************************************** //

class Zombie
{
    
    public:
        Zombie(std::string);
         ~Zombie();
        void    announce( void );
        void    set_name(std::string name);
        
    private:
        std::string _name;    
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif /* __ZOMBIE_H__ */