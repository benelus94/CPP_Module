/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:32:53 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/12 16:50:52 by yongwkim         ###   ########.fr       */
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

FragTrap::FragTrap(std::string _Name): ClapTrap(_Name)
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
	EnergyPoint = 50;
	AttackDamage = 20;
	MaxHP = 100;
	MaxEP = 50;
	std::cout << "FragTrap " << Name << " ready." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << Name << " died." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &ft)
{
	Name = ft.Name;
	HitPoint = ft.HitPoint;
	EnergyPoint = ft.EnergyPoint;
	AttackDamage = ft.AttackDamage;
	MaxHP = ft.MaxHP;
	MaxEP = ft.MaxEP;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << Name << " highfives! " << std::endl;
}