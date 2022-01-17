/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:47:57 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/27 16:14:37 by yongwkim         ###   ########.fr       */
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

void		MateriaSource::learnMateria(AMateria* mat)
{
	if (mat)
	{
		for (int i = 0; i < 4; i++)
		{
			if (srcs[i] == NULL)
			{
				srcs[i] = mat;
				return ;
			}
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (srcs[i] && srcs[i]->getType() == type)
			return (srcs[i]->clone());
	}
	return (0);
}