/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:37:59 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/08 20:15:31 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeRequired;
		const int _gradeExecute;
	
	public:
		Form();
		Form(std::string name, int gradeRequired, int gradeExecute);
		~Form();
		Form(const Form& copy);
		Form& operator=(const Form& copy);
		
		std::string getName() const;
		bool getIsSigned() const;
		int getGradeRequired() const;
		int getGradeExecute() const;
		void beSigned(const Bureaucrat& bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		
};

std::ostream& operator<<(std::ostream& output, const Form& form);

#endif