#include <iostream>

int main(int argc, char *argv[])
{
	int e;

	if (argc == 1)
		std::cout << "* LOUD AND UNBREARABLE FEEBACK NOISE *\n";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			e = 0;
			while (argv[i][e])
			{
				std::cout << (char)toupper(argv[i][e]);
				e++;
			}
		}
		std::cout << "\n";
	}
	return 0;
}
