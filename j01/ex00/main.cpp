#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*popo;

	std::cout << "A pony on the heap has been created." << std::endl;
	popo = new Pony;
	popo->name = "Popo";
	popo->height = 148;
	popo->weight = 205;
	popo->speed = 5;
	popo->evil = 0;
	popo->color = "brown";
	popo->status();
	popo->run();
	popo->status();
	popo->eat();
	popo->status();
	std::cout << "The pony on the heap will be destroyed." << std::endl;
	delete popo;
}

void	ponyOnTheStack(void)
{
	Pony	nyny;

	std::cout << "A pony on the stack has been created." << std::endl;
	nyny.name = "Nyny";
	nyny.height = 155;
	nyny.weight = 220;
	nyny.speed = 7;
	nyny.evil = 1;
	nyny.color = "white";
	nyny.status();
	nyny.run();
	nyny.status();
	nyny.eat();
	nyny.status();
	std::cout << "The pony on the stack will be destroyed." << std::endl;
}
int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
