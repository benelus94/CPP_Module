/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:02:29 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/15 16:02:29 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor is called." << std::endl;

}

WrongCat::WrongCat(const WrongCat &a)
{
	type = a.type;
	std::cout << "WrongCat copy constructor is called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor is called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &a)
{
	type = a.type;
	std::cout << "WrongCat copy assignment operator is called." << std::endl;
	return (*this);
}

std::string WrongCat::getType() const
{
	return (type);
}

void WrongCat::makeSound() const
{
	std::cout << "meow~ meow~" << std::endl;
}