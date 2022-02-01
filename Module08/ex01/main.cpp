/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:50:07 by yongwkim          #+#    #+#             */
/*   Updated: 2022/02/01 11:55:31 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		//sp.addNumber(12);
		std::set<int> s = sp.getData();
		print_container(s);
		std::cout << "shortest = " << sp.shortestSpan() << std::endl;
		std::cout << "longest = " << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span sprandom = Span(20000);
		std::set<int> tmp;
		srand(time(NULL));
		for (int i = 0; i < 20000; i++)
		{
			tmp.insert(rand() % 100000);			
		}
		sprandom.addNumber(tmp.begin(), tmp.end());
		std::cout << "shortest = " << sprandom.shortestSpan() << std::endl;
		std::cout << "longest = " << sprandom.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;;
	}
	
}