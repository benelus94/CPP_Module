/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:00:49 by yongwkim          #+#    #+#             */
/*   Updated: 2021/09/15 15:39:06 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

class Vector
{
	private:
		Fixed	x;
		Fixed	y;
	public:
		Vector();
		Vector(Vector const &v);
		Vector(Point const &p);
		~Vector();
		Vector&	operator=(Vector const &v);
		Vector	operator+(Vector const &v);
		Vector	operator-(Vector const &v);
		Fixed	operator*(Vector const &v);
};