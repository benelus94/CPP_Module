/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:27:23 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/30 16:13:56 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name): name(_name), weapon(nullptr)
{
}

void	HumanB::attack()
{
	if (weapon)
		std::cout << name << " attaks with his " << weapon->getType() << std::endl;
	else
		std::cout << name << " can't attack without weapon (need setWeapon)" << std::endl;
}

void HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
}