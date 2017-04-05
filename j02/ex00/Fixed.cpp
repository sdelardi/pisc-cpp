#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fp = 0;
}

Fixed::Fixed(Fixed &original)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const & fix)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_fp = fix.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fp;
}

void Fixed::setRawBits(int const raw)
{
	this->_fp = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
