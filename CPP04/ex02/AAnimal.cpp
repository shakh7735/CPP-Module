#include "AAnimal.hpp"

AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal destructor.";
    std::cout << "\n";
}

AAnimal &AAnimal::operator=( AAnimal const &p)
{
    this->type = p.type;
    std::cout << "Animal operator '='.\n";
	return *this;
}

std::string AAnimal::getType() const { return (this->type); }