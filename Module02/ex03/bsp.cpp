/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:03:46 by yongwkim          #+#    #+#             */
/*   Updated: 2021/09/15 15:42:13 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vector.hpp"

/* point in triangle test by barycentric coordinate */

bool	bsp(Point const a, Point const b, Point const c, Point const p)
{
	Vector v0(c - a);
	Vector v1(b - a);
	Vector v2(p - a);

	Fixed d = ((v0 * v0) * (v1 * v1)) - ((v0 * v1) * (v0 * v1));
	Fixed u = (((v1 * v1) * (v0 * v2)) - ((v0 * v1) * (v1 * v2))) / d;
	Fixed v = (((v0 * v0) * (v1 * v2)) - ((v0 * v1) * (v0 * v2))) / d;

	return ((u > 0) && (v > 0) && (u + v) < 1);
}