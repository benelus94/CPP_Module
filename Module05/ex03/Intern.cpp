/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:12:25 by yongwkim          #+#    #+#             */
/*   Updated: 2021/11/11 16:44:14 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &i)
{
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &i)
{
}

Form *makeShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm());
}
Form *makeRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm());
};
Form *makePresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm());
}

Form *Intern::makeForm(std::string formname, std::string target)
{
	Form *(*func_ptrs[3])(std::string target) = {&makeShrubberyCreationForm, &makeRobotomyRequestForm, &makePresidentialPardonForm};
	std::string arr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (arr[i] == formname)
		{
			std::cout << "Intern creates " << formname << std::endl;
			return (func_ptrs[i](target));
		}
	}
	std::cout << "Intern can't make unknown form" << std::endl;
}