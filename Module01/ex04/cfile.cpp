/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cfile.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:38:37 by yongwkim          #+#    #+#             */
/*   Updated: 2021/08/12 15:56:40 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cfile.hpp"

bool	cfile::open(std::string filename)
{
	filein.open(filename);
	if (!filein.is_open())
	{
		std::cout << "Error : Can't open file : " << filename << std::endl;
		return (false);
	}
	fileout.open(filename + ".replace");
	if (!fileout.is_open())
	{
		filein.close();
		std::cout <<  "Error : Can't open file" << filename + ".replace" << std::endl;
		return (false);
	}
	return (true);
}
void	cfile::close()
{
	filein.close();
	fileout.close();
	return ;
}

void	cfile::replace(std::string s1, std::string s2)
{
	std::string		line;

	while (std::getline(filein, line))
	{
		for (std::size_t pos = 0; pos < line.length(); pos++)
		{
			std::cout << pos << std::endl;
			if (line.compare(pos, s1.length(), s1) == 0)
			{
				std::cout << line.substr(pos, s1.length()) << std::endl;
				line.erase(pos, s1.length());
				line.insert(pos, s2);
				pos += s2.length() - 1;
			}
		}
		fileout << line << std::endl;
	}
}