/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:07:01 by yongwkim          #+#    #+#             */
/*   Updated: 2021/08/19 16:41:05 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
	private:
		int	fpv;
		static const int n_frac_bits = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &orth);
		Fixed& operator=(const Fixed &orth);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif