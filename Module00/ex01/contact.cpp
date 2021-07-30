/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_contact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:15:12 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/14 16:49:00 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class_contact.hpp"

void contact::replace(std::string _first_name, std::string _last_name,
					std::string _nickname, std::string _phone_number,
					std::string _darkest_secret)
{
	first_name = _first_name;
	last_name = _last_name;
	nickname = _nickname;
	phone_number = _phone_number;
	darkest_secret = _darkest_secret;
}

void print_col(std::string str)
{
	std::cout << "|";
	if (str.length() <= 10)
		std::cout << std::setw(10) << str;
	else
		std::cout << str.substr(0, 9) << ".";
}

void contact::show_search_list(int idx)
{
	std::cout << "|";
	std::cout << std::setw(10) << idx;
	print_col(first_name);
	print_col(last_name);
	print_col(nickname);
	std::cout << "|" << std::endl;
}

void contact::show_contact_info(int idx)
{
	std::cout << "### index " << idx << "'s information" << " ###" << std::endl;
	std::cout << "first_name : " << first_name << std::endl;
	std::cout << "last_name : " << last_name << std::endl;
	std::cout << "nickname : " << nickname << std::endl;
	std::cout << "phone_number : " << phone_number << std::endl;
	std::cout << "dartkest_secret : " << darkest_secret << std::endl;
}
