/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:54:36 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/14 18:47:00 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor is called." << std::endl;

}

Cat::Cat(const Cat &a)
{
	type = a.type;
	std::cout << "Cat copy constructor is called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor is called." << std::endl;
}

Cat &Cat::operator=(const Cat &a)
{
	type = a.type;
	std::cout << "Cat copy assignment operator is called." << std::endl;
	return (*this);
}

std::string Cat::getType() const
{
	return (type);
}

void Cat::makeSound() const
{
	std::cout << "meow~ meow~" << std::endl;
}