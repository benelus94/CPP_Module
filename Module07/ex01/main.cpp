/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:50:07 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/31 19:30:42 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main( void )
{
	std::string strs[] = {"I", "like", "an", "apple"};
	iter(strs, 4, print);
	int	n[] = {1, 2, 3, 4};
	iter(n, 4, print); 

	std::cout << std::endl;
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more
	Awesome tab2[5]; 
	iter( tab, 5, print ); 
	iter( tab2, 5, print ); 
	return 0;
}