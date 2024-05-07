/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:39:15 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/07 18:23:55 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Include.hpp"

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
		
		void GradeTooHighException();
		void GradeTooLowException();
		std::string getName() const;
		bool getIsSigned() const;
		int getGradeRequired() const;
		int getGradeExecute() const;
		void beSigned(const Bureaucrat& bureaucrat);
		
		virtual void	execute(Bureaucrat const & executor) const = 0;
		
};

std::ostream& operator<<(std::ostream& output, const AForm& form);

#endif