/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:58:27 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/27 18:59:14 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("Default"), sign(false), grade_sign(150), grade_exec(150)
{	
}

Form::Form(std::string name, int grade_sign, int grade_exec) : name(name), sign(false), grade_sign(grade_sign), grade_exec(grade_exec)
{	
	if (getGradeSign() < 1 || getGradeExec() < 1)
		throw Form::GradeTooHighException();
	else if (getGradeSign() > 150 || getGradeExec() > 150)
		throw Form::GradeTooLowException();
}
Form::Form(Form const &form) : name(form.name), sign(form.sign), grade_sign(form.grade_sign), grade_exec(form.grade_exec)
{
	if (getGradeSign() < 1 || getGradeExec() < 1)
		throw Form::GradeTooHighException();
	else if (getGradeSign() > 150 || getGradeExec() > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{

}

Form &Form::operator=(Form const &form)
{
	sign = form.sign;
	return (*this);
}

/* exceptions */

Form::GradeTooHighException::GradeTooHighException() throw()
{
	
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
	
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

Form::GradeTooLowException::GradeTooLowException() throw()
{

}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
	
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

Form::NotSignedException::NotSignedException() throw()
{

}

Form::NotSignedException::~NotSignedException() throw()
{
	
}

const char* Form::NotSignedException::what() const throw()
{
	return ("The form is not signed");
}

/* getters */
std::string	Form::getName() const
{
	return (name);
}

bool		Form::getSign() const
{
	return (sign);
}
int			Form::getGradeSign() const
{
	return (grade_sign);
}

int			Form::getGradeExec() const
{
	return (grade_exec);
}

/* it's own function */
void		Form::beSigned(Bureaucrat const &bur)
{
	if (bur.getGrade() <= grade_sign)
		sign = true;
	else
		throw Form::GradeTooLowException();
}

void		Form::execute(Bureaucrat const &executor) const
{
	if (this->getSign() == false)
		throw Form::NotSignedException();
	else if (executor.getGrade() > this->getGradeExec())
		throw Form::GradeTooLowException();
	else
		this->action();
}

void		Form::action() const
{
	std::cout << "Form action" << std::endl;
}

/* operator overloading */
std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << form.getName() << ", sign " << std::boolalpha << form.getSign();
	os << ", grade_sign " << form.getGradeSign() << ", grade_exec " << form.getGradeExec();
	return (os);
}