/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:01:20 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/15 16:08:46 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal constructor is called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	type = a.getType();
	std::cout << "WrongAnimal copy constructor is called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor is called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
	type = a.type;
	std::cout << "WrongAnimal copy assignment operator is called." << std::endl;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Can't make sound." << std::endl;
}