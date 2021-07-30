/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_contact.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:06:30 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/14 16:40:26 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONTACT_HPP
# define CLASS_CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class contact
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	public:
		void replace(std::string _first_name, std::string _last_name,
					std::string _nickname, std::string _phone_number,
					std::string _darkest_secret);
		void show_search_list(int idx);
		void show_contact_info(int idx);
};

#endif