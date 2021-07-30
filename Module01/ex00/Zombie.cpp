/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:17:53 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/29 13:46:49 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name)
{
}

Zombie::~Zombie(void)
{
	std::cout << "<" << name << "> " << "Dyyyyiiinnngg..." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << name << "> " <<  "BraiiiiiiinnnzzzZ..." << std::endl;
}

