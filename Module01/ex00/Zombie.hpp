/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:18:04 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/29 13:59:30 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	std::string	name;

	public:
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif