/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:07:44 by yongwkim          #+#    #+#             */
/*   Updated: 2021/11/10 17:13:56 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon", 25, 5), target("Default")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ppf) : Form(ppf.getName(), ppf.getGradeSign(), ppf.getGradeExec()), target(ppf.target)
{
	
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (target);
}
		
void	PresidentialPardonForm::action() const
{
	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl; 
}