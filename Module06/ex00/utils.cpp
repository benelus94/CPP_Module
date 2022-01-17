/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 15:53:17 by yongwkim          #+#    #+#             */
/*   Updated: 2021/12/30 17:01:19 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>

int	get_digit(float f)
{
	int intpart = truncf(f);
	
	int	digit = 0;
	while (intpart != 0)
	{
		digit++;
		intpart /= 10;
	}
	return (digit);
	
}

bool	is_alpha(std::string str)
{
	int i;

	for (i = 0; i < (int)str.length(); i++)
	{
		if (std::isdigit(str[i]))
			return (false);
	}
	return (true);

}

bool	is_exception_str(std::string str)
{
	std::string	exceptions[6] = {"nan", "nanf", "+inf", "-inf", "+inff", "-inff"};

	for (int i = 0; i < 6; i++)
	{
		if (exceptions[i] == str)
			return (true);
	}
	return (false);
}