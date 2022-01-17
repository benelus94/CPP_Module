/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:35:32 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/27 16:24:03 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria*	inven[4];
	public:
		Character(std::string name);
		Character(Character const &ch);
		~Character();
		Character &operator=(Character const &ch);

		std::string const & getName() const;
		void	equip(AMateria* mat);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif