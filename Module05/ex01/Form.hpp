/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:02:43 by yongwkim          #+#    #+#             */
/*   Updated: 2021/11/09 16:54:30 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
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
		~Form();
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

		std::string	getName() const;
		bool		getSign() const;
		int			getGradeSign() const;
		int			getGradeExec() const;

		void		beSigned(Bureaucrat const &bur);
};

std::ostream	&operator<<(std::ostream &os, Form &form);

#endif