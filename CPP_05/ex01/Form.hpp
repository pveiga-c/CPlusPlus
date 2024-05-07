/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:37:59 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/07 16:05:55 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Include.hpp"

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
		
		void GradeTooHighException();
		void GradeTooLowException();
		std::string getName() const;
		bool getIsSigned() const;
		int getGradeRequired() const;
		int getGradeExecute() const;
		void beSigned(const Bureaucrat& bureaucrat);
		
};

std::ostream& operator<<(std::ostream& output, const Form& form);

#endif