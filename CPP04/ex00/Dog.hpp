#pragma once

# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(Dog const &other);
        ~Dog(void);
		
		Dog &operator=(Dog const &p);
        void makeSound(void) const;
};
