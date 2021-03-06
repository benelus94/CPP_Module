/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:59:21 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/24 17:18:11 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	Name = "Default";
	HitPoint = FragTrap::HitPoint;
	EnergyPoint = ScavTrap::EnergyPoint;
	AttackDamage = FragTrap::AttackDamage;
	MaxHP = FragTrap::HitPoint;;
	MaxEP = ScavTrap::EnergyPoint;
	std::cout << "DiamondTrap " << Name << " ready." << std::endl;
}

DiamondTrap::DiamondTrap(std::string _Name): ClapTrap(_Name + "_clap_name"), ScavTrap(_Name + "_clap_name"), FragTrap(_Name + "_clap_name")
{
	this->Name = _Name;
	HitPoint = FragTrap::HitPoint;
	EnergyPoint = ScavTrap::EnergyPoint;
	AttackDamage = FragTrap::AttackDamage;
	MaxHP = FragTrap::HitPoint;
	MaxEP = ScavTrap::EnergyPoint;
	std::cout << "DiamondTrap " << Name << " ready." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &dt): ClapTrap(dt.Name + "_clap_name"), ScavTrap(dt.Name + "_clap_name"), FragTrap(dt.Name + "_clap_name")
{
	this->Name = dt.Name;
	HitPoint = FragTrap::HitPoint;
	EnergyPoint = ScavTrap::EnergyPoint;
	AttackDamage = FragTrap::AttackDamage;
	MaxHP = FragTrap::HitPoint;;
	MaxEP = ScavTrap::EnergyPoint;
	std::cout << "DiamondTrap " << Name << " ready." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << Name << " died." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &dt)
{
	ScavTrap::operator=(dt);
	FragTrap::operator=(dt);
	Name = dt.Name;
	HitPoint = FragTrap::HitPoint;
	EnergyPoint = ScavTrap::EnergyPoint;
	AttackDamage = FragTrap::AttackDamage;
	MaxHP = FragTrap::HitPoint;;
	MaxEP = ScavTrap::EnergyPoint;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I'm DiamondTrap " << Name << ". And my ClapTrap name is " << ClapTrap::Name << std::endl;
}