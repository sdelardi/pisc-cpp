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
	zombie->type = type;
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie	*zomb = new Zombie();
	zomb->name = name;
	zomb->type = "normal";
	return zomb;
}

void		ZombieEvent::randomChump(void)
{
	std::string NameArray[10] = { "budz", "pain", "konan", "nagato", "itachi", "tobi", "madara", "naruto", "danzou", "kakashi" };
	std::string name;
	int         randed;
	Zombie		z;

	randed = rand() % 10;
	name = NameArray[randed];
	z.name = name;
	z.type = "normal";
	z.announce();
	return ;
}
