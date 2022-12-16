#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
    public:
    	MateriaSource(void);
    	MateriaSource(const MateriaSource& other);
    	MateriaSource& operator=(const MateriaSource& other);
    	~MateriaSource(void);
    	
    	void	learnMateria(AMateria* m);
    	AMateria* createMateria(std::string const &type);
    	
    private:
    	AMateria*	m_materias[4];
    	int count;
};

#endif