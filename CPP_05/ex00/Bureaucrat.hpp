/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:55:42 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/06 17:11:41 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Include.hpp"

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
};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& bureaucrat);

#endif