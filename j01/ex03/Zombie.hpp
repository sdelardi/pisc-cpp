#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
public:
	void	setName(std::string name);
	void	setType(std::string type);
	void	announce(void);

private:
	std::string _name;
	std::string _type;
};

#endif
