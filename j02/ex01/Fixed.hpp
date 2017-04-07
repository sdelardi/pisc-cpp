#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <math.h>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &original);
		Fixed(int value);
		Fixed(float value);
		~Fixed(void);
		Fixed	&operator=(Fixed const & fix);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					_fp;
		const static int 	_fb = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & fix);

#endif
