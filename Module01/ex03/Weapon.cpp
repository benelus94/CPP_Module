/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:29:39 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/30 16:06:26 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type): type(_type)
{
}

const std::string& Weapon::getType(void) const
{
	return (type);
}

void Weapon::setType(const std::string &_type)
{
	type = _type;
}