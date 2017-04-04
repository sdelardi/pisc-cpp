#include "Human.hpp"

int main()
{
	Human h;

	h.action("melee attack", "tutu");
	h.action("ranged attack", "tata");
	h.action("intimidating shout", "toto");

	return (0);
}
