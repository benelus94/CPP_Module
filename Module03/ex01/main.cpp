/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:33:58 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/24 14:48:08 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "string"

int	main()
{
	std::string	name;
	std::string	enemy;

	std::cout << "What's your ScavTrap's name? : ";
	std::cin >> name;

	ScavTrap	st_prev(name);
	ScavTrap	st;
	st = st_prev;
	std::cout << "What's your enemy's name? : ";
	std::cin >> enemy;
	while(1)
	{
		std::cout << "Which function does your ScavTrap do?" << std::endl;
		std::cout << "Enter the number(1. attack, 2. takeDamage, 3. beRepaired, 4. guardGate 5. exit) : ";
		int	n;
		std::cin >> n;

		if (n == 1)
			st.attack(enemy);
		else if (n == 2)
		{
			std::cout << "How much damage does it take? : ";
			int	amount;
			std::cin >> amount;
			st.takeDamage(amount);
		}
		else if (n == 3)
		{
			std::cout << "How much hp will it be repaired? : ";
			int	amount;
			std::cin >> amount;
			st.beRepaired(amount);
		}
		else if (n == 4)
		{
			st.guardGate();
		}
		else
		{
			return (0);
		}
		std::cout << std::endl;
	}
}