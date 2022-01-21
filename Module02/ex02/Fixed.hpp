/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:07:01 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/21 15:37:55 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	fpv;
		static const int n_frac_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &orth);
		Fixed(const int _fpv);
		Fixed(const float _fpv);
		~Fixed(void);
		Fixed&	operator=(const Fixed &orth);
		bool	operator>(const Fixed &orth) const;
		bool	operator<(const Fixed &orth) const;
		bool	operator>=(const Fixed &orth) const;
		bool	operator<=(const Fixed &orth) const;
		bool	operator==(const Fixed &orth) const;
		bool	operator!=(const Fixed &orth) const;
		Fixed	operator+(const Fixed &orth);
		Fixed	operator-(const Fixed &orth);
		Fixed	operator*(const Fixed &orth);
		Fixed	operator/(const Fixed &orth);
		Fixed	&operator++();		// prefix increment
		Fixed	operator++(int);	// postfix increment
		Fixed	&operator--();		// prefix decrement
		Fixed	operator--(int);	// postfix decrement

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed	&min(Fixed &orth1, Fixed &orth2);
		static Fixed const	&min(const Fixed &orth1, const Fixed &orth2);
		static Fixed	&max(Fixed &orth1, Fixed &orth2);
		static Fixed const	&max(const Fixed &orth1, const Fixed &orth2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif