/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:50:07 by yongwkim          #+#    #+#             */
/*   Updated: 2022/02/01 10:33:23 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>

int main()
{
	std::cout << "vector" << std::endl;
	std::vector<int> v;
	for (int i = 0; i < 5; i++)
		v.push_back(i);
	print_container(v);
	std::vector<int>::iterator found = easyfind(v, 3);
	if (found != v.end())
		std::cout << "Succefully find 3 in vector" << std::endl;
	else
		std::cout << "Can't find 3 in vector" << std::endl;
	std::cout << std::endl;

	std::cout << "deque" << std::endl;
	std::deque<int> d;
	for (int i = 0; i < 5; i++)
		d.push_back(i); 
	print_container(d);
	std::deque<int>::iterator found2 = easyfind(d, 3);
	if (found2 != d.end())
		std::cout << "Succefully find 3 in deque" << std::endl;
	else
		std::cout << "Can't find 3 in deque" << std::endl;
	std::cout << std::endl;
	
	std::cout << "list" << std::endl;
	std::list<int> l;
	for (int i = 0; i < 5; i++)
		l.push_back(i); 
	print_container(l);
	std::list<int>::iterator found3 = easyfind(l, 3);
	if (found3 != l.end())
		std::cout << "Succefully find 3 in list" << std::endl;
	else
		std::cout << "Can't find 3 in list" << std::endl;
	std::cout << std::endl;
	
	std::cout << "set" << std::endl;
	std::set<int> s;
	for (int i = 0; i < 5; i++)
		s.insert(i); 
	print_container(s);
	std::set<int>::iterator found4 = easyfind(s, 3);
	if (found4 != s.end())
		std::cout << "Succefully find 3 in set" << std::endl;
	else
		std::cout << "Can't find 3 in set" << std::endl;
	std::cout << std::endl;
}