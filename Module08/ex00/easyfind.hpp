/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:06:02 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/11 17:45:19 by yongwkim         ###   ########.fr       */
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