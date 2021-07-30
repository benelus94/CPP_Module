/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:18:04 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/29 14:20:21 by yongwkim         ###   ########.fr       */
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
		Zombie();
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
		void init_name(std::string name);
};

Zombie *ZombieHorde(int N, std::string name);

#endif