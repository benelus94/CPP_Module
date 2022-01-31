/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:11:24 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/31 19:16:38 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(T &a, T &b)
{
	if (a >= b)
		return (b);
	else
		return (a);
}

template<typename T>
T	max(T &a, T &b)
{
	if (a <= b)
		return (b);
	else
		return (a);
}

#endif