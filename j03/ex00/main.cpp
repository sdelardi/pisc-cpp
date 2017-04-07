#include "FragTrap.hpp"

int	main(void)
{
	FragTrap toto;
	FragTrap tutu("tutu");
	FragTrap tata("tata");
	FragTrap lol(tutu);

	toto.rangedAttack("tutu");
	tutu.takeDamage(toto.getRangedDamage());
	tutu.meleeAttack("toto");
	toto.takeDamage(tutu.getMeleeDamage());
	tutu.beRepaired(50);
	toto.meleeAttack("tata");
	tata.takeDamage(toto.getMeleeDamage());
	return 0;
}
