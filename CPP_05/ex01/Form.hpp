/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 09:55:00 by correia           #+#    #+#             */
/*   Updated: 2024/05/03 16:31:46 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string _name;
		bool _isSigned;
		const int _signedGrade;
		const int _execGrade;
		
	public:
		Form();
		Form(std::string name, int signedGrade, int executedGrade);
		Form(const Form& copy);
		Form& operator=(const Form& copy);
		std::string getname() const;
		bool getsign() const;
		int getsignedGrade() const;
		int getexecGrade() const;
		void signForm(const Bureaucrat& parm);
};