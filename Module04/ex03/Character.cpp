/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:10:16 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/27 16:35:15 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

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
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		inven[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		inven[idx]->use(target);
	}
}