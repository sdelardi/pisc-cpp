#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac < 4)
		return (1);
	std::string s1 (av[2]);
	std::string s2 (av[3]);
	std::string s3 = av[1];
	std::string content;
	std::string line;
	std::ifstream file (av[1]);
	std::ofstream newf (s3 += ".replace");
	if (s1.size() == 0 || s2.size() == 0)
	{
		std::cerr << "Strings must not be empty" << std::endl;
		return 1;
	}
	if (file.is_open())
	{
		while (getline(file, line))
		{
				content += line;
				content += '\n';
		}
		file.close();
	}
	else
	{
		std::cerr << "Unable to open file :" << s3 << std::endl;
		return 1;
	}
	std::size_t found = 0;
	std::size_t pos = 0;
	if (s1.compare(s2) != 0)
	{
		while ((found = content.find(s1, pos)) != std::string::npos)
		{
			content.replace(found, s1.size(), s2);
			pos = (found + s2.size());
		}
	}
	if (newf.is_open())
		newf << content;
	else
	{
		std::cerr << "Unable to open file :" << (s3 += ".replace") << std::endl;
		return 1;
	}
	return 0;
}
