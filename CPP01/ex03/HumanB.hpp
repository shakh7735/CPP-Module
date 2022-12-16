#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        HumanB(std::string name, Weapon &wp); 
        ~HumanB();
        void    attack( void );
        void    setWeapon( Weapon &wp);
        void    setName(std::string name);
        
    private:
        Weapon *_wp;
        std::string _name;
    
};