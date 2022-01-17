/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:11:14 by yongwkim          #+#    #+#             */
/*   Updated: 2021/09/15 15:40:29 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0)
{
}

Point::Point(Point &p): x(p.x), y(p.y)
{
}

Point::Point(Fixed const &x, Fixed const &y): x(x), y(y)
{
}

Point::~Point()
{
}

Point& Point::operator=(Point &p)
{
	return (p);
}

Point	Point::operator+(Point const &p)
{
	Point res(this->get_x() + p.get_x(), this->get_y() + p.get_y());
	return (res);
}

Point	Point::operator+(Point const &p) const
{
	Point res(this->get_x() + p.get_x(), this->get_y() + p.get_y());
	return (res);
}

Point	Point::operator-(Point const &p)
{
	Point res(this->get_x() - p.get_x(), this->get_y() - p.get_y());
	return (res);
}

Point	Point::operator-(Point const &p) const
{
	Point res(this->get_x() - p.get_x(), this->get_y() - p.get_y());
	return (res);
}

Fixed	Point::get_x() const
{
	return (x);
}

Fixed	Point::get_y() const
{
	return (y);
}

void	Point::print_xy()
{
	std::cout << "[" << this << "]" << " (" << x.toFloat() << "," << y.toFloat() << ")" << std::endl;
}