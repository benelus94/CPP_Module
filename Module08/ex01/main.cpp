/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:50:07 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/12 16:17:51 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

template <typename T>
void	print_container(T &t)
{
	typename T::iterator it;
	std::cout << "container : [";
	for (it = t.begin(); it != t.end(); it++)
	{
		std::cout << *it << ", ";
	}
	std::cout << "]" << std::endl;
}

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::set<int> s = sp.getData();
	print_container(s);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}