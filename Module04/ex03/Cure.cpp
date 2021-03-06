/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:21:07 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/26 15:22:07 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(AMateria const &cure) : AMateria(cure.getType())
{
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const &cure)
{
	type = cure.getType();
	return (*this);
}

AMateria*	Cure::clone() const
{
	AMateria *Mclone = new Cure(*this);
	return (Mclone);
}

void		Cure::use(ICharacter& target)
{
	std::cout << " * heals " << target.getName() << "'s wounds *" << std::endl;
}