#ifndef __AANIMAL_HPP__
# define __AANIMAL_HPP__

# include <string>
# include <iostream>
# include "Brain.hpp"

class AAnimal {
    
    public:
        virtual ~AAnimal( void );
        
        AAnimal &operator=(AAnimal const &p);

        virtual void makeSound(void) const = 0;
        std::string getType() const;
        virtual Brain *getBrain(void) const = 0;
    
    protected:
        std::string type;
};

#endif