/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:10:16 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/26 15:18:41 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Default")
{
	for (int i = 0; i < 4; i++)
		inven[i] = NULL;
}

Character::Character(std::string name) : name(name)
{
	for (int i = 0; i < 4; i++)
		inven[i] = NULL;
}
	
Character::Character(Character const &ch)
{
	name = ch.getName();
	for (int i = 0; i < 4; i++)
	{
		if (ch.inven[i])
			inven[i] = ch.inven[i]->clone();
	}
}


Character::~Character() 
{
	for (int i = 0; i < 4; i++)
	{
		if (inven[i])
			delete inven[i];
	}
}

Character &Character::operator=(Character const &ch)
{
	name = ch.getName();
	for (int i = 0; i < 4; i++)
	{
		if (ch.inven[i])
			inven[i] = ch.inven[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* mat)
{
	if (mat)
	{
		for (int i = 0; i < 4; i++)
		{
			if (inven[i] == NULL)
			{
				inven[i] = mat;
				return ;
			}
		}
		std::cout << "Can't equip Materia : Inventory is full" << std::endl;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Can't unequip Materia : Out of bounds" << std::endl;
	}
	else if (inven[idx])
		inven[idx] = NULL;
	else
		std::cout << "Can't unequip Materia : No materia exist at " << idx << " slot" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Can't use Materia : Out of bounds" << std::endl;
	}
	else if (inven[idx])
		inven[idx]->use(target);
	else
		std::cout << "Can't use Materia : No materia exist at " << idx << " slot" << std::endl;

}