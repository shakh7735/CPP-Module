#pragma once

# include <string>
# include <iostream>

class Animal {
    
    public:
        Animal(void);
        Animal(std::string type);
        Animal(Animal const &other);
        virtual ~Animal(void);
        
        Animal &operator=(Animal const &p);
        
        virtual void makeSound(void) const;
        std::string getType() const; 
    
    protected:
        std::string type;
};
