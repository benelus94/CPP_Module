/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:33:58 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/24 14:43:16 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "string"

int	main()
{
	std::string	name;
	std::string	enemy;

	std::cout << "What's your ClapTrap's name? : ";
	std::cin >> name;

	ClapTrap	ct_prev(name);
	ClapTrap	ct;
	ct = ct_prev;
	std::cout << "What's your enemy's name? : ";
	std::cin >> enemy;
	while(1)
	{
		std::cout << "Which function does your ClapTrap do?" << std::endl;
		std::cout << "Enter the number(1. attack, 2. takeDamage, 3. beRepaired, 4. exit) : ";
		int	n;
		std::cin >> n;

		if (n == 1)
			ct.attack(enemy);
		else if (n == 2)
		{
			std::cout << "How much damage does it take? : ";
			int	amount;
			std::cin >> amount;
			ct.takeDamage(amount);
		}
		else if (n == 3)
		{
			std::cout << "How much hp will it be repaired? : ";
			int	amount;
			std::cin >> amount;
			ct.beRepaired(amount);
		}
		else
		{
			return (0);
		}
		std::cout << std::endl;
	}
}