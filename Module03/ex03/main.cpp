/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:33:58 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/24 15:21:55 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "string"

int	main()
{
	std::string	name;
	std::string	enemy;

	std::cout << "What's your DiamondTrap's name? : ";
	std::cin >> name;

	//DiamondTrap dt_prev(name);
	DiamondTrap	dt(name);
	//dt = dt_prev;
	std::cout << "What's your enemy's name? : ";
	std::cin >> enemy;
	while(1)
	{
		std::cout << "Which function does your DiamondTrap do?" << std::endl;
		std::cout << "Enter the number(1. attack, 2. takeDamage, 3. beRepaired, 4. guardGate, 5. highFivesGuys, 6. whoAmI, 7.exit) : ";
		int	n;
		std::cin >> n;

		if (n == 1)
			dt.attack(enemy);
		else if (n == 2)
		{
			std::cout << "How much damage does it take? : ";
			int	amount;
			std::cin >> amount;
			dt.takeDamage(amount);
		}
		else if (n == 3)
		{
			std::cout << "How much hp will it be repaired? : ";
			int	amount;
			std::cin >> amount;
			dt.beRepaired(amount);
		}
		else if (n == 4)
		{
			dt.guardGate();
		}
		else if (n == 5)
		{
			dt.highFivesGuys();
		}
		else if (n == 6)
		{
			dt.whoAmI();
		}
		else
		{
			return (0);
		}
		std::cout << std::endl;
	}
}