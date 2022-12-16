#ifndef __DOG_HPP__
# define __DOG_HPP__
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
    public:
        Dog(void);
        Dog(Dog const &other);
        ~Dog(void);
		
		Dog &operator=(Dog const &p);
        void makeSound(void) const;
        Brain *getBrain(void) const;
        
    private:
        Brain *brain;
};

#endif