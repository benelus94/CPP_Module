/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:53:35 by yongwkim          #+#    #+#             */
/*   Updated: 2022/02/01 11:05:40 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

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

#endif