/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:22:47 by yongwkim          #+#    #+#             */
/*   Updated: 2021/08/12 14:59:47 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "cfile.hpp"

int	main(int argc, char **argv)
{
	cfile	f1;
	std::string	s1;
	std::string	s2;

	if (argc != 4)
		std::cout << "Wrong arguments (need \"filename s1 s2\")" << std::endl;
	else if ((s1 = argv[2]) == "" || (s2 = argv[3]) == "")
		std::cout << "Error : Strings can't be empty string." << std::endl;
	else
	{
		if (!f1.open(argv[1]))
			return (0);
		f1.replace(argv[2], argv[3]);
		f1.close();
	}
}