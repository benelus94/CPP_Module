/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:35:45 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/19 15:31:41 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	fpv = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &orth)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = orth;
}

Fixed::Fixed(const int _fpv)
{
	std::cout << "Int constructor called" << std::endl;
	fpv = _fpv << n_frac_bits;
}

Fixed::Fixed(const float _fpv)
{
	std::cout << "Float constructor called" << std::endl;
	fpv = roundf(_fpv * (1 << n_frac_bits));
}

Fixed& Fixed::operator=(const Fixed &orth)
{
	std::cout << "Assignation operator called" << std::endl;
	fpv = orth.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fpv);
}

void Fixed::setRawBits(int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	fpv = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)fpv / (float)(1 << n_frac_bits));
}

int		Fixed::toInt(void) const
{
	return (fpv >> n_frac_bits);
}


