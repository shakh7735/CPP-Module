#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(std::string const &type);
		~Ice(void);
		Ice(Ice const &src);
		Ice &operator=(Ice const &src);

		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif