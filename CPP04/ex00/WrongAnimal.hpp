#pragma once

# include <string>
# include <iostream>

class WrongAnimal {
    
    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &other);
        virtual ~WrongAnimal(void);
        
        WrongAnimal &operator=(WrongAnimal const &p);
        
        void makeSound(void) const;
        std::string getType() const; 
    
    protected:
        std::string type;
};
