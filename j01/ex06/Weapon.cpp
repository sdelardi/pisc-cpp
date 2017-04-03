#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

std::string const &Weapon::getType() const
{
	return (std::string const &)(this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
