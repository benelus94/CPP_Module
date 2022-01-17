/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:28:50 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/18 16:29:32 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor is called." << std::endl;
}

Brain::Brain(Brain const &br)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = br.ideas[i];
	std::cout << "Brain copy constructor is called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor is called." << std::endl;
}

Brain &Brain::operator=(Brain const &br)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = br.ideas[i];
	std::cout << "Brain copy assignment operator is called." << std::endl;
	return (*this);
}