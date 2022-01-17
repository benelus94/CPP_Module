/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:59:21 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/12 16:59:46 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	HitPoint = FragTrap::HitPoint;
	EnergyPoint = ScavTrap::EnergyPoint;
	AttackDamage = FragTrap::AttackDamage;
	MaxHP = FragTrap::HitPoint;;
	MaxEP = ScavTrap::EnergyPoint;
	std::cout << "DiamondTrap " << Name << " ready." << std::endl;
}

DiamondTrap::DiamondTrap(std::string _Name): ClapTrap(_Name + "_clap_name"), ScavTrap(_Name + "_clap_name"), FragTrap(_Name + "_clap_name")
{
	std::cout << "constructor claptap " << ClapTrap::Name << std::endl;
	this->Name = _Name;
	HitPoint = FragTrap::HitPoint;
	EnergyPoint = ScavTrap::EnergyPoint;
	AttackDamage = FragTrap::AttackDamage;
	MaxHP = FragTrap::HitPoint;;
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
	Name = dt.Name;
	HitPoint = dt.HitPoint;
	EnergyPoint = dt.EnergyPoint;
	AttackDamage = dt.AttackDamage;
	MaxHP = dt.MaxHP;
	MaxEP = dt.MaxEP;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I'm DiamondTrap " << Name << ". And my ClapTrap name is " << ClapTrap::Name << std::endl;
}