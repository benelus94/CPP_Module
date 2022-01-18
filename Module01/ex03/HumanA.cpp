/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:40:14 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/17 17:37:48 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string name, const Weapon &weapon): name(name), weapon(weapon)
{
}

void	HumanA::attack() const
{
	std::cout << name << " attaks with his " << weapon.getType() << std::endl;
}