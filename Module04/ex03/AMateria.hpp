/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:10:15 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/27 16:34:39 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria;

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria();
		AMateria(AMateria &mat);
		AMateria(std::string const &type);
		virtual	~AMateria();
		AMateria &operator=(AMateria &mat);

		std::string const &getType() const;

		virtual	AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif