/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:25:52 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/26 15:22:25 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(AMateria const &ice);
		~Ice();
		Ice &operator=(Ice const &ice);
		AMateria*	clone() const;
		void		use(ICharacter& target);	
};

#endif