#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <iomanip>

class Contact {
public:
	Contact(void);
	~Contact(void);

	char		added;
	std::string	first_name;
	std::string	last_name;
	std::string nickname;
	std::string login;
	std::string postal_addr;
	std::string mail_addr;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

	int			get_added(void);
	void		add_contact(void);
	void		add_info(int mode, const char *info);
	void		soft_display(int index);
	void		hard_display(void);
};

#endif
