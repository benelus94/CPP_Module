/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:33:58 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/07 16:58:23 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "string"

int	main()
{
	std::string	name;
	std::string	enemy;

	std::cout << "What's your FragTrap's name? : ";
	std::cin >> name;

	FragTrap	ft(name);
	std::cout << "What's your enemy's name? : ";
	std::cin >> enemy;
	while(1)
	{
		std::cout << "Which function does your FragTrap do?" << std::endl;
		std::cout << "Enter the number(1. attack, 2. takeDamage, 3. beRepaired, 4. highFivesGuys, 5. exit) : ";
		int	n;
		std::cin >> n;

		if (n == 1)
			ft.attack(enemy);
		else if (n == 2)
		{
			std::cout << "How much damage does it take? : ";
			int	amount;
			std::cin >> amount;
			ft.takeDamage(amount);
		}
		else if (n == 3)
		{
			std::cout << "How much hp will it be repaired? : ";
			int	amount;
			std::cin >> amount;
			ft.beRepaired(amount);
		}
		else if (n == 4)
		{
			ft.highFivesGuys();
		}
		else
		{
			return (0);
		}
		std::cout << std::endl;
	}
}