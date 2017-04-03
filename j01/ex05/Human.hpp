#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class Human
{
	public:
		std::string identify(void);
		Brain		&getBrain(void);
	private:
		Brain _brain;
};

#endif
