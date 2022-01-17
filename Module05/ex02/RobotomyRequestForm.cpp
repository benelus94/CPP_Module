/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:39:22 by yongwkim          #+#    #+#             */
/*   Updated: 2021/11/11 15:07:32 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest", 72, 45), target("Default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rrf) : Form(rrf.getName(), rrf.getGradeSign(), rrf.getGradeExec()), target(rrf.target)
{
	
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (target);
}
		
void	RobotomyRequestForm::action() const
{
	srand((unsigned int)time(NULL));

	std::cout << "\"drrrrrrrrrr\"" << std:: endl;
	if (rand() % 2 == 1)
		std::cout << target << " has been robotomized successfully" << std::endl;
	else
		std::cout << target << " failed to be robotomized" << std::endl;
}