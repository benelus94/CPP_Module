/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:00:55 by yongwkim          #+#    #+#             */
/*   Updated: 2021/09/15 15:46:57 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vector.hpp"

Vector::Vector(): x(0), y(0)
{
}

Vector::Vector(Vector const &v): x(v.x), y(v.y)
{
}

Vector::Vector(Point const &p)
{
	x = p.get_x();
	y = p.get_y();
}


Vector::~Vector()
{
}

Vector& Vector::operator=(Vector const &v)
{
	x = v.x;
	y = v.y;
	return (*this);
}

Vector Vector::operator+(Vector const &v)
{
	Vector res(*this);

	res.x = x + v.x;
	res.y = y + v.y;
	return (res);
}

Vector Vector::operator-(Vector const &v)
{
	Vector res(*this);

	res.x = x - v.x;
	res.y = y - v.y;
	return (res);
}

Fixed	Vector::operator*(Vector const &v)
{
	return (x * v.x + y * v.y);
}
