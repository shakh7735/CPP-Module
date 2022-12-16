#pragma once

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
