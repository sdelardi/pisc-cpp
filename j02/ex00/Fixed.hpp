#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed original);
		~Fixed;
		Fixed	&operator=(Fixed const & fix);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int				_fp;
		const static	_fb = 8;
};

#endif
