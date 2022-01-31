/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:48:35 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/31 19:30:11 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include "iter.hpp"
#include <iostream>
#include <string>

class Awesome 
{
	public: 
	Awesome( void ) : _n( 42 ) { return; } 
	int get( void ) const { return this->_n; } 
	private: 
	int _n; 
}; 

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; } 

template<typename T>
void	print(T const &t)
{
	std::cout << t << std::endl;
}

#endif