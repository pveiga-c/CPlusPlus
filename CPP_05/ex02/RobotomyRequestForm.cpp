/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:39:26 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/08 18:29:43 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include.hpp"

RobotomyRequestform::RobotomyRequestform() : _target(" "), AForm("RobotomyRequestform", 72, 45)
{

}

RobotomyRequestform::RobotomyRequestform(std::string target) : _target(target), AForm("RobotomyRequestform", 72, 45)
{
	
}

RobotomyRequestform::~RobotomyRequestform()
{
	
}

RobotomyRequestform::RobotomyRequestform(const RobotomyRequestform& copy)
{
	*this = copy;
}

RobotomyRequestform& RobotomyRequestform::operator=(const RobotomyRequestform& copy)
{
	if(this != &copy)
		this->_target = copy._target;
	return (*this);
}

std::string RobotomyRequestform::getTarget() const
{
	return (_target);
}

void RobotomyRequestform::execute(Bureaucrat const & executor) const
{
	
}
