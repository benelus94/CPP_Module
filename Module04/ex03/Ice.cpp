/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:27:53 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/26 15:23:09 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(AMateria const &ice) : AMateria(ice.getType())
{
}

Ice::~Ice()
{
}

Ice &Ice::operator=(Ice const &ice)
{
	type = ice.getType();
	return (*this);
}

AMateria*	Ice::clone() const
{
	AMateria *Mclone = new Ice(*this);
	return (Mclone);
}

void		Ice::use(ICharacter& target)
{
	std::cout << " * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}