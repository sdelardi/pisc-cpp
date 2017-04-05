#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::string input_line;
		while(std::cin)
		{
			getline(std::cin, input_line);
			std::cout << input_line << std::endl;
		}
	}
	else
	{
		std::ifstream file;
		std::string line;
		for (int i = 1; i < ac; i++)
		{
			file.open(av[i]);
			if (file.is_open())
			{
				while(getline(file, line))
					std::cout << line << '\n';
				file.close();
			}
			else
				std::cerr << "Unable to open file : " << av[i] << std::endl;
		}
	}
}
