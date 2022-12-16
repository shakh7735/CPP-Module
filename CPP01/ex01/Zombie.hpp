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
        Zombie(void);
        Zombie(std::string);
         ~Zombie();
        void    announce( void );
        void    set_name(std::string name);
        
    private:
        std::string _name;    
};

Zombie* zombieHorde( int N, std::string name );

#endif /* __ZOMBIE_H__ */
