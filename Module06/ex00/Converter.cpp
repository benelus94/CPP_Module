/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:13:56 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/28 15:54:24 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter() : str(""), dbl(), isint(false)
{
}

Converter::Converter(std::string const &str) : str(str)
{
	if (str.length() == 1 && !std::isdigit(str[0]))
	{
		type = TypeChar;
	}
	else if (is_alpha(str) && !is_exception_str(str))
	{
		type = TypeInvalid;
	}
	else
	{
		type = TypeNum;
		dbl = std::stod(str);
		isint = (dbl - trunc(dbl) == 0) ? true : false;
	}
}

Converter::Converter(Converter const &conv) : str(conv.str), dbl(conv.dbl), isint(conv.isint)
{
}

Converter::~Converter()
{
}

Converter &Converter::operator=(Converter const &conv)
{
	(void) conv;
	(void) dbl;
	(void) isint;
	return (*this);
}

/* exceptions */

const char* Converter::ImpossibleException::what() const throw()
{
	return ("impossible");
}

const char* Converter::NonDisplayableException::what() const throw()
{
	return ("Non displayable");
}

std::string Converter::getStr() const
{
	return (str);
}

double		Converter::getDbl() const
{
	return (dbl);
}

char		Converter::toChar()
{	
	if (type == TypeInvalid || dbl == std::numeric_limits<double>::infinity() || dbl == -std::numeric_limits<double>::infinity() || std::isnan(dbl) || dbl - trunc(dbl) != 0)
		throw ImpossibleException();
	else if (type == TypeChar)
		return (str[0]);
	else if (dbl < 32 || dbl > 126)
		throw NonDisplayableException();
	return (static_cast<char>(dbl));
}

int			Converter::toInt()
{
	if (type == TypeInvalid || dbl - 1 >= std::numeric_limits<int>::max() || dbl + 1 <= std::numeric_limits<int>::min() || std::isnan(dbl))
		throw ImpossibleException();
	else if (type == TypeChar)
		return (str[0]);
	return (static_cast<int>(dbl));
}

float		Converter::toFloat()
{
	if (type == TypeInvalid || dbl > std::numeric_limits<float>::infinity() || dbl < -std::numeric_limits<float>::infinity())
		throw ImpossibleException();
	else if (type == TypeChar)
		return (str[0]);
	return (static_cast<float>(dbl));
}

double		Converter::toDouble()
{
	if (type == TypeInvalid)
		throw ImpossibleException();
	else if (type == TypeChar)
		return (str[0]);
	return (dbl);
}

void	Converter::printResult()
{
	std::cout << "char: ";
	try
	{
		char c = this->toChar();
		std::cout << "'" << c << "'" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "int: ";
	try
	{
		int i = this->toInt();
		std::cout << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << "float: ";
	try
	{
		float f = this->toFloat();
		if (f == std::numeric_limits<float>::infinity())
			std::cout << "+";
		std::cout << f;
		if (isint || get_digit(f) == 6 || type == TypeChar)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "double: ";
	try
	{
		double d = this->toDouble();
		if (d == std::numeric_limits<float>::infinity())
			std::cout << "+";
		std::cout << d;
		if (isint || type == TypeChar)
			std::cout << ".0";
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}
}