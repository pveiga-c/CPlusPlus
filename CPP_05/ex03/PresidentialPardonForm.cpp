/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:39:21 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/09 17:44:30 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
AForm("PresidentialPardonForm", 25, 5)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
AForm(target, 25, 5)
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
	return (*this);
}


std::string PresidentialPardonForm::getTarget() const
{
	return (_target);
}

void PresidentialPardonForm::execute() const
{
	std::cout << this->getName() << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}

