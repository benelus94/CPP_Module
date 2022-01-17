/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:27:27 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/07 17:25:55 by yongwkim         ###   ########.fr       */
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

ScavTrap::ScavTrap(ScavTrap const &ct): ClapTrap(ct.Name)
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

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << Name << " attacks " << target << " causing " << AttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " activates Gate keeper mode " << std::endl;
}