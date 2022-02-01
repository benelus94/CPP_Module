/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:58:17 by yongwkim          #+#    #+#             */
/*   Updated: 2022/02/01 11:53:44 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <set>
#include <cmath>

class Span
{
	private:
		unsigned int	max_size;
		std::set<int>	data;
	public:
		Span(unsigned int max_size);
		Span(const Span &s);
		~Span();
		Span &operator=(const Span &s);


		std::set<int>	getData();
		void	addNumber(int n);
		template<typename Iterator>
		void	addNumber(Iterator begin, Iterator end)
		{
			if (data.size() + std::distance(begin, end) > max_size)
				throw ContainerFullException();
			data.insert(begin, end);
		};
		int		shortestSpan(void);
		int		longestSpan(void);

		//exceptions

		class ContainerFullException : public std::exception
		{
			const char *what() const throw();
		};

		class ContainerTooSmallException : public std::exception
		{
			const char *what() const throw();
		};
};