/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:05:46 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/13 14:41:16 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string tmp_str(argv[i]);
			std::transform(tmp_str.begin(), tmp_str.end(), tmp_str.begin(), toupper);
			std::cout << tmp_str;
		}
		std::endl (std::cout);
	}
}
