/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:15:01 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/27 16:34:59 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(AMateria &mat)
{
	type = mat.type;
}

AMateria::AMateria(std::string const &type) : type(type)
{
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(AMateria &mat)
{
	type = mat.type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	(void) target;
}