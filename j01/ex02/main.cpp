#include "ZombieEvent.hpp"
#include <cstdlib>

int			main(void)
{
	Zombie *zomb1;

	zomb1 = ZombieEvent::newZombie("toto");
	zomb1->announce();
	ZombieEvent::setZombieType(zomb1, "boomer");
	zomb1->announce();
	ZombieEvent::setZombieType(zomb1, "normal");
	ZombieEvent::randomChump();
	zomb1->announce();
	delete zomb1;
	return (0);
}
