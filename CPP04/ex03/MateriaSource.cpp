#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : count(0)
{
	std::cout << "MateriaSource Default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	this->operator=(other);
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	std::cout<<"MateriaSource Assignation operator called"<<std::endl;
	this->count = 0;
	for(int i = 0; i < other.count; i++)
		this->learnMateria(other.m_materias[i]->clone());
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
	for(int i = 0; i < count; i++)
		delete m_materias[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (this->count  == 4 || !m)
		return ;
	this->m_materias[this->count++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for(int i = 0; i < this->count; i++)
	{
		if(this->m_materias[i]->getType() == type)
			return this->m_materias[i]->clone();
	}
	return NULL;
}