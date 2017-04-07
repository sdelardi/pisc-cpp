#include "FragTrap.hpp"

FragTrap::FragTrap(void)
	: _hp(100),
	  _maxhp(100),
	  _ep(100),
	  _maxep(100),
	  _lvl(1),
	  _name("toto"),
	  _mdamage(30),
	  _rdamage(20),
	  _armor(5)
{
	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
	: _hp(100),
	  _maxhp(100),
	  _ep(100),
	  _maxep(100),
	  _lvl(1),
	  _name(name),
	  _mdamage(30),
	  _rdamage(20),
	  _armor(5)
{
	std::cout << "Name constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &old)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_hp = old._hp;
	this->_maxhp = old._maxhp;
	this->_ep = old._maxep;
	this->_lvl = old._lvl;
	this->_name = old._name;
	this->_mdamage = old._mdamage;
	this->_rdamage = old._rdamage;
	this->_armor = old._armor;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &old)
{
	this->_hp = old._hp;
	this->_maxhp = old._maxhp;
	this->_ep = old._maxep;
	this->_lvl = old._lvl;
	this->_name = old._name;
	this->_mdamage = old._mdamage;
	this->_rdamage = old._rdamage;
	this->_armor = old._armor;
	return *this;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << this->_name << " attacks " << target << " at range (before armor reduction), causing ";
	std::cout << this->_rdamage << " of damage !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << this->_name << " attacks " << target << " at melee (before armor reduction), causing ";
	std::cout << this->_mdamage << " of damage !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (amount > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount;
	std::cout << this->_name << " takes " << amount - this->_armor << " damage (with armor reduction) !" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hp > this->_maxhp)
		this->_hp = 100;
	else
		this->_hp += amount;
	std::cout << this->_name << " repair " << amount << " damage, he has now ";
	std::cout << this->_hp << "hit points !";
}

int		FragTrap::getMeleeDamage(void)
{
	return this->_mdamage;
}

int		FragTrap::getRangedDamage(void)
{
	return this->_rdamage;
}
