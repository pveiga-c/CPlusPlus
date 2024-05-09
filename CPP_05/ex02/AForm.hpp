/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:39:15 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/09 17:42:46 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeRequired;
		const int _gradeExecute;
	
	public:
		AForm();
		AForm(std::string name, int gradeRequired, int gradeExecute);
		~AForm();
		AForm(const AForm& copy);
		AForm& operator=(const AForm& copy);
		
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
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		
		virtual void	execute() const = 0;
		void	checkRequirements(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream& output, const AForm& form);

#endif