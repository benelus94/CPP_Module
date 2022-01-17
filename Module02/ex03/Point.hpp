/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:11:12 by yongwkim          #+#    #+#             */
/*   Updated: 2021/09/15 15:43:46 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
 #define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const	x;
		Fixed const	y;
	public:
		Point(void);
		Point(Point &p);
		Point(Fixed const &x, Fixed const &y);
		~Point(void);
		Point&	operator=(Point &p);
		Point	operator+(Point const &p);
		Point	operator+(Point const &p) const;
		Point	operator-(Point const &p);
		Point	operator-(Point const &p) const;
		Fixed	get_x() const;
		Fixed	get_y() const;
		void	print_xy();
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif