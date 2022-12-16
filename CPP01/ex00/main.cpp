#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie zombie1("Foo");
	Zombie *zombie2 = newZombie("Boo");
	zombie1.announce();
	zombie2->announce();
	randomChump("Goo");
	delete zombie2;
	std::cout << "Program end" << std::endl;
}