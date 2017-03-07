#include "Pony.hpp"

		Pony::Pony(void)
{
	std::cout << "A pony was born, is he pure or evil ?" << std::endl;
}

		Pony::~Pony(void)
{
	std::cout << this->name << " died !" << std::endl;
	if (this->evil == 1)
		std::cout << "This is not a lost, he was evil" << std::endl;
	else
		std::cout << "This is a lost, he was pure" << std::endl;
}

void	Pony::status(void)
{
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Height: " << this->height << "cm" << std::endl;
	std::cout << "Weight: " << this->weight << "kg" << std::endl;
	std::cout << "Speed: " << this->speed << "m/s" << std::endl;
	std::cout << "Color: " << this->color << std::endl;
	if (this->evil == 1)
		std::cout << "Evil" << std::endl;
	else
		std::cout << "Pure" << std::endl;
}

void	Pony::run(void)
{
	std::cout << this->name << " is running and losing weight." << std::endl;
	this->weight -= 1;
}

void	Pony::eat(void)
{
	std::cout << this->name << " is eating and earn weight." << std::endl;
	this->weight += 1;
}
