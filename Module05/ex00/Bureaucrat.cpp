/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:06:35 by yongwkim          #+#    #+#             */
/*   Updated: 2021/11/10 17:39:42 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150)
{
	
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &bur) : name(bur.name), grade(bur.grade)
{
	if (bur.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (bur.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
	
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bur)
{
	if (bur.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (bur.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	grade = bur.grade;
	return (*this);
}

/* exception classes */
Bureaucrat::GradeTooHighException::GradeTooHighException() throw()
{
	
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade can't be over 1");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw()
{

}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade can't be under 150");
}

/* getters */
std::string	Bureaucrat::getName() const
{
	return (name);
}

int			Bureaucrat::getGrade() const
{
	return (grade);
}

/* inc and dec functions */
void		Bureaucrat::gradeUp()
{
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		grade -= 1;
	std::cout << *this << std::endl;
	//std::cout << name << "'s grade is upgraded from " << grade + 1 << " to " << grade;
}

void		Bureaucrat::gradeDown()
{
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade += 1;
	std::cout << *this << std::endl;
	//std::cout << name << "'s grade is downgraded from " << grade - 1 << " to " << grade;
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bur)
{
	os << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return (os);
}