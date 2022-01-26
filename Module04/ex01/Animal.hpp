/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:26:59 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/24 17:57:48 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(Animal const &a);
		virtual ~Animal();
		Animal &operator=(Animal const &a);

		virtual std::string	getType() const;
		virtual void		makeSound() const;
		virtual void		print_brain_addr() const;
};

#endif