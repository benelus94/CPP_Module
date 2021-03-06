/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:06:02 by yongwkim          #+#    #+#             */
/*   Updated: 2022/02/01 10:33:17 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>

template<typename T>
typename T::iterator	easyfind(T &t, int n)
{
	typename T::iterator it;

	return (std::find(t.begin(), t.end(), n));
}

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