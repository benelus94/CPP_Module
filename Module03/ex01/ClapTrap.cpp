/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:09:52 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/24 14:57:15 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("Default"), HitPoint(10), EnergyPoint(10), AttackDamage(0), MaxHP(10), MaxEP(10)
{
	std::cout << "Claptrap " << Name << " ready." << std::endl;
}

ClapTrap::ClapTrap(std::string Name): Name(Name), HitPoint(10), EnergyPoint(10), AttackDamage(0), MaxHP(10), MaxEP(10)
{	
	std::cout << "Claptrap " << Name << " ready." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ct)
{
	*this = ct;
	std::cout << "Claptrap " << Name << " ready." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << Name << " died." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &ct)
{
	Name = ct.Name;
	HitPoint = ct.HitPoint;
	EnergyPoint = ct.EnergyPoint;
	AttackDamage = ct.AttackDamage;
	MaxHP = ct.MaxHP;
	MaxEP = ct.MaxEP;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (EnergyPoint == 0)
		std::cout << "ClapTrap : Not enugh EP" << std::endl;
	else
	{
		EnergyPoint--;
		std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << AttackDamage << " points of damage!";
		std::cout << "(EP: " << EnergyPoint << ")" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoint == 0)
	{	std::cout << "Can't take damage : ";
		std::cout << "ClapTrap " << Name << " is already dead." << std::endl;
	}
	else if (HitPoint < amount)
	{
		std::cout << "ClapTrap " << Name << " takes " << HitPoint << " damage.";
		HitPoint = 0;
		std::cout << "(HP: " << HitPoint << ")" << std::endl;
	}
	else
	{
		HitPoint -= amount;
		std::cout << "ClapTrap " << Name << " takes " << amount << " damage.";
		std::cout << "(HP: " << HitPoint << ")" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (HitPoint == MaxHP)
	{
		std::cout << "Can't be repaired : ";
		std::cout << "ClapTrap " << Name << "'s HP is full." << std::endl;
	}
	else if (HitPoint + amount > MaxHP)
	{
		std::cout << "check" << std::endl;
		std::cout << "ClapTrap " << Name << " is repaired " << MaxHP - HitPoint << " damage.";
		HitPoint = MaxHP;
		std::cout << "(HP: " << HitPoint << ")" << std::endl;
	}
	else
	{
		HitPoint += amount;
		std::cout << "ClapTrap " << Name << " is repaired " << amount << " damage.";
		std::cout << "(HP: " << HitPoint << ")" << std::endl;
	}
}