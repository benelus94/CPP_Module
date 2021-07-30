/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 14:51:18 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/14 16:50:50 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	std::string	input;
	pb	my_pb;

	while (1)
	{
		std::cout << "Enter the command(ADD, SEARCH, EXIT) : ";
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
			my_pb.add();
		}
		else if (input.compare("SEARCH") == 0)
		{
			my_pb.search();
		}
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "EXIT" << std::endl;
			break ;
		}
	}
	return (0);
}

