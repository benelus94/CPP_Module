/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:10:47 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/29 14:26:18 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombiehorde;
	zombiehorde = ZombieHorde(5, "Kim");
	for (int i = 0; i < 5; i++)
		zombiehorde[i].announce();
	delete[] zombiehorde;

}