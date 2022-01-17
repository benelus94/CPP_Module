/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:38:30 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/17 16:29:11 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iterator>

template<typename T>
class MutantStack;

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}; 
		~MutantStack() {};

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(void) {return (this->c.begin());};
		iterator end(void) {return (this->c.end());};
};

#endif