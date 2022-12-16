#ifndef __CAT_HPP__
# define __CAT_HPP__
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat const &other);
        ~Cat(void);
		
		Cat &operator=(Cat const &p);
        void makeSound(void) const;
        Brain *getBrain(void) const;
        
    private:
        Brain *brain;
};

#endif