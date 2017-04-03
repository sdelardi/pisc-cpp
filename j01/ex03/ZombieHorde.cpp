#include "ZombieHorde.hpp"

std::string randomName()
{
	std::string name = "";
	int nameLen = rand() % 10 + 4;
	for (int i = 0; i < nameLen; i++)
	{
		char letter = rand() % 26 + (int)'a';
		name += letter;
	}
	return name;
}

ZombieHorde::ZombieHorde(int n) : _n(n)
{
	_zombies = new Zombie[n];

	for (int i = 0; i < n; i++)
	{
		_zombies[i].setName(randomName());
		_zombies[i].setType("normal");
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] _zombies;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < _n; i++)
		_zombies[i].announce();
}
