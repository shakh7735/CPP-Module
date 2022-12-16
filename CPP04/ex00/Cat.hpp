#pragma once

# include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat const &other);
        ~Cat(void);
		
		Cat &operator=(Cat const &p);
        void makeSound(void) const;
};
