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
	return zomb;
}
