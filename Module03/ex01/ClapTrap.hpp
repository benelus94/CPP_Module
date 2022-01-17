/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:09:54 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/07 17:25:54 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	protected:
		std::string	Name;
		unsigned int	HitPoint;
		unsigned int	EnergyPoint;
		unsigned int	AttackDamage;
		unsigned int	MaxHP;
		unsigned int	MaxEP;

	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(ClapTrap const &ct);
		virtual	~ClapTrap();
		ClapTrap &operator=(ClapTrap const &ct);

		virtual void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);		
};

#endif