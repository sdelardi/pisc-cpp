#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
public:
	std::string name;
	std::string type;

			Zombie(void);
			~Zombie(void);
	void	announce(void);
};

#endif
