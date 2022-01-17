/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:57:30 by yongwkim          #+#    #+#             */
/*   Updated: 2021/11/04 15:59:32 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		std::string	const	name;
		int					grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &bur);
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &bur);


		/* exceptions */
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException() throw();
				~GradeTooHighException() throw();
				const char* what() const throw();
		};
		
		class GradeTooLowException
		{
			public:
				GradeTooLowException() throw();
				~GradeTooLowException() throw();
				const char* what() const throw();

		};

		/* getters */
		std::string	getName() const;
		int			getGrade() const;

		/* inc and dec functions */
		void		gradeUp();
		void		gradeDown();


};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bur);

#endif