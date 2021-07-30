/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:35:13 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/30 16:14:10 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int	main(void)
{
	Weapon w1("machinegun");
	HumanA a("Kim", w1);
	HumanB b("Yong");
	HumanB b2("Wook");

	std::string type = w1.getType();
	std::cout << type << std::endl;
	a.attack();
	b.setWeapon(w1);
	b.attack();
	b2.attack();
}