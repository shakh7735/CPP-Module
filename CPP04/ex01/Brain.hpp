#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

# include <string>
# include <iostream>

class Brain {
    
    public:
        Brain(void);
        Brain(Brain const &other);
        ~Brain(void);
        
        Brain &operator=(Brain const &p);
        
        std::string ideas[100];
};

#endif