/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:30:24 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/26 15:20:05 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(AMateria const &cure);
		~Cure();
		Cure &operator=(Cure const &cure);

		AMateria*	clone() const;
		void		use(ICharacter& target);	
};

#endif