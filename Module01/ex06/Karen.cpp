/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:10:54 by yongwkim          #+#    #+#             */
/*   Updated: 2021/08/17 17:52:49 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void): loglevel(DEFAULT)
{
}

Karen::Karen(std::string _loglevel)
{
	loglevel = string_to_level(_loglevel);
}

Karen::~Karen()
{
}

Karen::level Karen::string_to_level(std::string _loglevel)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == _loglevel)
			return ((level)i);
	}
	return (DEFAULT);
}

std::string Karen::level_to_string(level _level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	if (_level >= 0)
		return levels[_level];
	return ("DEFAULT");
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I just love it!" << std::endl;

}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout << "You don’t put enough!" << std::endl;
	std::cout << "If you did I would not have to ask for it!" << std::endl;

}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::insignificant(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

Karen::level	Karen::get_loglevel(void)
{
	return (loglevel);
}

void	Karen::complain(std::string level)
{
	void (Karen::*complain_ptrs[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string complain_str_arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (complain_str_arr[i] == level)
			(this->*complain_ptrs[i])();
	}
}

void	Karen::display_filtered_info(Karen::level _level)
{
	std::string	level_str = level_to_string(_level);
	
	std::cout << "[ " << level_str << " ]" << std::endl;
	complain(level_str);
	std::cout << std::endl;
}

void	Karen::filter(void)
{
	switch (get_loglevel())
	{
		case DEBUG:
			display_filtered_info(DEBUG);
		case INFO:
			display_filtered_info(INFO);
		case WARNING:
			display_filtered_info(WARNING);
		case ERROR:
			display_filtered_info(ERROR);
			break;
		default:
			insignificant();
	}
}