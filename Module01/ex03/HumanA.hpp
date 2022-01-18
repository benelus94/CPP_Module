/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Humana.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:42:43 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/17 17:45:21 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	private:
		const std::string	name;
		const Weapon		&weapon;

	public:
		HumanA(const std::string name, const Weapon &weapon);
		void	attack() const;
};

#endif