/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:03:51 by yongwkim          #+#    #+#             */
/*   Updated: 2021/09/15 15:47:20 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main()
{
	Point p1;
	Point p2(1.5f, 2.5f);
	Point p3(p2);
	Point p4 = p2;
	Point p5(1.5f, 0);
	Point p6(1, 0.5f);

	p1.print_xy();
	p2.print_xy();
	p3.print_xy();
	p4.print_xy();

	if (bsp(p1, p2, p5, p6))
		std::cout << "in triangle" << std::endl;
}