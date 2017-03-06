#include "Contact.hpp"

int main (void)
{
	Contact		contacts[8];
	std::string	buf;
	int			i;
	int			nb;

	std::cout << "Type your commands here !" << std::endl;
	std::cout << "$>";
	while(std::getline(std::cin, buf, '\n'))
	{
		if (buf == "ADD")
		{
			i = 0;
			while (i < 8 && contacts[i].get_added() == 1)
				i++;
			if (i == 8)
				std::cout << "Sorry, the phonebook is full !" << std::endl;
			else if (i < 8 && contacts[i].get_added() == 0)
				contacts[i].add_contact();
		}
		else if (buf == "SEARCH")
		{
			i = 0;
			while (i < 8 && contacts[i].get_added() == 1)
			{
				contacts[i].soft_display(i);
				i++;
			}
			if (i > 0)
			{
				std::cout << "Index: ";
				std::cin >> nb;
				std::cout << std::endl;
				if (std::cin.fail())
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<int>::max(), '\n');
					nb = -1;
				}
				if (nb >= 0 && nb < i)
					contacts[nb].hard_display();
				else
					std::cout << "Index not found" << std::endl;
			}
		}
		else if (buf == "EXIT")
			break ;
		else if (!buf.empty())
			std::cout << "Command not found: " << buf << std::endl;
		std::cout << "$>";
	}
	return 0;
}
