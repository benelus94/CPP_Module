/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:02:43 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/27 18:59:06 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	name;
		bool	sign;
		int const			grade_sign;
		int	const			grade_exec;
	
	public:
		Form();
		Form(std::string name, int grade_sign, int grade_exec);
		Form(Form const &form);
		virtual ~Form();
		Form &operator=(Form const &form);

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException() throw();
				~GradeTooHighException() throw();
				const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException() throw();
				~GradeTooLowException() throw();
				const char* what() const throw();
		};

		class NotSignedException : public std::exception
		{
			public:
				NotSignedException() throw();
				~NotSignedException() throw();
				const char* what() const throw();
		};
		
		std::string	getName() const;
		bool		getSign() const;
		int			getGradeSign() const;
		int			getGradeExec() const;

		void	beSigned(Bureaucrat const &bur);
		void	execute(Bureaucrat const &executor) const;
		virtual void	action() const;
};

std::ostream	&operator<<(std::ostream &os, const Form &form);

#endif