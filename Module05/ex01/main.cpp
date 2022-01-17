/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:53:06 by yongwkim          #+#    #+#             */
/*   Updated: 2021/11/09 16:53:59 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat	bur("Kim", 5);
	Form		f1("f1", 2, 7);
	Form		f2("f2", 6, 10);

	bur.signForm(f1);
	bur.signForm(f2);
}