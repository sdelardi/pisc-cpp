#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed &original);
		~Fixed(void);
		Fixed	&operator=(Fixed const & fix);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_fp;
		const static int 	_fb = 8;
};

#endif
