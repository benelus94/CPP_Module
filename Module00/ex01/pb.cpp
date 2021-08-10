/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:58:37 by yongwkim          #+#    #+#             */
/*   Updated: 2021/08/10 16:25:41 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pb.hpp"

void pb::add(void)
{
	std::string	first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "first_name : ";
	std::getline(std::cin, first_name);
	std::cout << "last_name : ";
	std::getline(std::cin, last_name);
	std::cout << "nick_name : ";
	std::getline(std::cin, nickname);
	std::cout << "phone_number : ";
	std::getline(std::cin, phone_number);
	std::cout << "darkest_secret : ";
	std::getline(std::cin, darkest_secret);
	contacts[add_idx++].replace(first_name, last_name, nickname, phone_number, darkest_secret);
	if (add_idx == 8)
		add_idx = 0;
	else
		n_contacts++;
}

void pb::search(void)
{
	std::string idxstr;
	int	idxint;

	std::cout << " ------------------------------------------- " << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < n_contacts; i++)
	{
		std::cout << "|-------------------------------------------|" << std::endl;
		contacts[i].show_search_list(i);
	}
	std::cout << " ------------------------------------------- " << std::endl;
	std::cout << "Enter index number to see more information : ";
	std::getline(std::cin, idxstr);
	if (idxstr != "")
	{
		idxint = std::stoi(idxstr);
		contacts[idxint].show_contact_info(idxint);
	}
}
