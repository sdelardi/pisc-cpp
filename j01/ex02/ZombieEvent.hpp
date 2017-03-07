#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
public:
					ZombieEvent(void);
					~ZombieEvent(void);
	static void		setZombieType(Zombie *zomb, std::string type);
	static Zombie	*newZombie(std::string name);
};

#endif
