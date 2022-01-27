/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:53:06 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/27 18:58:24 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat	bur("Kim", 5);
	Form		f1("f1", 2, 7);
	Form		f2("f2", 6, 10);

	std::cout << bur << std::endl;
	std::cout << f1 << std::endl;
	bur.signForm(f1);
	std::cout << f2 << std::endl;
	bur.signForm(f2);
}