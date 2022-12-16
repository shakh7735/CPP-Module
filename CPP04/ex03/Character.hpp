#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string name);
		~Character(void);
		Character(Character const &src);
		Character &operator=(Character const &src);

		std::string const &getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
	private:
		std::string name;
		AMateria *inventory[4];
};

#endif