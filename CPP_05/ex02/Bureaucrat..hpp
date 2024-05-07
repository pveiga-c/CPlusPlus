/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat..hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:37:06 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/07 16:42:05 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Include.hpp"
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

		void GradeTooHighException();
		void GradeTooLowException();
		int getGrade() const;
		std::string getName() const;
		void incrementGrade(int grade);
		void decrementGrade(int grade);
		void signForm(const Form& form) const;

};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& bureaucrat);

#endif