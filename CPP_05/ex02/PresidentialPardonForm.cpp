/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:39:21 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/08 18:24:51 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include.hpp"

PresidentialPardonForm::PresidentialPardonForm(): _target(" "), AForm("PresidentialPardonForm", 25, 5)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target), AForm("PresidentialPardonForm", 25, 5)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
{
	*this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	if(this != &copy)
		this->_target = copy._target;
}


std::string PresidentialPardonForm::getTarget() const
{
	return (_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	
}

