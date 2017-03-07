#ifndef PONY_H
# define PONY_H

# include <string>
# include <iostream>

class Pony
{
public:
			Pony(void);
			~Pony(void);
	void	status(void);
	void	run(void);
	void	eat(void);

	std::string name;
	int			height;
	int			weight;
	int			speed;
	int			evil;
	std::string color;
};

#endif
