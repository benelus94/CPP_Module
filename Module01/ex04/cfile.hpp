/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cfile.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:57:16 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/18 17:20:43 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CFILE_HPP
# define CFILE_HPP

#include <fstream>
#include <iostream>
#include <string>

class cfile
{
	private:
		std::ifstream filein;
		std::ofstream fileout;
	
	public:
		bool open(std::string filename);
		void close();
		void replace(std::string s1, std::string s2);
};

#endif