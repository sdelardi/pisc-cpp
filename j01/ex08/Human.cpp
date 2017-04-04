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
	t_mapping map[3] = {
		{"melee attack", &Human::meleeAttack},
		{"ranged attack", &Human::rangedAttack},
		{"intimidating shout", &Human::intimidatingShout}
	};

	for (int i = 0; i < 3; i++)
	{
		if (action_name == map[i].action)
			(this->*(map[i].function))(target);
	}
}
