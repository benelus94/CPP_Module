/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:16:49 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/29 16:35:34 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = new std::string;
	std::string	&stringREF = str;

	*stringPTR = str;
	stringREF = str;
	std::cout << "address of string : " << &str << std::endl;
	std::cout << "address of stringPTR : " << stringPTR << std::endl;
	std::cout << "address of stringREF : " << &stringREF << std::endl;
	std::cout << "string with pointer : " << *stringPTR << std::endl;
	std::cout << "string with reference : " << stringREF << std::endl;

}