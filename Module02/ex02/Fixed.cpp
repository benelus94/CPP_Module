/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:35:45 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/21 15:37:53 by yongwkim         ###   ########.fr       */
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
	fpv = 0;
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(const Fixed &orth)
{
	*this = orth;
}

Fixed::Fixed(const int _fpv)
{
	fpv = _fpv << n_frac_bits;
}

Fixed::Fixed(const float _fpv)
{
	fpv = roundf(_fpv * (1 << Fixed::n_frac_bits));
}

Fixed& Fixed::operator=(const Fixed &orth)
{
	fpv = orth.getRawBits();
	return (*this);
}

bool Fixed::operator>(const Fixed &orth) const
{
	return (fpv > orth.getRawBits());
}

bool Fixed::operator<(const Fixed &orth) const
{
	return (fpv < orth.getRawBits());

}

bool Fixed::operator>=(const Fixed &orth) const
{
	return (fpv >= orth.getRawBits());
}

bool Fixed::operator<=(const Fixed &orth) const
{
	return (fpv <= orth.getRawBits());
}

bool Fixed::operator==(const Fixed &orth) const
{
	return (fpv == orth.getRawBits());
}

bool Fixed::operator!=(const Fixed &orth) const
{
	return (fpv != orth.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &orth)
{
	Fixed	res(*this);

	res.setRawBits(fpv + orth.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(const Fixed &orth)
{
	Fixed	res(*this);

	res.setRawBits(fpv - orth.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(const Fixed &orth)
{
	Fixed	res(*this);

	res.setRawBits((fpv * orth.getRawBits()) / (1 << Fixed::n_frac_bits));
	return (res);
}

Fixed	Fixed::operator/(const Fixed &orth)
{
	Fixed	res(*this);

	res.setRawBits((fpv * (1 << Fixed::n_frac_bits))/ orth.getRawBits());
	return (res);
}

Fixed 	&Fixed::operator++()
{
	fpv++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old = *this;
	operator++();
	return (old);
}

Fixed&	Fixed::operator--()
{
	fpv--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old = *this;
	operator--();
	return (old);
}


int Fixed::getRawBits() const
{
	return (fpv);
}

void Fixed::setRawBits(int raw)
{
	fpv = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)fpv / (float)(1 << Fixed::n_frac_bits));
}

int		Fixed::toInt(void) const
{
	return (fpv >> Fixed::n_frac_bits);
}

Fixed	&Fixed::min(Fixed &orth1, Fixed &orth2)
{
	if (orth1 > orth2)
		return (orth2);
	return (orth1);
}

Fixed const	&min(const Fixed &orth1, const Fixed &orth2)
{
	if (orth1 > orth2)
		return (orth2);
	return (orth1);
}

Fixed	&Fixed::max(Fixed &orth1, Fixed &orth2)
{
	if (orth1 > orth2)
		return (orth1);
	return (orth2);
}
Fixed const	&Fixed::max(const Fixed &orth1, const Fixed &orth2)
{
	if (orth1 > orth2)
		return (orth1);
	return (orth2);
}
