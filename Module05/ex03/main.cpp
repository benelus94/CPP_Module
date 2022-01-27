/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:53:06 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/27 17:01:03 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	bur("Kim", 6);
	Intern		intern;
	Form		*scf = intern.makeForm("shrubbery creation", "Bendor");
	Form		*rrf = intern.makeForm("robotomy request", "Bendor");
	Form		*ppf = intern.makeForm("presidential pardon", "Bendor");
	Form		*wrongForm = intern.makeForm("Unknown", "Bendor");	

	(void) wrongForm;
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