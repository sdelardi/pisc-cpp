#include "Brain.hpp"

std::string	Brain::identify(void)
{
	std::string str;

	const void *addr = static_cast<const void*>(this);
	std::stringstream ss;
	ss << addr;
	str = ss.str();
	return str;
}
