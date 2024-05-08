/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:55:42 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/08 20:15:36 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int 				_grade;
		
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int _grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat &copy);

		int getGrade() const;
		std::string getName() const;
		void incrementGrade(int grade);
		void decrementGrade(int grade);
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		void signForm(Form& form) const;
};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& bureaucrat);

#endif