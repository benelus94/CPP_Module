/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cfile.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:57:16 by yongwkim          #+#    #+#             */
/*   Updated: 2021/08/11 17:21:10 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CFILE_HPP
# define CFILE_HPP

#include <fstream>
#include <iostream>
#include <string>

class cfile
{
	std::ifstream filein;
	std::ofstream fileout;
	public:
		bool open(std::string filename);
		void close();
		void replace(std::string s1, std::string s2);
};

#endif