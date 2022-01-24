/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:27:27 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/24 15:01:29 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	HitPoint = 100;
	EnergyPoint = 50;
	AttackDamage = 20;
	MaxHP = 100;
	MaxEP = 50;
	std::cout << "Scavtrap " << Name << " ready." << std::endl;
}

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name)
{
	HitPoint = 100;
	EnergyPoint = 50;
	AttackDamage = 20;
	MaxHP = 100;
	MaxEP = 50;
	std::cout << "Scavtrap " << Name << " ready." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &st): ClapTrap(st.Name)
{
	HitPoint = 100;
	EnergyPoint = 50;
	AttackDamage = 20;
	MaxHP = 100;
	MaxEP = 50;
	std::cout << "Scavtrap " << Name << " ready." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap " << Name << " died." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &st)
{
	ClapTrap::operator=(st);
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	if (EnergyPoint == 0)
		std::cout << "ScavTrap : Not enugh EP" << std::endl;
	else
	{
		EnergyPoint--;
		std::cout << "ScavTrap " << Name << " attacks " << target << " causing " << AttackDamage << " points of damage!";
		std::cout << "(EP: " << EnergyPoint << ")" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " activates Gate keeper mode " << std::endl;
}