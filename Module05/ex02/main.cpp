/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:53:06 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/27 19:01:24 by yongwkim         ###   ########.fr       */
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

	std::cout << bur << std::endl;
	std::cout << "------- ShrubberyCreation -------" << std::endl;
	std::cout << *scf << std::endl << std::endl;
	bur.executeForm(*scf);
	bur.signForm(*scf);
	bur.executeForm(*scf);
	std::cout << std::endl;

	std::cout << "------- RobotomyCreation -------" << std::endl;
	std::cout << *rrf << std::endl << std::endl;
	bur.executeForm(*rrf);
	bur.signForm(*rrf);
	bur.executeForm(*rrf);
	std::cout << std::endl;

	std::cout << "------- PresidentialPardon -------" << std::endl;
	std::cout << *ppf << std::endl << std::endl;
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