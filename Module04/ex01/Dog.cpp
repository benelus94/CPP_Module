/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:50:23 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/20 16:06:14 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog constructor is called." << std::endl;

}

Dog::Dog(const Dog &a)
{
	type = a.type;
	brain = new Brain(*a.brain);
	std::cout << "Dog copy constructor is called." << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor is called." << std::endl;
}

Dog &Dog::operator=(const Dog &a)
{
	type = a.type;
	brain = new Brain(*a.brain);
	std::cout << "Dog copy assignment operator is called." << std::endl;
	return (*this);
}

std::string Dog::getType() const
{
	return (type);
}

void Dog::makeSound() const
{
	std::cout << "bark! bark!" << std::endl;
}