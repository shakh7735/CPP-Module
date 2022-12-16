#include "Zombie.hpp"
#include <iomanip>
#include <sstream>
#include <iostream>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	std::stringstream ss;

	for (int i = 0; i < N; i++)
	{
	    ss << name << (i + 1);
	    horde[i].set_name(ss.str());
	    ss.str("");
	}
	return horde;
}
