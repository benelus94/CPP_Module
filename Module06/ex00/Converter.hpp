/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:13:45 by yongwkim          #+#    #+#             */
/*   Updated: 2021/12/29 17:21:58 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <string>
#include <iostream>
#include <cmath>
#include "utils.hpp"

class Converter
{
	private:
		std::string const	str;
		double	dbl;
		bool	isint;
		int		type;

		enum Type{
			TypeChar,
			TypeNum,
			TypeInvalid
		};

	public:
		Converter();
		Converter(std::string const &str);
		Converter(Converter const &conv);
		~Converter();
		Converter &operator=(Converter const &conv);

		class ImpossibleException : public std::exception
		{
			const char *what() const throw();
		};

		class NonDisplayableException : public std::exception
		{
			const char *what() const throw();
		};
		
		std::string	getStr() const;
		double		getDbl() const;
	
		char		toChar();
		int			toInt();
		float		toFloat();
		double		toDouble();

		void		printResult();

};

#endif