/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Humana.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:42:43 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/30 16:07:18 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	Weapon		weapon;
	std::string	name;

	public:
		HumanA(std::string _name, Weapon _weapon);
		void	attack() const;
};

#endif