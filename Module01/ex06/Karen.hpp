/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:58:46 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/18 17:21:23 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

typedef void (*func_ptr)(void);

class Karen
{
	public:
		enum level {
			DEBUG,
			INFO,
			WARNING,
			ERROR,
			DEFAULT = -1
		};

		Karen(void);
		Karen(std::string _loglevel);
		~Karen(void);
		void	complain(std::string level);
		void	display_filtered_info(Karen::level _level);
		void	filter(void);
		level	string_to_level(std::string _loglevel);
		std::string	level_to_string(level _level);
		level	get_loglevel(void);
		void	insignificant(void);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		level	loglevel;
	
};