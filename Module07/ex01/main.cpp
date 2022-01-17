/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:50:07 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/10 14:54:08 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template<typename T>
void	print(T &t)
{
	std::cout << t << std::endl;
}

template<typename T>
void	addone(T &t)
{
	t++;
}

int main( void )
{
	std::string strs[] = {"I", "like", "an", "apple"};
	iter(strs, 4, print);
	int	n[] = {1, 2, 3, 4};
	iter(n, 4, addone);
	iter(n, 4, print); 
}