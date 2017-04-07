#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fp = 0;
}

Fixed::Fixed(const Fixed &original)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed::Fixed(int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fp = value * (1 << Fixed::_fb);
}

Fixed::Fixed(float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fp = roundf(value * (1 << Fixed::_fb));
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

float Fixed::toFloat(void) const
{
	return (float)this->_fp / (1 << Fixed::_fb);
}

int	Fixed::toInt(void) const
{
	return this->_fp / (1 << Fixed::_fb);
}

std::ostream &	operator<<(std::ostream & o, Fixed const &fix)
{
	o << fix.toFloat();
	return o;
}
