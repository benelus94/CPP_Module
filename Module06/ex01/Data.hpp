/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 17:49:23 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/28 15:10:54 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <string>

class Data
{
	private:
		int	i;
		std::string str;
	public:
		Data(int i, std::string str) 
		{
			this->i = i;
			this->str = str;
		};
		int	get_i(){return(this->i);};
		std::string	get_str(){return(this->str);};
};

#endif