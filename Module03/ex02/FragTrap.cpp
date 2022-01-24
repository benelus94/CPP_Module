/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:32:53 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/24 15:09:02 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	HitPoint = 100;
	EnergyPoint = 100;
	AttackDamage = 30;
	MaxHP = 100;
	MaxEP = 100;
	std::cout << "FragTrap " << Name << " ready." << std::endl;
}

FragTrap::FragTrap(std::string Name): ClapTrap(Name)
{
	HitPoint = 100;
	EnergyPoint = 100;
	AttackDamage = 30;
	MaxHP = 100;
	MaxEP = 100;
	std::cout << "FragTrap " << Name << " ready." << std::endl;
}

FragTrap::FragTrap(FragTrap const &st): ClapTrap(st.Name)
{
	HitPoint = 100;
	EnergyPoint = 100;
	AttackDamage = 30;
	MaxHP = 100;
	MaxEP = 100;
	std::cout << "FragTrap " << Name << " ready." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << Name << " died." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &ft)
{
	ClapTrap::operator=(ft);
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << Name << " highfives! " << std::endl;
}