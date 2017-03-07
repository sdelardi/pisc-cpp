#include "ZombieEvent.hpp"
#include <cstdlib>

std::string	randomChump(void)
{
	std::string NameArray[10] = { "budz", "pain", "konan", "nagato", "itachi", "tobi", "madara", "naruto", "danzou", "kakashi" };
	std::string name;
	int			randed;

	randed = rand() % 10;
	name = NameArray[randed];
	return name;
}

int			main(void)
{
	Zombie zomb1;
	Zombie *zomb2;

	zomb1.name = "toto";
	zomb1.type = "boomer";
	zomb1.announce();
	zomb2 = ZombieEvent::newZombie(randomChump());
	ZombieEvent::setZombieType(zomb2, "normal");
	zomb2->announce();
	delete zomb2;
	return (0);
}
