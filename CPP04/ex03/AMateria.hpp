#ifndef AMATERIA_HPP_
# define AMATERIA_HPP_

#include <iostream>
#include "ICharacter.hpp"
#include <string>

class ICharacter;

class AMateria
{
    protected:
        std::string	m_type;
        
    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria(const AMateria& other);
        virtual	~AMateria();

        AMateria & operator=(const AMateria& other);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif