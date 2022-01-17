/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:42:40 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/14 18:48:38 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal constructor is called." << std::endl;
}

Animal::Animal(const Animal &a)
{
	type = a.getType();
	std::cout << "Animal copy constructor is called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor is called." << std::endl;
}

Animal &Animal::operator=(const Animal &a)
{
	type = a.type;
	std::cout << "Animal copy assignment operator is called." << std::endl;
	return (*this);
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "Can't make sound." << std::endl;
}