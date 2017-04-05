#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Melee attack on " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Ranged attack on " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Intimidating shout on " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	std::string arr[] = {"melee attack", "ranged attack", "intimidating shout"};
	void (Human::*f[])(std::string const &target) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	for (int i = 0; i < 3; i++)
	{
		if (action_name.compare(arr[i]) == 0)
			(this->*(f[i]))(target);
	}
}
