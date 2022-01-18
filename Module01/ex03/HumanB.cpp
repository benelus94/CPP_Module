/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:27:23 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/17 17:54:34 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string name): name(name), weapon(nullptr)
{
}

void	HumanB::attack()
{
	if (weapon)
		std::cout << name << " attaks with his " << weapon->getType() << std::endl;
	else
		std::cout << name << " can't attack without weapon (need setWeapon)" << std::endl;
}

void HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}