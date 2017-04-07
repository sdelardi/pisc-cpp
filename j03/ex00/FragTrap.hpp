#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
class FragTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &old);
		FragTrap &operator=(FragTrap const &old);
		~FragTrap(void);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getMeleeDamage(void);
		int getRangedDamage(void);
	private:
		unsigned int _hp;
		unsigned int _maxhp;
		unsigned int _ep;
		unsigned int _maxep;
		unsigned int _lvl;
		std::string _name;
		unsigned int _mdamage;
		unsigned int _rdamage;
		unsigned int _armor;
};

#endif
