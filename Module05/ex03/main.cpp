/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:53:06 by yongwkim          #+#    #+#             */
/*   Updated: 2021/11/11 15:07:42 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	bur("Kim", 6);
	Form		*scf = new ShrubberyCreationForm("target");
	Form		*rrf = new RobotomyRequestForm("target");
	Form		*ppf = new PresidentialPardonForm("target");

	std::cout << "------- ShrubberyCreation -------" << std::endl;
	bur.executeForm(*scf);
	bur.signForm(*scf);
	bur.executeForm(*scf);
	std::cout << std::endl;

	std::cout << "------- RobotomyCreation -------" << std::endl;
	bur.executeForm(*rrf);
	bur.signForm(*rrf);
	bur.executeForm(*rrf);
	std::cout << std::endl;

	std::cout << "------- PresidentialPardon -------" << std::endl;
	bur.executeForm(*ppf);
	bur.signForm(*ppf);
	bur.executeForm(*ppf);
	bur.gradeUp();
	bur.executeForm(*ppf);
	std::cout << std::endl;

	delete scf;
	delete rrf;
	delete ppf;
}