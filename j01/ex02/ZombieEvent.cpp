#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	return ;
}

void		ZombieEvent::setZombieType(Zombie *zombie, std::string type)
{
	zombie->setType(type);
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie	*zomb = new Zombie();
	zomb->setName(name);
	zomb->setType("normal");
	return zomb;
}

void		ZombieEvent::randomChump(void)
{
	Zombie		z;

	std::string name = "";
	int nameLen = rand() % 10 + 4;

	for (int i = 0; i < nameLen; i++)
	{
		char letter = rand() % 26 + (int)'a';
		name += letter;
	}

	z.setName(name);
	z.setType("normal");
	z.announce();
	return ;
}
