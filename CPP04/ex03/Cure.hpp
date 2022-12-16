#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(std::string const & type);
		~Cure(void);
		Cure(Cure const &src);
		Cure &operator=(Cure const &src);

		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif