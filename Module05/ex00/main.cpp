/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:53:06 by yongwkim          #+#    #+#             */
/*   Updated: 2021/11/04 16:00:49 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat bur("Kim", 3);
		bur.gradeDown();
		bur.gradeUp();
		bur.gradeUp();
		bur.gradeUp();
		bur.gradeUp();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}