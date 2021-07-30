/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:03:16 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/29 14:21:29 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *ZombieHorde(int N, std::string name)
{
	Zombie *zombiehorde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		zombiehorde[i].init_name(name);
	}
	return (zombiehorde);

}