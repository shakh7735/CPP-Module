#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon &wp); 
        ~HumanA();
        void    attack( void );
        
    private:
        Weapon  &wp;
        std::string name; 
};