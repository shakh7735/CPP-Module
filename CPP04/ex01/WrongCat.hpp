#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__
# include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(WrongCat const &other);
        ~WrongCat(void);
		
		WrongCat &operator=(WrongCat const &p);
        void makeSound(void) const;
};

#endif