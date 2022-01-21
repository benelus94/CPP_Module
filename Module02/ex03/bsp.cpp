/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:03:46 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/21 14:00:15 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vector.hpp"

/* point in triangle test by barycentric coordinate 
v2 = u * v0 + v * v1 

(v2) . v0 = (u * v0 + v * v1) . v0
(v2) . v1 = (u * v0 + v * v1) . v1

v2 . v0 = u * (v0 . v0) + v * (v1 . v0)
v2 . v1 = u * (v0 . v1) + v * (v1 . v1)

u = ((v1.v1)(v2.v0)-(v1.v0)(v2.v1)) / ((v0.v0)(v1.v1) - (v0.v1)(v1.v0))
v = ((v0.v0)(v2.v1)-(v0.v1)(v2.v0)) / ((v0.v0)(v1.v1) - (v0.v1)(v1.v0))

*/

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