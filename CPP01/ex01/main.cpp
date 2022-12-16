#include "Zombie.hpp"
#include <iostream>

int main()
{
    int count = 5;
	Zombie* horde = zombieHorde(count, "Foo");
	for (int i = 0; i < count; i++)
	   horde[i].announce();
	delete [] horde;
	std::cout << "Program end" << std::endl;
}
