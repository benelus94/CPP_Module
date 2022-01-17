/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:58:17 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/14 17:07:03 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <set>

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
		int		shortestSpan(void);
		int		longestSpan(void);

		//exceptions

		class ContainerFullException
		{
			const char *what() const throw();
		};

		class ContainerTooSmallException
		{
			const char *what() const throw();
		};
};