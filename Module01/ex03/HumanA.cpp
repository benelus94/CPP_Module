/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:40:14 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/30 16:07:17 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon _weapon): name(_name), weapon(_weapon)
{
}

void	HumanA::attack() const
{
	std::cout << name << " attaks with his " << weapon.getType() << std::endl;
}