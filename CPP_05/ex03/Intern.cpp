/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:54:43 by correia           #+#    #+#             */
/*   Updated: 2024/05/09 18:06:50 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &copy)
{
	(void)copy;
	return *this;
}

AForm *Intern::makeForm(const std::string &formName, const std::string &formTarget)
{
	AForm *form = NULL;
	std::string forms_str[] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
	};
	int i = 0;
	while (i < 4 && forms_str[i].compare(formName))
		i++ ;
	switch (i)
	{
		case 0:
			form = new ShrubberyCreationForm(formTarget);
			break;
		case 1:
			form = new RobotomyRequestForm(formTarget);
			break;
		case 2:
			form = new PresidentialPardonForm(formTarget);
			break;
		default:
			std::cout <<"Error: No form found" << std::endl;
	}
	if (form)
		std::cout<< "Intern creates " << forms_str[i] << std::endl;
	return form;
}