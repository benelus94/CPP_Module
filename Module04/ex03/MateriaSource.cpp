/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:47:57 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/26 15:31:27 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		srcs[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (srcs[i])
			delete srcs[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const &ms)
{
	for (int i = 0; i < 4; i++)
	{
		if (ms.srcs[i])
			srcs[i] = ms.srcs[i]->clone();
	}
}
		
MateriaSource &MateriaSource::operator=(MateriaSource const &ms)
{
	for (int i = 0; i < 4; i++)
	{
		if (ms.srcs[i])
			srcs[i] = ms.srcs[i]->clone();
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* mat)
{
	if (mat)
	{
		for (int i = 0; i < 4; i++)
		{
			if (srcs[i] == NULL)
			{
				srcs[i] = mat->clone();
				return ;
			}
		}
		std::cout << "Can't learn Materia : MateriaSource is full" << std::endl;
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (srcs[i] && srcs[i]->getType() == type)
			return (srcs[i]->clone());
	}
	std::cout << "Can't create Materia : " << type << " doesn't exist in source" << std::endl;
	return (0);
}