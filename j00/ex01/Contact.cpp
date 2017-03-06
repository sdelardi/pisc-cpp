#include "Contact.hpp"

		Contact::Contact(void) {
	this->added = 0;
	return;
}

		Contact::~Contact(void) {
	return;
}

int		Contact::get_added(void) {
	if (this->added == 1)
		return 1;
	else
		return 0;
}

void	Contact::add_contact(void) {
	add_info(0, "first name");
	add_info(1, "last name");
	add_info(2, "nickname");
	add_info(3, "login");
	add_info(4, "postal address");
	add_info(5, "email address");
	add_info(6, "phone number");
	add_info(7, "birthday date");
	add_info(8, "favorite meal");
	add_info(9, "underwar color");
	add_info(10, "darkest secret");
	this->added = 1;
	std::cout << "Contact added !" << std::endl;
}

void	Contact::add_info(int mode, const char *info) {
	std::string buf;
	std::cout << info << ": ";
	std::getline(std::cin, buf, '\n');
	std::cout << std::endl;
	while (buf.empty())
	{
		std::cout << info << ": ";
		std::getline(std::cin, buf, '\n');
		std::cout << std::endl;
	}
	switch (mode)
	{
		case 0:
				this->first_name = buf;
		case 1:
				this->last_name = buf;
		case 2:
				this->nickname = buf;
		case 3:
				this->login = buf;
		case 4:
				this->postal_addr = buf;
		case 5:
				this->mail_addr = buf;
		case 6:
				this->phone_number = buf;
		case 7:
				this->birthday_date = buf;
		case 8:
				this->favorite_meal = buf;
		case 9:
				this->underwear_color = buf;
		case 10:
				this->darkest_secret = buf;
	}
}

void	Contact::soft_display(int index) {
	std::cout << std::right << std::setw(10) << index << "|";
	if (this->first_name.length() > 10)
		std::cout << std::right << std::setw(10) << this->first_name.substr(0, 9).append(".") << "|";
	else
		std::cout << std::right << std::setw(10) << this->first_name << "|";
	if (this->last_name.length() > 10)
		std::cout << std::right << std::setw(10) << this->last_name.substr(0, 9).append(".") << "|";
	else
		std::cout << std::right << std::setw(10) << this->last_name << "|";
	if (this->nickname.length() > 10)
		std::cout << std::right << std::setw(10) << this->nickname.substr(0, 9).append(".") << "|";
	else
		std::cout << std::right << std::setw(10) << this->nickname << "|";
	std::cout << std::endl;
}

void	Contact::hard_display(void) {
	std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last_name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "login: " << this->login << std::endl;
	std::cout << "portal address: " << this->postal_addr << std::endl;
	std::cout << "email address: " << this->mail_addr << std::endl;
	std::cout << "phone number: " << this->phone_number << std::endl;
	std::cout << "birthday date: " << this->birthday_date << std::endl;
	std::cout << "underwear color: " << this->underwear_color << std::endl;
	std::cout << "darkest secret: " << this->darkest_secret << std::endl;
}
