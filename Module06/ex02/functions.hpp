/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 17:00:21 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/28 15:40:10 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <exception>

template<typename T>
Base	*construct(void)
{
	return (dynamic_cast<Base*>(new T()));
}

Base *generate(void);

void	identify(Base *p);
void	identify(Base &p);
#endif