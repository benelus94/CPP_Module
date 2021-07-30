/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:57:14 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/29 14:02:03 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie Kim("Kim");
	Kim.announce();
	Zombie *Yong = newZombie("Yong");
	Yong->announce();
	delete Yong;
	randomChump("Wook");
}