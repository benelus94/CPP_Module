/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:17:13 by yongwkim          #+#    #+#             */
/*   Updated: 2022/02/01 11:54:00 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int max_size) : max_size(max_size)
{
}

Span::Span(const Span &s) : max_size(s.max_size), data(s.data)
{
}

Span::~Span()
{
}

Span &Span::operator=(const Span &s)
{
	max_size = s.max_size;
	data = s.data;
	return (*this);
}

std::set<int>	Span::getData()
{
	return (data);
}

void	Span::addNumber(int n)
{
	if (data.size() == max_size)
		throw  ContainerFullException();
	data.insert(n);
}

int		Span::shortestSpan(void)
{
	if (data.size() <= 1)
		throw ContainerTooSmallException();

	std::set<int>::iterator	first = data.begin();
	std::set<int>::iterator	next = ++data.begin();

	int shortest = std::abs(*first - *next);
	for (; next != data.end(); first++, next++)
		shortest = std::min(std::abs(*first - *next), shortest);
	return (shortest);
}

int		Span::longestSpan(void)
{
	if (data.size() <= 1)
		throw ContainerTooSmallException();
	int min = *std::min_element(data.begin(), data.end());
	int max = *std::max_element(data.begin(), data.end());
	return (std::abs(max - min));
}

const char *Span::ContainerFullException::what() const throw()
{
	return ("Container is full");
}

const char *Span::ContainerTooSmallException::what() const throw()
{
	return ("Container is too small");
}
