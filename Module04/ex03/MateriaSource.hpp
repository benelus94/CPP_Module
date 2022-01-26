/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:41:05 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/26 15:24:08 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	srcs[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &ms);
		MateriaSource &operator=(MateriaSource const &ms);

		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const &type);
	
};

#endif